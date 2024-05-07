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

void AppListItem::SetVersionItem(VersionItem *versionItem)
{
    this->m_versionItem=versionItem;
    UpdateUi();
}


void AppListItem::AddFavorite()
{
    if(this->m_versionItem->isFavorite){
        this->m_versionItem->isFavorite = false;
    }else{
        this->m_versionItem->isFavorite = true;
    }
    UpdateFavoriteButtonUi();
}

void AppListItem::UpdateUi()
{

}

void AppListItem::UpdateFavoriteButtonUi()
{
    QString buttonSelectedStyle = AppListItem_Favorites_SelectedStyle;
    QString buttonUnSelectedStyle = AppListItem_Favorites_UnselectedStyle;
    QString hoverStyle = AppListItem_Favorites_HoverStyle;
    if(this->m_versionItem->isFavorite){
        ui->pushButton_star->setStyleSheet(buttonSelectedStyle+hoverStyle);
    }else{
        ui->pushButton_star->setStyleSheet(buttonUnSelectedStyle+hoverStyle);
    }
}

