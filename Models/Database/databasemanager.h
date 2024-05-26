#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QJsonDocument>
#include "databasehandler.h"
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
    QNetworkReply* GetData(QString url);

signals:
};

#endif // DATABASEMANAGER_H
