#ifndef MODELMANAGER_H
#define MODELMANAGER_H

#include "AppManager/appmanager.h"
#include <QNetworkReply>


class ModelManager
{

private:
    static ModelManager* instance; // Tek bir örneği saklamak için static bir pointer
    ModelManager(); // Constructor private olarak tanımlanır
    ~ModelManager(); // Destructor private olarak tanımlanır

public:
    static ModelManager* getInstance(); // Tek bir örneği döndüren statik bir fonksiyon
    AppManager* m_AppManager;
    ModelManager(const ModelManager&) = delete; // Kopya oluşturmayı devre dışı bırak
    void operator=(const ModelManager&) = delete; // Kopya atamayı devre dışı bırak

};

#endif // MODELMANAGER_H
