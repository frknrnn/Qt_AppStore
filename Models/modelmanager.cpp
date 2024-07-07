#include "modelmanager.h"

ModelManager* ModelManager::instance = nullptr; // Static instance başlangıçta nullptr olarak ayarlanır

ModelManager::ModelManager() {

}

void ModelManager::GetApps()
{

}

ModelManager::~ModelManager() {

}

ModelManager* ModelManager::getInstance() {
    if (!instance) {
        instance = new ModelManager();
    }
    return instance;
}
