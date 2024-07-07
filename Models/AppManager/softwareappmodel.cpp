#include "softwareappmodel.h"
#include <QJsonDocument>
#include <QDebug>
SoftwareAppModel::SoftwareAppModel() {

}

void SoftwareAppModel::SetAppName(QString appName)
{
    this->AppName = appName;
}

QString SoftwareAppModel::GetAppName()
{
    return this->AppName;
}

void SoftwareAppModel::SetSubtitle(QString subtitle)
{
    this->Subtitle = subtitle;
}

QString SoftwareAppModel::GetSubtitle()
{
    return this->Subtitle;
}

void SoftwareAppModel::SetDescription(QString description)
{
    this->Description = description;
}

QString SoftwareAppModel::GetDescription()
{
    return this->Description;

}

QJsonDocument SoftwareAppModel::toQJsonDocument()
{
    QVariantMap data;
    data["Name"] = this->AppName;
    data["Subtitle"] = this->Subtitle;
    data["Description"] = this->Description;

    QJsonDocument jsonDoc = QJsonDocument::fromVariant(data);
    return jsonDoc;
}

void SoftwareAppModel::LoadFromVariantMap(QVariantMap *map)
{
    if (map->contains("Name")) {
        this->AppName = map->value("Name").toString();
        qDebug()<<this->AppName+"SSSSSSSSS";
    }
    if (map->contains("Subtitle")) {
        this->Subtitle = map->value("Subtitle").toString();
    }
    if (map->contains("Description")) {
        this->Description = map->value("Description").toString();
    }

}

