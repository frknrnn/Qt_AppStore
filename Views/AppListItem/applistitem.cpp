#include "applistitem.h"
#include "ui_applistitem.h"

AppListItem::AppListItem(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::AppListItem)
{
    ui->setupUi(this);
}

AppListItem::~AppListItem()
{
    delete ui;
}
