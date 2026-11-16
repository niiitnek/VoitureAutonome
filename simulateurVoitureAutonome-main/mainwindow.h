#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <circuitwidget.h>
#include <controleur.h>
#include <QList>
#include <QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(int _nbVoitures,QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CircuitWidget circuit;
    int nbVoitures;

    QList<QLCDNumber *> listeWidgetNbTours;
    QList<QLCDNumber *> listeWidgetBestTime;
    QList<QLCDNumber *> listeWidgetTime;
    QList<QColor> listeCouleurs;

    void createWidgetsNbTours();
    void createBpCollisions();
    void createInitBp();
    void createEnableBox();
    void createTimeZone();

private slots:
    void newTimeVoiture(int voiture,int time);
    void newBestTimeVoiture(int voiture,int time);
    void newNbTours(int voiture,int nb);
    void start();
    void stop();


};
#endif // MAINWINDOW_H
