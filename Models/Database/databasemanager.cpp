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

bool DatabaseManager::AddNewAppToDatabase(SoftwareAppModel* model)
{
    QString baseUrl = "https://qtapptest-3edb8-default-rtdb.firebaseio.com/Apps/";
    baseUrl = baseUrl+model->GetAppName()+".json";
    qDebug() << baseUrl;
    this->m_databaseHandler->PUT(baseUrl,model->toQJsonDocument());
    return true;
}

bool DatabaseManager::IsAppAlreadyExits(SoftwareAppModel *model)
{

}

QNetworkReply *DatabaseManager::GetData(QString url)
{
    QNetworkReply *rply = this->m_databaseHandler->GET(url);
    return rply;
}

QNetworkReply *DatabaseManager::GetApps()
{
    QString baseUrl = "https://qtapptest-3edb8-default-rtdb.firebaseio.com/Apps.json";
    QNetworkReply *rply = this->m_databaseHandler->GET(baseUrl);
    return rply;
}

DatabaseManager* DatabaseManager::getInstance() {
    if (!instance) {
        instance = new DatabaseManager();
    }
    return instance;
}



