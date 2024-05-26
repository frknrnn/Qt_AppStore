#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>




class DatabaseHandler : public QObject
{
    Q_OBJECT
public:
    explicit DatabaseHandler(QObject *parent = nullptr);
    QNetworkReply* GET(QString url);
    bool PUT(QString url, QJsonDocument doc);
    bool POST(QString url,QJsonDocument doc);
    bool PATCH(QString url,QJsonDocument doc);
    bool DELETE(QString url);

private:
    QNetworkAccessManager * m_networkManager;

signals:

};

#endif // DATABASEHANDLER_H
