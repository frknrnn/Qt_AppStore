#include "splashscreen.h"
#include "ui_splashscreen.h"
#include "mainwindow.h"
#include <QDebug>
#include <QMovie>
#include <QApplication>
#include <QMainWindow>
#include <QTimer>
#include <QDebug>


SplashScreen::SplashScreen(QWidget *parent)
    : QMainWindow(parent,Qt::FramelessWindowHint)
    , ui(new Ui::SplashScreen)
{
    ui->setupUi(this);

    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int x = (screenGeometry.width() - width()) / 2;
    int y = (screenGeometry.height() - height()) / 2;
    move(x, y); // Pencereyi merkeze taşı
    ui->stackedWidget->setCurrentIndex(0);
    showLoadingPage();
}

SplashScreen::~SplashScreen()
{
    delete ui;
}

void SplashScreen::OpenMainApp()
{
    this->hide();
    MainWindow *newApp = new MainWindow();
    newApp->show();

}

void SplashScreen::mousePressEvent(QMouseEvent *event)
{
    mouseClickMove_X = event->x();
    mouseClickMove_Y = event->y();
}

void SplashScreen::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalX()-mouseClickMove_X,event->globalY()-mouseClickMove_Y);
}


void SplashScreen::showLoadingPage()
{
    loginPageAnimation =new QPropertyAnimation(ui->frame_login,"geometry");
    loginPageAnimation->setDuration(1500);
    loginPageAnimation->setStartValue(QRect(20,-650,ui->frame_login->width(),ui->frame_login->height()));
    loginPageAnimation->setEndValue(QRect(20,-950,ui->frame_login->width(),ui->frame_login->height()));
    loginPageAnimation->setEasingCurve(QEasingCurve::InOutQuart);
    loginPageAnimation->start();

    QMovie *loadingGifMovie =new QMovie(":/icons/Assets/icons/Spinner@1x-0.6s-200px-200px.gif");
    ui->label_gif_base->setMovie(loadingGifMovie);
    loadingGifMovie->start();
    QTimer::singleShot(4000, this, &SplashScreen::OpenMainApp);
}


