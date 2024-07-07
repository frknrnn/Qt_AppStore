#ifndef MODELMANAGER_H
#define MODELMANAGER_H

#include "Database/databasemanager.h"
#include "AppManager/softwareappmodel.h"
#include <QNetworkReply>


class ModelManager
{

private:
    static ModelManager* instance; // Tek bir örneği saklamak için static bir pointer
    DatabaseManager* m_DatabaseManager;
    ModelManager(); // Constructor private olarak tanımlanır
    ~ModelManager(); // Destructor private olarak tanımlanır

public:
    static ModelManager* getInstance(); // Tek bir örneği döndüren statik bir fonksiyon
    ModelManager(const ModelManager&) = delete; // Kopya oluşturmayı devre dışı bırak
    void operator=(const ModelManager&) = delete; // Kopya atamayı devre dışı bırak
    QList<SoftwareAppModel>* Apps;
    QNetworkReply* m_AppReaderReply;

    void GetApps();

public slots:
    void AppsReader();


};

#endif // MODELMANAGER_H
