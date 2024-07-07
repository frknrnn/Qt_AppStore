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

void AppView::SetApp(SoftwareAppModel *app)
{
    this->app = app;
    this->AppName = this->app->AppName;
    ui->label_AppName->setText(this->AppName);
}


void AppView::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    qDebug() << "AppName:" << AppName;
    emit ShowAppVersionListSignal(AppName);
}
