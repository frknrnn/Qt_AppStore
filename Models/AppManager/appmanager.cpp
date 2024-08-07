#include "appmanager.h"
#include <QJsonDocument>
#include <QJsonObject>



AppManager::AppManager(QObject *parent)
    : QObject{parent}
{

    this->m_DatabaseManager=DatabaseManager::getInstance();
    this->Apps = new QList<SoftwareAppModel>();
    GetApps();
}


void AppManager::GetApps()
{
    if(this->Apps->empty()){
        this->m_AppReaderReply = this->m_DatabaseManager->GetApps();
        connect(m_AppReaderReply,&QNetworkReply::readyRead,this,&AppManager::AppsReader);
    }

}

void AppManager::UpdateAppsList(QVariantMap *map)
{
    this->Apps = new QList<SoftwareAppModel>();
    QStringList keys = map->keys();
    foreach (const QString &key, keys) {
        SoftwareAppModel* tempApp = new SoftwareAppModel();
        QVariantMap variantMap = map->value(key).toMap();
        tempApp->LoadFromVariantMap(&variantMap);
    }

}


void AppManager::AppsReader()
{
    QByteArray jsonData = m_AppReaderReply->readAll();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);

    QVariantMap result;

    if (!document.isNull()) {
        if (document.isObject()) {
            result = document.object().toVariantMap();
            UpdateAppsList(&result);
        } else {
            qDebug() << "Document is not an object";
        }
    } else {
        qDebug() << "Invalid JSON document";
    }

}
