#ifndef SOFTWAREAPPMODEL_H
#define SOFTWAREAPPMODEL_H

#include <QString>
#include <QDate>


class SoftwareAppModel
{
public:
    SoftwareAppModel();

    QString AppName;
    QString Subtitle;
    QString ReleaseDate;
    QString Description;

    void SetAppName(QString appName);
    QString GetAppName();

    void SetVersion(QString version);
    QString GetVersion();

    void SetSubtitle(QString version);
    QString GetSubtitle();

    void SetDescription(QString description);
    QString GetDescription();

    QJsonDocument toQJsonDocument();
};

#endif // SOFTWAREAPPMODEL_H
