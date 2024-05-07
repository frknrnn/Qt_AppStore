#include "applistitem.h"
#include "ui_applistitem.h"
#include "Styles/customstyles.h"

AppListItem::AppListItem(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::AppListItem)
{
    ui->setupUi(this);   
    connect(ui->pushButton_star,&QPushButton::clicked,this,&AppListItem::AddFavorite);

}

AppListItem::~AppListItem()
{
    delete ui;
}



void AppListItem::AddFavorite()
{

}

