#include "adminpanel.h"
#include "ui_adminpanel.h"
#include "Styles/customstyles.h"

#include <QEvent>
#include <QMouseEvent>



AdminPanel::AdminPanel(QWidget *parent)
    : QDialog(parent,Qt::CustomizeWindowHint | Qt::FramelessWindowHint)
    , ui(new Ui::AdminPanel)
{
    ui->setupUi(this);

    connect(ui->pushButton_exit,&QPushButton::clicked,this,&AdminPanel::CloseWindow);
    connect(ui->pushButton_dashboard,&QPushButton::clicked,this,&AdminPanel::ShowDashboard);
    connect(ui->pushButton_menu_newApp,&QPushButton::clicked,this,&AdminPanel::ShowAddNewAppPanel);
    connect(ui->pushButton_menu_newVersion,&QPushButton::clicked,this,&AdminPanel::ShowAddNewVersionPanel);

    ui->stackedWidget->setCurrentIndex(0);

    this->setModal(true);

}

AdminPanel::~AdminPanel()
{
    delete ui;
}


void AdminPanel::mousePressEvent(QMouseEvent *event)
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

void AdminPanel::mouseMoveEvent(QMouseEvent *event)
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


void AdminPanel::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}


void AdminPanel::CloseWindow()
{
    this->hide();
    delete ui;

}

void AdminPanel::ShowDashboard()
{
    ui->pushButton_dashboard->setStyleSheet(AdminPanel_Active_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_menu_newApp->setStyleSheet(AdminPanel_NoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_menu_newVersion->setStyleSheet(AdminPanel_NoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->stackedWidget->setCurrentIndex(0);
}

void AdminPanel::ShowAddNewAppPanel()
{
    ui->pushButton_dashboard->setStyleSheet(AdminPanel_NoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_menu_newApp->setStyleSheet(AdminPanel_Active_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_menu_newVersion->setStyleSheet(AdminPanel_NoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->stackedWidget->setCurrentIndex(1);
}

void AdminPanel::ShowAddNewVersionPanel()
{
    ui->pushButton_dashboard->setStyleSheet(AdminPanel_NoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_menu_newApp->setStyleSheet(AdminPanel_NoActive_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->pushButton_menu_newVersion->setStyleSheet(AdminPanel_Active_StyleSheet+MainWindow_MainWindow_HoverStyle);
    ui->stackedWidget->setCurrentIndex(2);
}
