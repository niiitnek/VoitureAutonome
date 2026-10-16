/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetGauche;
    QVBoxLayout *verticalLayout;
    QWidget *widgetBP;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *bpOn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bpOff;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bpQuitter;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetCheckUp;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widgetLidar;
    QWidget *widgetDroite;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetVoiture;
    QWidget *widgetBatterie;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widgetGauche = new QWidget(centralwidget);
        widgetGauche->setObjectName(QString::fromUtf8("widgetGauche"));
        widgetGauche->setMaximumSize(QSize(400, 16777215));
        verticalLayout = new QVBoxLayout(widgetGauche);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetBP = new QWidget(widgetGauche);
        widgetBP->setObjectName(QString::fromUtf8("widgetBP"));
        widgetBP->setMinimumSize(QSize(0, 100));
        widgetBP->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_2 = new QHBoxLayout(widgetBP);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        bpOn = new QPushButton(widgetBP);
        bpOn->setObjectName(QString::fromUtf8("bpOn"));
        bpOn->setMinimumSize(QSize(60, 60));

        horizontalLayout_2->addWidget(bpOn);

        horizontalSpacer_2 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        bpOff = new QPushButton(widgetBP);
        bpOff->setObjectName(QString::fromUtf8("bpOff"));
        bpOff->setMinimumSize(QSize(60, 60));

        horizontalLayout_2->addWidget(bpOff);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        bpQuitter = new QPushButton(widgetBP);
        bpQuitter->setObjectName(QString::fromUtf8("bpQuitter"));
        bpQuitter->setMinimumSize(QSize(0, 60));

        horizontalLayout_2->addWidget(bpQuitter);


        verticalLayout->addWidget(widgetBP);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widgetCheckUp = new QWidget(widgetGauche);
        widgetCheckUp->setObjectName(QString::fromUtf8("widgetCheckUp"));
        widgetCheckUp->setMinimumSize(QSize(0, 100));
        pushButton = new QPushButton(widgetCheckUp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 50, 81, 25));

        verticalLayout->addWidget(widgetCheckUp);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(widgetGauche);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(300, 300));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widgetLidar = new QWidget(widget);
        widgetLidar->setObjectName(QString::fromUtf8("widgetLidar"));
        widgetLidar->setMinimumSize(QSize(250, 250));
        widgetLidar->setMaximumSize(QSize(250, 250));

        horizontalLayout_3->addWidget(widgetLidar);


        verticalLayout->addWidget(widget);


        horizontalLayout->addWidget(widgetGauche);

        widgetDroite = new QWidget(centralwidget);
        widgetDroite->setObjectName(QString::fromUtf8("widgetDroite"));
        verticalLayout_2 = new QVBoxLayout(widgetDroite);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widgetVoiture = new QWidget(widgetDroite);
        widgetVoiture->setObjectName(QString::fromUtf8("widgetVoiture"));

        verticalLayout_2->addWidget(widgetVoiture);

        widgetBatterie = new QWidget(widgetDroite);
        widgetBatterie->setObjectName(QString::fromUtf8("widgetBatterie"));
        widgetBatterie->setMaximumSize(QSize(16777215, 200));

        verticalLayout_2->addWidget(widgetBatterie);


        horizontalLayout->addWidget(widgetDroite);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bpOn->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        bpOff->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        bpQuitter->setText(QCoreApplication::translate("MainWindow", "QUITTER", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
