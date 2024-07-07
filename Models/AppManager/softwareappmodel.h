#ifndef SOFTWAREAPPMODEL_H
#define SOFTWAREAPPMODEL_H

#include <QString>
#include <QDate>
#include <QList>
#include <QVariantMap>
#include "versionitem.h"


class SoftwareAppModel
{
public:
    SoftwareAppModel();

    QString AppName;
    QString Subtitle;
    QString ReleaseDate;
    QString Description;

    QList<VersionItem> Versions;

    void SetAppName(QString appName);
    QString GetAppName();

    void AddVersion(QString version);
    QString GetVersion();

    void SetSubtitle(QString version);
    QString GetSubtitle();

    void SetDescription(QString description);
    QString GetDescription();

    QJsonDocument toQJsonDocument();
    void LoadFromVariantMap(QVariantMap* map);
};

#endif // SOFTWAREAPPMODEL_H
