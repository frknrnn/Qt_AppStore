#include "versionitem.h"

VersionItem::VersionItem(QObject *parent)
    : QObject{parent}
{

}

void VersionItem::SetAppName(QString appName)
{
    this->AppName=appName;
}

void VersionItem::SetDescription(QString description)
{
    this->Description=description;
}

void VersionItem::SetReleaseDate(QDate releaseDate)
{
    this->ReleaseDate=releaseDate;
}

void VersionItem::SetIsFavorite(bool isFavorite)
{
    this->isFavorite = isFavorite;
}

void VersionItem::SetDownloadLink(QString link)
{
    this->DownloadLink=link;
}

void VersionItem::SetVersion(QString version)
{
    this->Version = version;
}
