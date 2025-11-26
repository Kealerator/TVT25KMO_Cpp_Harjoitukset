#include "environment.h"
#include "httpperson.h"
#include <QDebug>
#include <QJSonDocument>

HttpPerson::HttpPerson(QObject *parent)
    : QObject{parent}
{}

HttpPerson::~HttpPerson()
{
    qDebug() << "HttpPerson olio tuhottu.";
}

void HttpPerson::getOnePersonData()
{
    QString site_url = Environment::base_url() + "/1";
    QNetworkRequest request(site_url);
    manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, &HttpPerson::onePersonDataSlot);
    reply = manager->get(request);
}

void HttpPerson::getPersonsData()
{
    QString site_url = Environment::base_url();
    QNetworkRequest request(site_url);
    manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, &HttpPerson::personDataSlot);
    reply = manager->get(request);
}

void HttpPerson::onePersonDataSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    //qDebug() << response_data;

    // Muunnetaan vastaus
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);

    QJsonObject json_obj = json_doc.object();

    qDebug() << json_obj["firstname"].toString() << " " << json_obj["lastname"].toString();

    reply->deleteLater();
    manager->deleteLater();
}

void HttpPerson::personDataSlot(QNetworkReply *reply)
{
    response_data = reply->readAll();
    //qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    for (const QJsonValue &value : json_array) {
        if(value.isObject()){
            qDebug() << value["firstname"].toString();
        }
    }

    reply->deleteLater();
    manager->deleteLater();
}

