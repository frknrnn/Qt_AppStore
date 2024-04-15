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
        QPoint globalMousePos = QCursor::pos();
        QPoint delta = globalMousePos - m_dragStartPosition;
        move(pos() + delta);
        m_dragStartPosition = globalMousePos;
        //qDebug() << "Mouse Position:" << globalMousePos;
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
