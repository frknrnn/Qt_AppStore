#include "databasemanager.h"

DatabaseManager* DatabaseManager::instance = nullptr;

DatabaseManager::DatabaseManager(QObject *parent)
    : QObject{parent}
{
    this->m_databaseHandler = new DatabaseHandler();
}

DatabaseManager::~DatabaseManager() {


}

bool DatabaseManager::AddNewTestModel(QString url,QJsonDocument doc)
{
    qDebug() << "Test1";
    this->m_databaseHandler->PUT(url,doc);
    return false;
}

QNetworkReply *DatabaseManager::GetData(QString url)
{
    QNetworkReply *rply = this->m_databaseHandler->GET(url);
    return rply;
}


DatabaseManager* DatabaseManager::getInstance() {
    if (!instance) {
        instance = new DatabaseManager();
    }
    return instance;
}
