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
#include "widgetlidar.h"
#include "widgetvoiture.h"

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
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bp_ON;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bp_OFF;
    QSpacerItem *horizontalSpacer;
    WidgetLidar *widgetLidar;
    WidgetVoiture *widgetVoiture;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 562);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widgetGauche = new QWidget(centralwidget);
        widgetGauche->setObjectName(QString::fromUtf8("widgetGauche"));
        widgetGauche->setMinimumSize(QSize(400, 400));
        widgetGauche->setMaximumSize(QSize(400, 16777215));
        verticalLayout = new QVBoxLayout(widgetGauche);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetBP = new QWidget(widgetGauche);
        widgetBP->setObjectName(QString::fromUtf8("widgetBP"));
        widgetBP->setMaximumSize(QSize(400, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widgetBP);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        bp_ON = new QPushButton(widgetBP);
        bp_ON->setObjectName(QString::fromUtf8("bp_ON"));

        horizontalLayout_2->addWidget(bp_ON);

        horizontalSpacer_3 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        bp_OFF = new QPushButton(widgetBP);
        bp_OFF->setObjectName(QString::fromUtf8("bp_OFF"));

        horizontalLayout_2->addWidget(bp_OFF);

        horizontalSpacer = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widgetBP);

        widgetLidar = new WidgetLidar(widgetGauche);
        widgetLidar->setObjectName(QString::fromUtf8("widgetLidar"));
        widgetLidar->setMinimumSize(QSize(400, 400));
        widgetLidar->setMaximumSize(QSize(400, 400));

        verticalLayout->addWidget(widgetLidar);


        horizontalLayout->addWidget(widgetGauche);

        widgetVoiture = new WidgetVoiture(centralwidget);
        widgetVoiture->setObjectName(QString::fromUtf8("widgetVoiture"));
        widgetVoiture->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(widgetVoiture);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bp_ON->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        bp_OFF->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
