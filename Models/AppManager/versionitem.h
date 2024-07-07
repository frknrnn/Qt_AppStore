#ifndef VERSIONITEM_H
#define VERSIONITEM_H

#include <QObject>
#include <QDate>

class VersionItem : public QObject
{
    Q_OBJECT
public:
    explicit VersionItem(QObject *parent = nullptr);
    QString AppName;
    QString Description;
    QDate   ReleaseDate ;
    bool    isFavorite = false;
    QString DownloadLink;
    QString Version;

    void SetAppName(QString appName);
    void SetDescription(QString description);
    void SetReleaseDate(QDate releaseDate);
    void SetIsFavorite(bool isFavorite);
    void SetDownloadLink(QString link);
    void SetVersion(QString version);


signals:
};

#endif // VERSIONITEM_H
