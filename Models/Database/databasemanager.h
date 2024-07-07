#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QJsonDocument>
#include "databasehandler.h"
#include "Models/AppManager/softwareappmodel.h"

class DatabaseManager : public QObject
{
    Q_OBJECT

private:
    static DatabaseManager* instance;
    DatabaseManager(QObject *parent = nullptr);
    ~DatabaseManager();
    DatabaseHandler *m_databaseHandler;


public:
    static DatabaseManager* getInstance();
    DatabaseManager(const DatabaseManager&) = delete;
    void operator=(const DatabaseManager&) = delete;

    bool AddNewTestModel(QString url, QJsonDocument doc);
    bool AddNewAppToDatabase(SoftwareAppModel* model);
    bool IsAppAlreadyExits(SoftwareAppModel* model);
    QNetworkReply* GetData(QString url);
    QNetworkReply *GetApps();

signals:
};

#endif // DATABASEMANAGER_H
