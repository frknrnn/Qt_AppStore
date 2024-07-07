#include "modelmanager.h"
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

ModelManager* ModelManager::instance = nullptr; // Static instance başlangıçta nullptr olarak ayarlanır

ModelManager::ModelManager() {

    this->m_DatabaseManager=DatabaseManager::getInstance();
    this->Apps = new QList<SoftwareAppModel>();
    GetApps();

}

void ModelManager::GetApps()
{
    if(this->Apps->empty()){
        this->m_AppReaderReply = this->m_DatabaseManager->GetApps();
        //connect(m_AppReaderReply,&QNetworkReply::readyRead,this,&ModelManager::AppsReader);
    }

}


void ModelManager::AppsReader()
{
    QByteArray jsonData = m_AppReaderReply->readAll();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);

    QVariantMap result;

    if (!document.isNull()) {
        if (document.isObject()) {
            result = document.object().toVariantMap();
            qDebug() << result;
        } else {
            qDebug() << "Document is not an object";
        }
    } else {
        qDebug() << "Invalid JSON document";
    }

}












ModelManager::~ModelManager() {

}

ModelManager* ModelManager::getInstance() {
    if (!instance) {
        instance = new ModelManager();
    }
    return instance;
}
