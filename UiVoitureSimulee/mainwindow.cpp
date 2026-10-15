#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    // , clientLidar("10.98.32.173",8882)   //vers simulateur
    // --- vers code voiture ---
    , clientLidar("10.98.33.12",2000)            //lidar
    // , clientVitesseAngle("10.98.33.12",2001)    //vitesse & angle des roues
    // , clientStartStop("10.98.33.12",2002)      //Boutons
{
    ui->setupUi(this);

    // ui->widgetVoiture->processTcpDatas("-0.8;1");    //test
    //connect pour recevoir les valeurs du lidar et les afficher dans le widget
    connect(&clientLidar, &TCPclient::newDatas,
            ui->widgetLidar, &WidgetLidar::processTcpDatas);
    //connect(&clientVitesseAngle, &TCPclient::newDatas, ui->widgetVoiture, &WidgetVoiture::processTcpDatas);
    //BOUTONS
    //connect(ui->bp_ON, &QPushButton::clicked, this, &MainWindow::on_btnStart_clicked);
    //connect(ui->bp_OFF, &QPushButton::clicked, this, &MainWindow::on_btnStop_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::bpStart_clicked()
{
    // clientStartStop.sendDatas("START");
}

void MainWindow::bpStop_clicked()
{
    // clientStartStop.sendDatas("STOP");
}
