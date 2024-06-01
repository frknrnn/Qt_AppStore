#include "adminpanel.h"
#include "ui_adminpanel.h"

#include <QEvent>
#include <QMouseEvent>



AdminPanel::AdminPanel(QWidget *parent)
    : QDialog(parent,Qt::CustomizeWindowHint | Qt::FramelessWindowHint)
    , ui(new Ui::AdminPanel)
{
    ui->setupUi(this);

    connect(ui->pushButton_exit,&QPushButton::clicked,this,&AdminPanel::CloseWindow);
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
