#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>
#include <QVBoxLayout>

// MODIF : l'adresse de la VOITURE (la Raspberry Pi), pas celle d'un PC.
// Sur la Pi, taper  hostname -I  pour la connaître.
const QString IP_VOITURE = "192.168.1.15";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //vers pc dirigeant la voiture
    , clientLidar(IP_VOITURE, 4321)            //lidar
    , clientVoiture(IP_VOITURE, 1234)          //vitesse & angle des roues
    , clientStartStop(IP_VOITURE, 1234)        //Boutons
    , clientBatterie(IP_VOITURE, 1236)         //Batterie
{
    ui->setupUi(this);

    // MODIF : dans le .ui, ces 3 zones n'ont pas de layout : layout() renvoyait nullptr
    // et le programme plantait juste après la connexion. On leur en donne un ici.
    new QVBoxLayout(ui->widgetLidar);
    new QVBoxLayout(ui->widgetVoiture);
    new QVBoxLayout(ui->widgetBatterie);

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