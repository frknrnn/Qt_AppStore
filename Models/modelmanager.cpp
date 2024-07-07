#include "modelmanager.h"
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>

ModelManager* ModelManager::instance = nullptr; // Static instance başlangıçta nullptr olarak ayarlanır

ModelManager::ModelManager() {
    this->m_AppManager = new AppManager();
}


ModelManager::~ModelManager() {

}

ModelManager* ModelManager::getInstance() {
    if (!instance) {
        instance = new ModelManager();
    }
    return instance;
}
