#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMouseEvent>
#include <QCursor>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),m_dragging(false)
{
    ui->setupUi(this);


    //Button Connections
    connect(ui->pushButton_minimize,&QPushButton::clicked,this,&MainWindow::minimizeWindow);
    connect(ui->pushButton_exit,&QPushButton::clicked,this,&MainWindow::exitApp);
    connect(ui->pushButton_maximize,&QPushButton::clicked,this,&MainWindow::maximizeWindow);

}









void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && ui->frame_topBar && ui->frame_topBar->geometry().contains(event->pos()))
    {
        m_dragging = true;
        m_dragStartPosition = QCursor::pos();  
        qDebug() << "Mouse Position:" << m_dragStartPosition;
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
            qDebug() << "Mouse Position:" << globalMousePos;
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
    qDebug() << "isMaximized:"<<isMaximized();
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
