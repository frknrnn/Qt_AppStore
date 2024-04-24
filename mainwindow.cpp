#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "customstyles.h"
#include "dashboardcontrol.h"

#include <QMouseEvent>
#include <QCursor>
#include <QDebug>
#include <QEasingCurve>
#include <QPropertyAnimation>
#include <QSizeGrip>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),m_dragging(false)
{
    ui->setupUi(this);

    m_isLeftMenuExpand=true;
    //Button Connections
    connect(ui->pushButton_minimize,&QPushButton::clicked,this,&MainWindow::minimizeWindow);
    connect(ui->pushButton_exit,&QPushButton::clicked,this,&MainWindow::exitApp);
    connect(ui->pushButton_maximize,&QPushButton::clicked,this,&MainWindow::maximizeWindow);
    connect(ui->pushButton_leftControl,&QPushButton::clicked,this,&MainWindow::leftMenuControl);

    QSizeGrip* windowSizeGrip = new QSizeGrip(ui->frame_size_grip);
    windowSizeGrip->setStyleSheet(MainWindow_SizeGrip_StyleSheet);

    bindingCustomFrames();

}


void MainWindow::leftMenuControl(){
        int width = ui->frame_leftMenu->width();
        int maxExtend = 275;
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

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
