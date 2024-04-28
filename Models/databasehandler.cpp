#include "databasehandler.h"
#include <QNetworkRequest>
#include <QDebug>


DatabaseHandler::DatabaseHandler(QObject *parent)
    : QObject{parent}
{

    m_networkManager = new QNetworkAccessManager(this);
    m_networkReply = m_networkManager->get(QNetworkRequest(QUrl("https://qtapptest-3edb8-default-rtdb.firebaseio.com/")));


}

DatabaseHandler::~DatabaseHandler()
{
    m_networkManager->deleteLater();
}


