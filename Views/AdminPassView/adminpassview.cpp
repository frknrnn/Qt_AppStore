#include "adminpassview.h"
#include "ui_adminpassview.h"

#include <QDebug>
#include <QMouseEvent>
#include <QTimer>
#include <QTimerEvent>

AdminPassView::AdminPassView(QWidget *parent)
    : QDialog(parent,Qt::CustomizeWindowHint | Qt::FramelessWindowHint)
    , ui(new Ui::AdminPassView)
{
    ui->setupUi(this);
    connect(ui->pushButton_login,&QPushButton::clicked,this,&AdminPassView::ShowAdminPanel);
    connect(ui->pushButton_exit,&QPushButton::clicked,this,&AdminPassView::CloseWindow);

    this->setModal(true);
    this->show();
}


void AdminPassView::mousePressEvent(QMouseEvent *event)
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

void AdminPassView::mouseMoveEvent(QMouseEvent *event)
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


void AdminPassView::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}

void AdminPassView::ShakeWindow()
{
    QPoint actualPos = this->pos();
    QTimer::singleShot(0, this, [this,actualPos]() { this->move(actualPos.x()+1,actualPos.y()); });
    QTimer::singleShot(50, this, [this,actualPos]() { this->move(actualPos.x()-2,actualPos.y()); });
    QTimer::singleShot(100, this, [this,actualPos]() { this->move(actualPos.x()+4,actualPos.y()); });
    QTimer::singleShot(150, this, [this,actualPos]() { this->move(actualPos.x()+-5,actualPos.y()); });
    QTimer::singleShot(200, this, [this,actualPos]() { this->move(actualPos.x()+4,actualPos.y()); });
    QTimer::singleShot(250, this, [this,actualPos]() { this->move(actualPos.x()+2,actualPos.y()); });
    QTimer::singleShot(300, this, [this,actualPos]() { this->move(actualPos.x(),actualPos.y()); });
}

void AdminPassView::CloseWindow()
{
    this->hide();
    delete ui;
}


AdminPassView::~AdminPassView()
{
    delete ui;
}

void AdminPassView::ShowAdminPanel()
{
    QString userPass = ui->lineEdit_login_password->text();
    if(userPass == this->pass){
        qDebug() << "true";

    }else{
        qDebug() << "false";
        ShakeWindow();
    }

}



