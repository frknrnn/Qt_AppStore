#include "databasehandler.h"
#include <QJsonDocument>
#include <QNetworkReply>
#include <QJsonObject>

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
    try{
        QNetworkRequest m_request((QUrl(url)));
        m_request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        QByteArray data = jsonDoc.toJson(); // JSON verisini byte dizisine çevirme

        QNetworkReply* reply = m_networkManager->put(m_request, data);

        connect(reply, &QNetworkReply::finished, this, [reply]() {
            if (reply->error() == QNetworkReply::NoError) {
                QByteArray response_data = reply->readAll();
                return true;
            } else {
                return false;
            }
            reply->deleteLater();
        });
    }
    catch (const std::exception& e) {
        return false;
    }

}


bool DatabaseHandler::POST(QString url, QJsonDocument doc)
{

    QNetworkRequest m_request((QUrl(url)));
    m_request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = doc.toJson(); // JSON verisini byte dizisine çevirme

    QNetworkReply* reply = m_networkManager->post(m_request, data);

    connect(reply, &QNetworkReply::finished, this, [reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray response_data = reply->readAll();
            return true;
        } else {
            return false;
        }
        reply->deleteLater();
    });

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


