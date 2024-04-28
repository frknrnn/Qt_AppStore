#ifndef SOFTWAREAPPMODEL_H
#define SOFTWAREAPPMODEL_H

#include <QString>
#include <QDate>


class SoftwareAppModel
{
public:
    SoftwareAppModel();

    QString *AppName;
    QString *Version;
    QString *ReleaseDate;
    QString *Description;

    void SetAppName(QString appName);
    QString GetAppName();

    void SetVersion(QString version);
    QString GetVersion();

    void SetReleaseDate(QDate date);
    QDate GetReleaseDate();

    void SetDescription(QString description);
    QString GetDescription();


};

#endif // SOFTWAREAPPMODEL_H
