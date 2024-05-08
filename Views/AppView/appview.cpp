#include "appview.h"
#include "ui_appview.h"

AppView::AppView(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::AppView)
{
    ui->setupUi(this);
}


AppView::~AppView()
{
    delete ui;
}

void AppView::SetAppName(QString appName)
{
    AppName = appName;
    ui->label_AppName->setText(appName);
}

void AppView::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "AppName:" << AppName;
    emit ShowAppVersionListSignal(AppName);
}
