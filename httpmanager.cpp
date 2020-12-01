#include "httpmanager.h"
#include <QJsonDocument>
#include <QJsonObject>

HTTPManager::HTTPManager(QObject *parent) :
    QObject(parent),
    imageDownloadManager(new QNetworkAccessManager),
    weatherAPIManager(new QNetworkAccessManager)
{
    connect(imageDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(ImageDownloadedHandler(QNetworkReply*)));

    connect(weatherAPIManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(WeatherDownloadedHandler(QNetworkReply*)));
}

// Desctructor to avoid memory leak
HTTPManager::~HTTPManager()
{
    delete imageDownloadManager;
    delete weatherAPIManager;
}

// Function that requests and fetches the map api with the requested
// zip code by the user
void HTTPManager::sendImageRequest(QString zip)
{
    QNetworkRequest request;
    QString address = "https://dev.virtualearth.net/REST/V1/Imagery/Map/AerialWithLabels/"
            + zip
            + "/6?mapSize=400,200&mapLayer=TrafficFlow&format=png&key=AooD9dw2XAsCECKmpPGFt43LU-G8BwLuRjiK9827KKG57ZmgWGwWxrG5F5fFVskz";

    request.setUrl(QUrl(address));
    imageDownloadManager->get(request);

    qDebug() << "Image Request Sent to Address " << request.url();
}

// Function that requests and fetches the weather api with the requested
// zip code by the user
void HTTPManager::sendWeatherRequest(QString zip)
{
    QNetworkRequest request;

    QString address = "https://api.openweathermap.org/data/2.5/weather?zip="
            + zip
            + ",us&units=imperial&appid=24eb9d80eca246b94736d3f0632fac8c";

    request.setUrl(QUrl(address));
    weatherAPIManager->get(request);

    qDebug() << "Weather Request Sent to Address " << request.url();
}

// Fuction that checks if the map api has been fetched successfully
// and also loads the api if it doesn't produce any error

void HTTPManager::ImageDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Image Reply has arrived";

    // Debugging to check if reply is an error
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";

    // Loading the image
    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit imageReady(image);
}

// Function that checks if the weather api has been fetched successfully
// and also loads the api if it doesn't produce any error
void HTTPManager::WeatherDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Weather Reply has arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";

    QString answer = reply->readAll();
    reply->deleteLater();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

    emit WeatherJsonReady(jsonObj);
}
