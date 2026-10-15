#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //vers pc dirigeant la voiture
    , clientLidar("10.98.33.27",2000)            //lidar
    , clientVoiture("10.98.33.27",2001)         //vitesse & angle des roues
    , clientStartStop("10.98.33.27",2002)      //Boutons
    , clientBatterie("10.98.33.27",2003)      //Batterie
    //vers le test
{
    ui->setupUi(this);

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
    clientStartStop.sendDatas("START");
}

void MainWindow::bpStop_clicked()
{
    clientStartStop.sendDatas("STOP");
}