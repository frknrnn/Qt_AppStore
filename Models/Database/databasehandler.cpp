#include "databasehandler.h"
#include <QJsonDocument>
#include <QNetworkReply>


DatabaseHandler::DatabaseHandler(QObject *parent)
    : QObject{parent}
{
    this->m_networkManager = new QNetworkAccessManager(this);
}


QNetworkReply* DatabaseHandler::GET(QString url)
{
    QNetworkReply* reply;
    try {
        QNetworkRequest m_request((QUrl(url)));
        reply = this->m_networkManager->get(m_request);
        return reply;
    }
    catch (const std::exception& e) {
        qDebug() << "Error:" << e.what();
        return reply;
    }
}


bool DatabaseHandler::PUT(QString url, QJsonDocument jsonDoc)
{
    QNetworkRequest m_request((QUrl(url)));
    m_request.setHeader(QNetworkRequest::ContentTypeHeader,QString("application/json"));
    bool m_status=false;
    try {
        QNetworkReply *reply = m_networkManager->put(m_request, jsonDoc.toJson());
        if (reply->error() == QNetworkReply::NoError) {
            // Başarılı işlem
            m_status=true;
        }
        reply->deleteLater();
        return m_status;
    }
    catch (const std::exception& e) {
        qDebug() << "Error:" << e.what();
        return m_status;
    }
}


bool DatabaseHandler::POST(QString url, QJsonDocument doc)
{

    bool m_status=false;
    try {
        QNetworkRequest m_request((QUrl(url)));
        QNetworkReply* reply = this->m_networkManager->post(m_request, doc.toJson());
        if (reply->error() == QNetworkReply::NoError) {
            // Başarılı işlem
            m_status=true;
        }
        reply->deleteLater();
        return m_status;
    }
    catch (const std::exception& e) {
        qDebug() << "Error:" << e.what();
        return m_status;
    }

}


bool DatabaseHandler::PATCH(QString url, QJsonDocument doc)
{
    bool m_status=false;
    try {
        QNetworkRequest m_request((QUrl(url)));
        QNetworkReply* reply = this->m_networkManager->sendCustomRequest(m_request, "PATCH", doc.toJson());
        if (reply->error() == QNetworkReply::NoError) {
            // Başarılı işlem
            m_status=true;
        }
        reply->deleteLater();
        return m_status;
    }
    catch (const std::exception& e) {
        qDebug() << "Error:" << e.what();
        return m_status;
    }
}


bool DatabaseHandler::DELETE(QString url)
{
    bool m_status=false;
    try {
        QNetworkRequest m_request((QUrl(url)));
        QNetworkReply* reply = this->m_networkManager->deleteResource(m_request);
        if (reply->error() == QNetworkReply::NoError) {
            // Başarılı işlem
            m_status=true;
        }
        reply->deleteLater();
        return m_status;
    }
    catch (const std::exception& e) {
        qDebug() << "Error:" << e.what();
        return m_status;
    }
}


