#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(int _nbVoitures, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , circuit(_nbVoitures,this)
    ,nbVoitures(_nbVoitures)
{
    listeCouleurs.append(Qt::black);
    listeCouleurs.append(Qt::red);
    listeCouleurs.append(Qt::green);
    listeCouleurs.append(Qt::blue);
    listeCouleurs.append(Qt::cyan);
    listeCouleurs.append(Qt::magenta);
    listeCouleurs.append(Qt::yellow);
    listeCouleurs.append(Qt::gray);
    listeCouleurs.append(Qt::darkRed);
    listeCouleurs.append(Qt::darkGreen);
    listeCouleurs.append(Qt::darkBlue);
    listeCouleurs.append(Qt::darkMagenta);
    listeCouleurs.append(Qt::darkYellow);

    ui->setupUi(this);

    createWidgetsNbTours();
    createBpCollisions();
    createInitBp();
    createEnableBox();
    createTimeZone();


    ui->circuitPosition->layout()->addWidget(&circuit);

    ui->checkBox_all->setChecked(true);



    // bps choix circuit

    connect(ui->bpCircuit_1,&QPushButton::clicked,
            &circuit,&CircuitWidget::loadCircuit1);
    connect(ui->bpCircuit_2,&QPushButton::clicked,
            &circuit,&CircuitWidget::loadCircuit2);
    connect(ui->bpCircuit_3,&QPushButton::clicked,
            &circuit,&CircuitWidget::loadCircuit3);
    connect(ui->bpCircuit_4,&QPushButton::clicked,
            &circuit,&CircuitWidget::loadCircuit4);

    connect(ui->bpZoomPlus,&QPushButton::clicked,
            &circuit,&CircuitWidget::zoomPlus);
    connect(ui->bpZoomMoins,&QPushButton::clicked,
            &circuit,&CircuitWidget::zoomMoins);

    connect(ui->bpMoveUp,&QPushButton::clicked,
            &circuit,&CircuitWidget::moveHaut);
    connect(ui->bpMoveDown,&QPushButton::clicked,
            &circuit,&CircuitWidget::moveBas);
    connect(ui->bpMoveDroit,&QPushButton::clicked,
            &circuit,&CircuitWidget::moveDroit);
    connect(ui->bpMoveGauche,&QPushButton::clicked,
            &circuit,&CircuitWidget::moveGauche);

    connect(&circuit,&CircuitWidget::newTimeVoiture,
            this,&MainWindow::newTimeVoiture);
    connect(&circuit,&CircuitWidget::newBestTimeVoiture,
            this,&MainWindow::newBestTimeVoiture);
    connect(&circuit,&CircuitWidget::newNbTour,
            this,&MainWindow::newNbTours);

    connect(ui->checkLidar,&QCheckBox::clicked,
            &circuit,&CircuitWidget::enableLidar);

    connect(ui->bpStart,&QPushButton::clicked,
            this,&MainWindow::start);
    connect(ui->bpStop,&QPushButton::clicked,
            this,&MainWindow::stop);

    resize(1000,900);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createWidgetsNbTours()
{
    for (int i=0;i<nbVoitures;i++)
    {
        QLCDNumber * lcd=new QLCDNumber();
        listeWidgetNbTours.append(lcd);
        ui->zoneNbTour->layout()->addWidget(lcd);
        QFont font("Courier", 20, QFont::Bold, true);
        lcd->setMinimumSize(25,30);
        lcd->setFont(font);
        lcd->setDigitCount(1);
        QString style = "background-color: rgb(%1, %2, %3);";
        QColor color=listeCouleurs.at(i%listeCouleurs.size());
        lcd->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()));;
    }
}

void MainWindow::createBpCollisions()
{
    for (int i=0;i<nbVoitures;i++)
    {
        connect(ui->checkBox_all,&QCheckBox::clicked,
                circuit.listeVoitures.at(i)->voiture,&Vehicule::setIsCollisions);
        QCheckBox * box=new QCheckBox();
        //listeWidgetNbTours.append(lcd);
        ui->zoneEnableCollisions->layout()->addWidget(box);
        QString style = "background-color: rgb(%1, %2, %3);";
        QColor color=listeCouleurs.at(i%listeCouleurs.size());
        box->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()));
        box->setCheckState(Qt::Checked);
        box->setMinimumWidth(30);
        box->setMaximumWidth(30);

        connect(box,&QCheckBox::clicked,
                circuit.listeVoitures.at(i)->voiture,&Vehicule::setIsCollisions);

        connect(ui->checkBox_all,&QCheckBox::clicked,
                box,&QCheckBox::setChecked);



    }
}

void MainWindow::createInitBp()
{
    for (int i=0;i<nbVoitures;i++)
    {
        connect(ui->checkBox_all,&QCheckBox::clicked,
                circuit.listeVoitures.at(i)->voiture,&Vehicule::setIsCollisions);
        QPushButton * bp=new QPushButton();
        bp->setText("init");
        //listeWidgetNbTours.append(lcd);
        ui->zoneInitBp->layout()->addWidget(bp);
        QString style = "background-color: rgb(%1, %2, %3);";
        QColor color=listeCouleurs.at(i%listeCouleurs.size());
        bp->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()));

        bp->setMinimumWidth(30);
        bp->setMaximumWidth(30);

        connect(bp,&QCheckBox::clicked,
                circuit.listeVoitures.at(i)->voiture,&Vehicule::initPos);

        connect(ui->bpResetVoitureAll,&QPushButton::clicked,
                circuit.listeVoitures.at(i)->voiture,&Vehicule::initPos);
    }
}

void MainWindow::createEnableBox()
{
    for (int i=0;i<nbVoitures;i++)
    {
        QCheckBox * box=new QCheckBox();
        //listeWidgetNbTours.append(lcd);
        ui->zoneEnableVoitures->layout()->addWidget(box);
        QString style = "background-color: rgb(%1, %2, %3);";
        QColor color=listeCouleurs.at(i%listeCouleurs.size());
        box->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()));
        box->setCheckState(Qt::Checked);

        connect(box,&QCheckBox::clicked,
                circuit.listeVoitures.at(i)->voiture,&Vehicule::setIsEnable);


        connect(ui->initTcp,&QPushButton::clicked,
                &circuit.listeVoitures.at(i)->voiture->tcp,&CommunicationTCP::reStartConnexion);

    }
}

void MainWindow::createTimeZone()
{
    for (int i=0;i<nbVoitures;i++)
    {
        QLCDNumber * lcd=new QLCDNumber();
        listeWidgetBestTime.append(lcd);
        ui->zoneBestTime->layout()->addWidget(lcd);
        QFont font("Courier", 20, QFont::Bold, true);
        lcd->setMinimumSize(25,30);
        lcd->setFont(font);
        lcd->setDigitCount(4);
        QString style = "background-color: rgb(%1, %2, %3);";
        QColor color=listeCouleurs.at(i%listeCouleurs.size());
        lcd->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()));;
    }
    for (int i=0;i<nbVoitures;i++)
    {
        QLCDNumber * lcd=new QLCDNumber();
        listeWidgetTime.append(lcd);
        ui->zoneTime->layout()->addWidget(lcd);
        QFont font("Courier", 20, QFont::Bold, true);
        lcd->setMinimumSize(25,30);
        lcd->setFont(font);
        lcd->setDigitCount(4);
        QString style = "background-color: rgb(%1, %2, %3);";
        QColor color=listeCouleurs.at(i%listeCouleurs.size());
        lcd->setStyleSheet(style.arg(color.red()).arg(color.green()).arg(color.blue()));;
    }
}

void MainWindow::newTimeVoiture(int voiture, int time)
{
    time=time/10;
    if (time>99999) time=0;
    if (time<0) time=0;
    if (voiture<nbVoitures) listeWidgetTime.at(voiture)->display(time);
}

void MainWindow::newBestTimeVoiture(int voiture, int time)
{
    time=time/10;
    if (time>99999) time=0;
    if (time<0) time=0;
    if (voiture<nbVoitures) listeWidgetBestTime.at(voiture)->display(time);
}

void MainWindow::newNbTours(int voiture, int nb)
{
    if (voiture<nbVoitures) listeWidgetNbTours.at(voiture)->display(nb);
}

void MainWindow::start()
{
    ui->bpStart->setDisabled(true);
    ui->bpStop->setEnabled(true);

    for (int i=0;i<nbVoitures;i++) circuit.listeVoitures.at(i)->voiture->start();

}

void MainWindow::stop()
{
    ui->bpStart->setEnabled(true);
    ui->bpStop->setDisabled(true);

    for (int i=0;i<nbVoitures;i++) circuit.listeVoitures.at(i)->voiture->stop();

}
