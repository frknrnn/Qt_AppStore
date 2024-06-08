#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Styles/customstyles.h"
#include "Views/Dashboard/dashboardcontrol.h"
#include "Views/AdminPassView/adminpassview.h"

#include <QMouseEvent>
#include <QCursor>
#include <QDebug>
#include <QEasingCurve>
#include <QPropertyAnimation>
#include <QSizeGrip>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent,Qt::CustomizeWindowHint | Qt::FramelessWindowHint)
    , ui(new Ui::MainWindow),m_dragging(false)
{
    ui->setupUi(this);

    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int x = (screenGeometry.width() - width()) / 2;
    int y = (screenGeometry.height() - height()) / 2;
    move(x, y); // Pencereyi merkeze taşı

    m_isLeftMenuExpand=true;
    //Button Connections
    connect(ui->pushButton_minimize,&QPushButton::clicked,this,&MainWindow::minimizeWindow);
    connect(ui->pushButton_exit,&QPushButton::clicked,this,&MainWindow::exitApp);
    connect(ui->pushButton_maximize,&QPushButton::clicked,this,&MainWindow::maximizeWindow);
    connect(ui->pushButton_leftControl,&QPushButton::clicked,this,&MainWindow::leftMenuControl);

    connect(ui->pushButton_dashboard,&QPushButton::clicked,this,&MainWindow::ShowDashboard);
    connect(ui->pushButton_myFavorites,&QPushButton::clicked,this,&MainWindow::ShowFavorites);
    connect(ui->pushButton_mySerialKeys,&QPushButton::clicked,this,&MainWindow::ShowKeys);

    connect(ui->pushButton_admin,&QPushButton::clicked,this,&MainWindow::ShowAdminPanel);

    QSizeGrip* windowSizeGrip = new QSizeGrip(ui->frame_size_grip);
    windowSizeGrip->setStyleSheet(MainWindow_SizeGrip_StyleSheet);

    bindingCustomFrames();

}


void MainWindow::leftMenuControl(){
        int width = ui->frame_leftMenu->width();
        int maxExtend = 200;
        int widthExtended=0;
        int standard = 20;

        if(width==standard){
            widthExtended=maxExtend;
            updateLeftControlButtonUi(true);
        }
        else{
            widthExtended=standard;
            updateLeftControlButtonUi(false);
        }

        QPropertyAnimation *animation = new QPropertyAnimation(ui->frame_leftMenu, "minimumWidth");
        animation->setDuration(400); // Animasyon süresi (milisaniye cinsinden)
        animation->setStartValue(width); // Başlangıç konumu ve boyutu
        animation->setEndValue(widthExtended); // Bitiş konumu ve boyutu
        animation->setEasingCurve(QEasingCurve::InOutQuart);

        QPropertyAnimation *animation2 = new QPropertyAnimation(ui->frame_leftMenu, "maximumWidth");
        animation2->setDuration(400); // Animasyon süresi (milisaniye cinsinden)
        animation2->setStartValue(width); // Başlangıç konumu ve boyutu
        animation2->setEndValue(widthExtended); // Bitiş konumu ve boyutu
        animation2->setEasingCurve(QEasingCurve::InOutQuart);

        animation->start();
        animation2->start();


}


void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && ui->frame_topBar && ui->frame_topBar->geometry().contains(event->pos()))
    {
        m_dragging = true;
        m_dragStartPosition = QCursor::pos();
        //qDebug() << "Mouse Position:" << m_dragStartPosition;
    }
    else
    {
        m_dragging = false;
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    if (m_dragging)
    {
        if(!isMaximized()){
            QPoint globalMousePos = QCursor::pos();
            QPoint delta = globalMousePos - m_dragStartPosition;
            move(pos() + delta);
            m_dragStartPosition = globalMousePos;
            //qDebug() << "Mouse Position:" << globalMousePos;
        }

    }
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && ui->frame_topBar && ui->frame_topBar->geometry().contains(event->pos()))
    {
        if (isMaximized())
        {
            showNormal();
        }
        else
        {
            showMaximized();
        }
    }
}

void MainWindow::updateLeftControlButtonUi(bool isExtend)
{
    QString buttonStyleExtend = MainWindow_LeftMenu_ExpanderExpendStyle;
    QString buttonStyleNoExtend = MainWindow_LeftMenu_ExpanderNoExpendStyle;
    QString hoverStyle = MainWindow_LeftMenu_ExpanderHoverStyle;

    if(isExtend){
        ui->pushButton_leftControl->setStyleSheet(buttonStyleExtend+hoverStyle);
    }else{
        ui->pushButton_leftControl->setStyleSheet(buttonStyleNoExtend+hoverStyle);
    }
}

void MainWindow::bindingCustomFrames()
{
    QVBoxLayout* m_dashBordControlLayout = new QVBoxLayout(ui->frame_dashboard);
    m_dashBordControlLayout->setContentsMargins(0, 0, 0, 0);
    m_dashBordControlLayout->setSpacing(0);

    Dashboardcontrol* m_dashBoardContolPage = new Dashboardcontrol();
    m_dashBordControlLayout->addWidget(m_dashBoardContolPage);

    ui->stackedWidget_base->setCurrentIndex(0);

}

void MainWindow::minimizeWindow()
{
    showMinimized();
}

void MainWindow::exitApp()
{
    qApp->exit();
}

void MainWindow::maximizeWindow()
{
    //qDebug() << "isMaximized:"<<isMaximized();
    if(isMaximized()){
        showNormal();
        QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
        int centerX = (screenGeometry.width()-800)/2;
        int centerY = (screenGeometry.height()-600)/2;
        this->setGeometry(centerX, centerY, 800, 600);
        qDebug() << "showNormal";
    }  else{
        showMaximized();
    }
}

void MainWindow::ShowDashboard()
{
    ui->pushButton_dashboard->setStyleSheet(MainWindow_DashboardActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_myFavorites->setStyleSheet(MainWindow_FavoritesNoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_mySerialKeys->setStyleSheet(MainWindow_SerialNoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->stackedWidget_base->setCurrentIndex(0);

}

void MainWindow::ShowFavorites()
{
    ui->pushButton_dashboard->setStyleSheet(MainWindow_DashboardNoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_myFavorites->setStyleSheet(MainWindow_FavoritesActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_mySerialKeys->setStyleSheet(MainWindow_SerialNoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->stackedWidget_base->setCurrentIndex(1);
}

void MainWindow::ShowKeys()
{
    ui->pushButton_dashboard->setStyleSheet(MainWindow_DashboardNoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_myFavorites->setStyleSheet(MainWindow_FavoritesNoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_mySerialKeys->setStyleSheet(MainWindow_SerialActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->stackedWidget_base->setCurrentIndex(2);
}

void MainWindow::ShowAdminPanel()
{
    AdminPassView *m_adminPassView = new AdminPassView();

}


void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
