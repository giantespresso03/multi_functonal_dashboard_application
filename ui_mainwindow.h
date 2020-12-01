/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLCDNumber *hourLCD;
    QLCDNumber *minuteLCD;
    QLCDNumber *secondLCD;
    QLCDNumber *minuteLCDKG;
    QLCDNumber *hourLCDKG;
    QLCDNumber *secondLCDKG;
    QLCDNumber *minuteLCDKOR;
    QLCDNumber *secondLCDKOR;
    QLCDNumber *hourLCDKOR;
    QLabel *greetingMessage;
    QPushButton *imageDownloadButton;
    QLabel *imageLabel;
    QLineEdit *zipCodeEdit;
    QLabel *seattle;
    QLabel *busan;
    QLabel *bishkek;
    QPushButton *weatherDownloadButton;
    QLabel *weatherLabel;
    QLabel *currentWeather;
    QLabel *currentTraffic;
    QLabel *zipCode;
    QLabel *imageSlideshow;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(953, 658);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.568, x2:1, y2:0, stop:0 rgba(77, 77, 77, 255), stop:1 rgba(166, 166, 166, 255));"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        hourLCD = new QLCDNumber(centralWidget);
        hourLCD->setObjectName(QString::fromUtf8("hourLCD"));
        hourLCD->setGeometry(QRect(120, 50, 101, 101));
        hourLCD->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        hourLCD->setDigitCount(2);
        hourLCD->setProperty("intValue", QVariant(22));
        minuteLCD = new QLCDNumber(centralWidget);
        minuteLCD->setObjectName(QString::fromUtf8("minuteLCD"));
        minuteLCD->setGeometry(QRect(240, 50, 101, 101));
        minuteLCD->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        minuteLCD->setDigitCount(2);
        minuteLCD->setProperty("intValue", QVariant(22));
        secondLCD = new QLCDNumber(centralWidget);
        secondLCD->setObjectName(QString::fromUtf8("secondLCD"));
        secondLCD->setGeometry(QRect(360, 50, 101, 101));
        secondLCD->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        secondLCD->setDigitCount(2);
        secondLCD->setProperty("intValue", QVariant(22));
        minuteLCDKG = new QLCDNumber(centralWidget);
        minuteLCDKG->setObjectName(QString::fromUtf8("minuteLCDKG"));
        minuteLCDKG->setGeometry(QRect(250, 240, 81, 71));
        minuteLCDKG->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        minuteLCDKG->setDigitCount(2);
        minuteLCDKG->setProperty("intValue", QVariant(22));
        hourLCDKG = new QLCDNumber(centralWidget);
        hourLCDKG->setObjectName(QString::fromUtf8("hourLCDKG"));
        hourLCDKG->setGeometry(QRect(130, 240, 81, 71));
        hourLCDKG->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        hourLCDKG->setDigitCount(2);
        hourLCDKG->setProperty("intValue", QVariant(22));
        secondLCDKG = new QLCDNumber(centralWidget);
        secondLCDKG->setObjectName(QString::fromUtf8("secondLCDKG"));
        secondLCDKG->setGeometry(QRect(370, 240, 81, 71));
        secondLCDKG->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        secondLCDKG->setDigitCount(2);
        secondLCDKG->setProperty("intValue", QVariant(22));
        minuteLCDKOR = new QLCDNumber(centralWidget);
        minuteLCDKOR->setObjectName(QString::fromUtf8("minuteLCDKOR"));
        minuteLCDKOR->setGeometry(QRect(250, 160, 81, 71));
        minuteLCDKOR->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        minuteLCDKOR->setDigitCount(2);
        minuteLCDKOR->setProperty("intValue", QVariant(22));
        secondLCDKOR = new QLCDNumber(centralWidget);
        secondLCDKOR->setObjectName(QString::fromUtf8("secondLCDKOR"));
        secondLCDKOR->setGeometry(QRect(370, 160, 81, 71));
        secondLCDKOR->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        secondLCDKOR->setDigitCount(2);
        secondLCDKOR->setProperty("intValue", QVariant(22));
        hourLCDKOR = new QLCDNumber(centralWidget);
        hourLCDKOR->setObjectName(QString::fromUtf8("hourLCDKOR"));
        hourLCDKOR->setGeometry(QRect(130, 160, 81, 71));
        hourLCDKOR->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        hourLCDKOR->setDigitCount(2);
        hourLCDKOR->setProperty("intValue", QVariant(22));
        greetingMessage = new QLabel(centralWidget);
        greetingMessage->setObjectName(QString::fromUtf8("greetingMessage"));
        greetingMessage->setGeometry(QRect(320, 10, 301, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("AR BONNIE"));
        font.setPointSize(20);
        greetingMessage->setFont(font);
        greetingMessage->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        greetingMessage->setAlignment(Qt::AlignCenter);
        imageDownloadButton = new QPushButton(centralWidget);
        imageDownloadButton->setObjectName(QString::fromUtf8("imageDownloadButton"));
        imageDownloadButton->setGeometry(QRect(770, 520, 171, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR BONNIE"));
        font1.setPointSize(12);
        imageDownloadButton->setFont(font1);
        imageDownloadButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border: 1px solid black;"));
        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(540, 210, 401, 201));
        imageLabel->setStyleSheet(QString::fromUtf8("border:1px solid black; \n"
" background-color:transparent;\n"
"border-radius: 20px;\n"
"border: 1px solid black; "));
        zipCodeEdit = new QLineEdit(centralWidget);
        zipCodeEdit->setObjectName(QString::fromUtf8("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(630, 470, 111, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AR BONNIE"));
        font2.setPointSize(15);
        zipCodeEdit->setFont(font2);
        zipCodeEdit->setStyleSheet(QString::fromUtf8("border: 1px solid black; \n"
" background-color:transparent"));
        seattle = new QLabel(centralWidget);
        seattle->setObjectName(QString::fromUtf8("seattle"));
        seattle->setGeometry(QRect(30, 80, 81, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Tw Cen MT Condensed"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setWeight(50);
        seattle->setFont(font3);
        seattle->setStyleSheet(QString::fromUtf8("background-color:transparent; color: white;"));
        busan = new QLabel(centralWidget);
        busan->setObjectName(QString::fromUtf8("busan"));
        busan->setGeometry(QRect(60, 180, 71, 31));
        busan->setFont(font3);
        busan->setStyleSheet(QString::fromUtf8("background-color:transparent;color: white;"));
        bishkek = new QLabel(centralWidget);
        bishkek->setObjectName(QString::fromUtf8("bishkek"));
        bishkek->setGeometry(QRect(50, 260, 81, 31));
        bishkek->setFont(font3);
        bishkek->setStyleSheet(QString::fromUtf8("background-color:transparent;color: white;"));
        weatherDownloadButton = new QPushButton(centralWidget);
        weatherDownloadButton->setObjectName(QString::fromUtf8("weatherDownloadButton"));
        weatherDownloadButton->setGeometry(QRect(770, 430, 171, 51));
        weatherDownloadButton->setFont(font1);
        weatherDownloadButton->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
"border: 1px solid black; "));
        weatherLabel = new QLabel(centralWidget);
        weatherLabel->setObjectName(QString::fromUtf8("weatherLabel"));
        weatherLabel->setGeometry(QRect(540, 90, 401, 71));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Agency FB"));
        font4.setPointSize(15);
        weatherLabel->setFont(font4);
        weatherLabel->setStyleSheet(QString::fromUtf8("border: 1px solid black; \n"
" background-color:transparent"));
        currentWeather = new QLabel(centralWidget);
        currentWeather->setObjectName(QString::fromUtf8("currentWeather"));
        currentWeather->setGeometry(QRect(690, 50, 121, 21));
        currentWeather->setFont(font2);
        currentWeather->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        currentTraffic = new QLabel(centralWidget);
        currentTraffic->setObjectName(QString::fromUtf8("currentTraffic"));
        currentTraffic->setGeometry(QRect(690, 180, 111, 20));
        currentTraffic->setFont(font2);
        currentTraffic->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        zipCode = new QLabel(centralWidget);
        zipCode->setObjectName(QString::fromUtf8("zipCode"));
        zipCode->setGeometry(QRect(510, 480, 121, 41));
        zipCode->setFont(font2);
        zipCode->setStyleSheet(QString::fromUtf8("background-color:transparent"));
        imageSlideshow = new QLabel(centralWidget);
        imageSlideshow->setObjectName(QString::fromUtf8("imageSlideshow"));
        imageSlideshow->setGeometry(QRect(20, 320, 421, 261));
        imageSlideshow->setStyleSheet(QString::fromUtf8("border: 1px solid black; \n"
" background-color:transparent;\n"
"border-radius: 20px;\n"
"border: 1px solid black; "));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 60, 21, 81));
        QFont font5;
        font5.setPointSize(40);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("background-color:transparent; \n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 60, 21, 81));
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("background-color:transparent; \n"
""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 160, 21, 71));
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("background-color:transparent; \n"
""));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 150, 21, 91));
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("background-color:transparent; \n"
""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 240, 21, 61));
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("background-color:transparent; \n"
""));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 240, 21, 61));
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("background-color:transparent; \n"
""));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 953, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        greetingMessage->setText(QString());
        imageDownloadButton->setText(QApplication::translate("MainWindow", "Current Traffic", nullptr));
        imageLabel->setText(QString());
        zipCodeEdit->setText(QApplication::translate("MainWindow", "98119", nullptr));
        seattle->setText(QApplication::translate("MainWindow", "SEATTLE", nullptr));
        busan->setText(QApplication::translate("MainWindow", "BUSAN", nullptr));
        bishkek->setText(QApplication::translate("MainWindow", "Bishkek", nullptr));
        weatherDownloadButton->setText(QApplication::translate("MainWindow", "Current Weather", nullptr));
        weatherLabel->setText(QApplication::translate("MainWindow", "Current Weather", nullptr));
        currentWeather->setText(QApplication::translate("MainWindow", "Current Weather", nullptr));
        currentTraffic->setText(QApplication::translate("MainWindow", "Current Traffic", nullptr));
        zipCode->setText(QApplication::translate("MainWindow", "Enter Zip Code:", nullptr));
        imageSlideshow->setText(QString());
        label->setText(QApplication::translate("MainWindow", ":", nullptr));
        label_2->setText(QApplication::translate("MainWindow", ":", nullptr));
        label_3->setText(QApplication::translate("MainWindow", ":", nullptr));
        label_4->setText(QApplication::translate("MainWindow", ":", nullptr));
        label_5->setText(QApplication::translate("MainWindow", ":", nullptr));
        label_6->setText(QApplication::translate("MainWindow", ":", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
