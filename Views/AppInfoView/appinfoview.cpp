#include "appinfoview.h"
#include "ui_appinfoview.h"

AppInfoView::AppInfoView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AppInfoView)
{
    ui->setupUi(this);
}

AppInfoView::~AppInfoView()
{
    delete ui;
}
