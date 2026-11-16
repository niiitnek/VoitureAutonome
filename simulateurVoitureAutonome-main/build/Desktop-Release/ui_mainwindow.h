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
#include <QtWidgets/QCheckBox>
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
    QVBoxLayout *verticalLayout;
    QWidget *barreHaut;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bpResetVoitureAll;
    QSpacerItem *horizontalSpacer_5;
    QWidget *zoneNbTour;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QWidget *zoneTime;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QWidget *zoneInitBp;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_all;
    QSpacerItem *horizontalSpacer_6;
    QWidget *zoneEnableVoitures;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QWidget *zoneBestTime;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QWidget *zoneEnableCollisions;
    QHBoxLayout *horizontalLayout_10;
    QWidget *zone;
    QHBoxLayout *horizontalLayout;
    QWidget *barreGauche;
    QVBoxLayout *verticalLayout_3;
    QPushButton *initTcp;
    QSpacerItem *verticalSpacer_6;
    QPushButton *bpStart;
    QPushButton *bpStop;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *checkLidar;
    QSpacerItem *verticalSpacer_4;
    QPushButton *bpZoomPlus;
    QPushButton *bpZoomMoins;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bpMoveUp;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *bpMoveGauche;
    QPushButton *bpMoveDroit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *bpMoveDown;
    QSpacerItem *verticalSpacer_2;
    QPushButton *bpCircuit_1;
    QPushButton *bpCircuit_2;
    QPushButton *bpCircuit_3;
    QPushButton *bpCircuit_4;
    QSpacerItem *verticalSpacer;
    QWidget *circuitPosition;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1621, 912);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        barreHaut = new QWidget(centralwidget);
        barreHaut->setObjectName(QString::fromUtf8("barreHaut"));
        barreHaut->setMinimumSize(QSize(0, 110));
        barreHaut->setMaximumSize(QSize(16777215, 100));
        verticalLayout_4 = new QVBoxLayout(barreHaut);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget = new QWidget(barreHaut);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        bpResetVoitureAll = new QPushButton(widget);
        bpResetVoitureAll->setObjectName(QString::fromUtf8("bpResetVoitureAll"));
        bpResetVoitureAll->setMinimumSize(QSize(80, 0));
        bpResetVoitureAll->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(bpResetVoitureAll);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        zoneNbTour = new QWidget(widget);
        zoneNbTour->setObjectName(QString::fromUtf8("zoneNbTour"));
        zoneNbTour->setMinimumSize(QSize(100, 0));
        horizontalLayout_7 = new QHBoxLayout(zoneNbTour);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_3->addWidget(zoneNbTour);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        zoneTime = new QWidget(widget);
        zoneTime->setObjectName(QString::fromUtf8("zoneTime"));
        zoneTime->setMinimumSize(QSize(100, 0));
        horizontalLayout_11 = new QHBoxLayout(zoneTime);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_3->addWidget(zoneTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        zoneInitBp = new QWidget(widget);
        zoneInitBp->setObjectName(QString::fromUtf8("zoneInitBp"));
        zoneInitBp->setMinimumSize(QSize(100, 0));
        horizontalLayout_9 = new QHBoxLayout(zoneInitBp);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_3->addWidget(zoneInitBp);


        verticalLayout_4->addWidget(widget);

        widget_2 = new QWidget(barreHaut);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_all = new QCheckBox(widget_2);
        checkBox_all->setObjectName(QString::fromUtf8("checkBox_all"));
        checkBox_all->setMinimumSize(QSize(80, 0));
        checkBox_all->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(checkBox_all);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        zoneEnableVoitures = new QWidget(widget_2);
        zoneEnableVoitures->setObjectName(QString::fromUtf8("zoneEnableVoitures"));
        zoneEnableVoitures->setMinimumSize(QSize(100, 0));
        horizontalLayout_8 = new QHBoxLayout(zoneEnableVoitures);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(zoneEnableVoitures);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        zoneBestTime = new QWidget(widget_2);
        zoneBestTime->setObjectName(QString::fromUtf8("zoneBestTime"));
        zoneBestTime->setMinimumSize(QSize(100, 0));
        horizontalLayout_12 = new QHBoxLayout(zoneBestTime);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(zoneBestTime);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        zoneEnableCollisions = new QWidget(widget_2);
        zoneEnableCollisions->setObjectName(QString::fromUtf8("zoneEnableCollisions"));
        zoneEnableCollisions->setMinimumSize(QSize(100, 0));
        horizontalLayout_10 = new QHBoxLayout(zoneEnableCollisions);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(zoneEnableCollisions);


        verticalLayout_4->addWidget(widget_2);


        verticalLayout->addWidget(barreHaut);

        zone = new QWidget(centralwidget);
        zone->setObjectName(QString::fromUtf8("zone"));
        horizontalLayout = new QHBoxLayout(zone);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        barreGauche = new QWidget(zone);
        barreGauche->setObjectName(QString::fromUtf8("barreGauche"));
        barreGauche->setMinimumSize(QSize(60, 0));
        barreGauche->setMaximumSize(QSize(60, 16777215));
        verticalLayout_3 = new QVBoxLayout(barreGauche);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        initTcp = new QPushButton(barreGauche);
        initTcp->setObjectName(QString::fromUtf8("initTcp"));

        verticalLayout_3->addWidget(initTcp);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        bpStart = new QPushButton(barreGauche);
        bpStart->setObjectName(QString::fromUtf8("bpStart"));

        verticalLayout_3->addWidget(bpStart);

        bpStop = new QPushButton(barreGauche);
        bpStop->setObjectName(QString::fromUtf8("bpStop"));
        bpStop->setEnabled(false);

        verticalLayout_3->addWidget(bpStop);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        checkLidar = new QCheckBox(barreGauche);
        checkLidar->setObjectName(QString::fromUtf8("checkLidar"));
        checkLidar->setChecked(true);

        verticalLayout_3->addWidget(checkLidar);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        bpZoomPlus = new QPushButton(barreGauche);
        bpZoomPlus->setObjectName(QString::fromUtf8("bpZoomPlus"));

        verticalLayout_3->addWidget(bpZoomPlus);

        bpZoomMoins = new QPushButton(barreGauche);
        bpZoomMoins->setObjectName(QString::fromUtf8("bpZoomMoins"));

        verticalLayout_3->addWidget(bpZoomMoins);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        widget_3 = new QWidget(barreGauche);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, 9, 0);
        bpMoveUp = new QPushButton(widget_3);
        bpMoveUp->setObjectName(QString::fromUtf8("bpMoveUp"));
        bpMoveUp->setMinimumSize(QSize(25, 0));
        bpMoveUp->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_4->addWidget(bpMoveUp);


        verticalLayout_3->addWidget(widget_3);

        widget_5 = new QWidget(barreGauche);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        bpMoveGauche = new QPushButton(widget_5);
        bpMoveGauche->setObjectName(QString::fromUtf8("bpMoveGauche"));
        bpMoveGauche->setMinimumSize(QSize(25, 0));
        bpMoveGauche->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_6->addWidget(bpMoveGauche);

        bpMoveDroit = new QPushButton(widget_5);
        bpMoveDroit->setObjectName(QString::fromUtf8("bpMoveDroit"));
        bpMoveDroit->setMinimumSize(QSize(25, 0));
        bpMoveDroit->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_6->addWidget(bpMoveDroit);


        verticalLayout_3->addWidget(widget_5);

        widget_4 = new QWidget(barreGauche);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, 9, 0);
        bpMoveDown = new QPushButton(widget_4);
        bpMoveDown->setObjectName(QString::fromUtf8("bpMoveDown"));
        bpMoveDown->setMinimumSize(QSize(25, 0));
        bpMoveDown->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_5->addWidget(bpMoveDown);


        verticalLayout_3->addWidget(widget_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        bpCircuit_1 = new QPushButton(barreGauche);
        bpCircuit_1->setObjectName(QString::fromUtf8("bpCircuit_1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bpCircuit_1->sizePolicy().hasHeightForWidth());
        bpCircuit_1->setSizePolicy(sizePolicy);
        bpCircuit_1->setMinimumSize(QSize(50, 0));

        verticalLayout_3->addWidget(bpCircuit_1);

        bpCircuit_2 = new QPushButton(barreGauche);
        bpCircuit_2->setObjectName(QString::fromUtf8("bpCircuit_2"));
        sizePolicy.setHeightForWidth(bpCircuit_2->sizePolicy().hasHeightForWidth());
        bpCircuit_2->setSizePolicy(sizePolicy);
        bpCircuit_2->setMinimumSize(QSize(50, 0));

        verticalLayout_3->addWidget(bpCircuit_2);

        bpCircuit_3 = new QPushButton(barreGauche);
        bpCircuit_3->setObjectName(QString::fromUtf8("bpCircuit_3"));
        sizePolicy.setHeightForWidth(bpCircuit_3->sizePolicy().hasHeightForWidth());
        bpCircuit_3->setSizePolicy(sizePolicy);
        bpCircuit_3->setMinimumSize(QSize(50, 0));

        verticalLayout_3->addWidget(bpCircuit_3);

        bpCircuit_4 = new QPushButton(barreGauche);
        bpCircuit_4->setObjectName(QString::fromUtf8("bpCircuit_4"));
        sizePolicy.setHeightForWidth(bpCircuit_4->sizePolicy().hasHeightForWidth());
        bpCircuit_4->setSizePolicy(sizePolicy);
        bpCircuit_4->setMinimumSize(QSize(50, 0));

        verticalLayout_3->addWidget(bpCircuit_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addWidget(barreGauche);

        circuitPosition = new QWidget(zone);
        circuitPosition->setObjectName(QString::fromUtf8("circuitPosition"));
        circuitPosition->setAutoFillBackground(false);
        circuitPosition->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(circuitPosition);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        horizontalLayout->addWidget(circuitPosition);


        verticalLayout->addWidget(zone);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bpResetVoitureAll->setText(QCoreApplication::translate("MainWindow", "init all", nullptr));
        checkBox_all->setText(QCoreApplication::translate("MainWindow", "collisions", nullptr));
        initTcp->setText(QCoreApplication::translate("MainWindow", "initTcp", nullptr));
        bpStart->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        bpStop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        checkLidar->setText(QCoreApplication::translate("MainWindow", "lidar", nullptr));
        bpZoomPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        bpZoomMoins->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bpMoveUp->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        bpMoveGauche->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        bpMoveDroit->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        bpMoveDown->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        bpCircuit_1->setText(QCoreApplication::translate("MainWindow", "circuit 1", nullptr));
        bpCircuit_2->setText(QCoreApplication::translate("MainWindow", "circuit 2", nullptr));
        bpCircuit_3->setText(QCoreApplication::translate("MainWindow", "circuit 3", nullptr));
        bpCircuit_4->setText(QCoreApplication::translate("MainWindow", "circuit 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
