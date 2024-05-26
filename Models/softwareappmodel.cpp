#include "softwareappmodel.h"

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

void SoftwareAppModel::SetDescription(QString description)
{
    this->Description = description;
}

QString SoftwareAppModel::GetDescription()
{
    return this->Description;

}


