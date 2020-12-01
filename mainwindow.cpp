#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QJsonObject>
#include <QJsonArray>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    timer(new QTimer),
    httpManager(new HTTPManager)
{
    ui->setupUi(this);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setCurrentTime()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(slideShow()));

    setCurrentTime();
    timer->start(1000);
    slideShow();
    greetingMessage();


    connect(httpManager, SIGNAL(imageReady(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));

    connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject *)),
            this, SLOT(processWeatherJson(QJsonObject *)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Function that fetches the current time and extracts hour, minute, and seconds
// separately. It also calculates the current time for Korea and Kyrgyzstan as
// well
void MainWindow::setCurrentTime()
{
    // Fetching the current time
    QTime time = QTime::currentTime();

    //Extracting hour, minute, and second
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");

    // Converting the current time (PST) to current Kyrgyzstan time
    QTime timeKG = time.addSecs(60 * 60 * 13);
    QString hourKG = timeKG.toString("hh");

    // Converting the current time (PST) to current Korea time
    QTime timeKOR = time.addSecs(60 * 60 * 16);
    QString hourKOR = timeKOR.toString("hh");

    ui->hourLCD->display(hour);
    ui->minuteLCD->display(minute);
    ui->secondLCD->display(second);

    ui->hourLCDKG->display(hourKG);
    ui->minuteLCDKG->display(minute);
    ui->secondLCDKG->display(second);

    ui->hourLCDKOR->display(hourKOR);
    ui->minuteLCDKOR->display(minute);
    ui->secondLCDKOR->display(second);
}


// Function that sends out a specific greeting message according to the current
// time. 
void MainWindow::greetingMessage()
{
    if(ui->hourLCD->intValue() >= 6 && ui->hourLCD->intValue() <= 12){
        ui->greetingMessage->setText("Good Morning!");
    }
    else if(ui->hourLCD->intValue() >= 13 && ui->hourLCD->intValue() <= 17){
        ui->greetingMessage->setText("Good Afternoon!");
    }
    else{
        ui->greetingMessage->setText("Good Evening!");
    }
}

// Function that set the image
void MainWindow::processImage(QPixmap *image)
{
    ui->imageLabel->setPixmap(*image);
}

void MainWindow::processWeatherJson(QJsonObject *json)
{
    qDebug() << "Json ready";
    QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
    QString weatherDesc = json->value("weather").toArray()[0].toObject()["description"].toString();
    double temp = json->value("main").toObject()["temp"].toDouble();
    double temp_min = json->value("main").toObject()["temp_min"].toDouble();
    double temp_max = json->value("main").toObject()["temp_max"].toDouble();

    qDebug() << weather;
    qDebug() << weatherDesc;
    qDebug() << temp;
    qDebug() << temp_min;
    qDebug() << temp_max;

    ui->weatherLabel->setText("Current Weather: " + weather + ", temp: " + QString::number(temp));
}

void MainWindow::on_imageDownloadButton_clicked()
{
    QString zip = ui->zipCodeEdit->text();
    qDebug() << zip;
    httpManager->sendImageRequest(zip);
}

void MainWindow::on_weatherDownloadButton_clicked()
{
    QString zip = ui->zipCodeEdit->text();
    qDebug() << zip;
    httpManager->sendWeatherRequest(zip);
}

// Function that sets the image and display period for slideshow
void MainWindow::slideShow()
{
    QTime time = QTime::currentTime();
    QString seconds = time.toString("ss");

    if(seconds == "00"){
        ui->imageSlideshow->setStyleSheet("border-image: url(\"distressedRowlet.jpg\")");
        std::cout << "00" << std::endl;
    }
    else if(seconds == "10"){
        ui->imageSlideshow->setStyleSheet("border-image: url(\"surgeryOnGrape.jpg\")");
        std::cout << "10" << std::endl;
    }
    else if(seconds == "20"){
        ui->imageSlideshow->setStyleSheet("border-image: url(\"surprisedPikachu.jpg\")");
        std::cout << "20" << std::endl;
    }
    else if(seconds == "30"){
        ui->imageSlideshow->setStyleSheet("border-image: url(\"thanosMeme.jpg\")");
        std::cout << "30" << std::endl;
    }
    else if(seconds == "40"){
        ui->imageSlideshow->setStyleSheet("border-image: url(\"tidePods.jpg\")");
        std::cout << "40" << std::endl;
    }
    else if(seconds == "50"){
        ui->imageSlideshow->setStyleSheet("border-image: url(\"elfMan.png\")");
        std::cout << "50" << std::endl;
    }
}
