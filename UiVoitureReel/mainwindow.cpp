#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //vers la voiture
//     , clientLidar("192.168.1.15",4231)            //lidar
//     , clientVoiture("192.168.1.15",1234)         //vitesse & angle des roues et boutons
// //    , clientStartStop("192.168.1.15",1234)      //Boutons
//     , clientBatterie("192.168.1.15",1235)      //Batterie
//     , clientTFmini("192.168.1.15",1236)       //Lidar TFmini
    //vers checkup (test)
    , clientLidar("10.98.33.28",4231)            //lidar
    , clientVoiture("10.98.33.28",1234)         //vitesse & angle des roues et boutons
    , clientBatterie("10.98.33.28",1235)      //Batterie
    , clientTFmini("10.98.33.28",1236)       //Lidar TFmini
{
    ui->setupUi(this);

    connect(ui->bpQuitter,&QPushButton::clicked,
            this,&MainWindow::close);

    ui->widgetLidar->layout()->addWidget(&lidar);
    ui->widgetVoiture->layout()->addWidget(&voiture);
    ui->widgetBatterie->layout()->addWidget(&batterie);

    //connect pour recevoir les valeurs récupérées et les afficher dans les widgets
    connect(&clientLidar, &TCPclient::newDatas,
            &lidar, &WidgetLidar::processTcpDatas);
    connect(&clientVoiture, &TCPclient::newDatas,
            &voiture, &WidgetVoiture::processTcpDatas);
    connect(&clientBatterie, &TCPclient::newDatas,
            &batterie, &::WidgetBatterie::processTcpDatas);
    //BOUTONS
    connect(ui->bpOn, &QPushButton::clicked, this, &MainWindow::bpStart_clicked);
    connect(ui->bpOff, &QPushButton::clicked, this, &MainWindow::bpStop_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::bpStart_clicked()
{
    clientVoiture.sendDatas("START");
}

void MainWindow::bpStop_clicked()
{
    clientVoiture.sendDatas("STOP");
}