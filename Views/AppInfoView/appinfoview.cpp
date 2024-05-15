#include "appinfoview.h"
#include "ui_appinfoview.h"
#include <QMouseEvent>
#include <QCursor>
#include <QSizeGrip>
#include "Styles/customstyles.h"

AppInfoView::AppInfoView(QWidget *parent)
    : QMainWindow(parent,Qt::CustomizeWindowHint | Qt::FramelessWindowHint)
    , ui(new Ui::AppInfoView),m_dragging(false)
{
    ui->setupUi(this);

    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int x = (screenGeometry.width() - width()) / 2;
    int y = (screenGeometry.height() - height()) / 2;
    move(x, y); // Pencereyi merkeze taşı

    QSizeGrip* windowSizeGrip = new QSizeGrip(ui->frame_size_grip);
    windowSizeGrip->setStyleSheet(MainWindow_SizeGrip_StyleSheet);

    connect(ui->pushButton_exit,&QPushButton::clicked,this,&AppInfoView::closeWindow);
    connect(ui->pushButton_minimize,&QPushButton::clicked,this,&AppInfoView::minimizeWindow);

}

void AppInfoView::mousePressEvent(QMouseEvent *event)
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

void AppInfoView::mouseMoveEvent(QMouseEvent *event)
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

void AppInfoView::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_dragging = false;
}

void AppInfoView::minimizeWindow()
{
    showMinimized();
}

void AppInfoView::closeWindow()
{
    this->close();
}



AppInfoView::~AppInfoView()
{
    delete ui;
}
