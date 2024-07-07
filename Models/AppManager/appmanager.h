#ifndef APPMANAGER_H
#define APPMANAGER_H

#include <QObject>
#include <QVariantMap>
#include "softwareappmodel.h"
#include <QNetworkReply>
#include "Models/Database/databasemanager.h"

class AppManager : public QObject
{
    Q_OBJECT
public:
    explicit AppManager(QObject *parent = nullptr);
    DatabaseManager* m_DatabaseManager;
    QList<SoftwareAppModel>* Apps;
    QNetworkReply* m_AppReaderReply;
    void GetApps();

private:
    void UpdateAppsList(QVariantMap* map);


public slots:
    void AppsReader();


signals:
};

#endif // APPMANAGER_H
