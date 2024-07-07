#ifndef APPMANAGER_H
#define APPMANAGER_H

#include <QObject>
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


public slots:
    void AppsReader();


signals:
};

#endif // APPMANAGER_H
