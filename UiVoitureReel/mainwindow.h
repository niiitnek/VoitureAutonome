#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tcpclient.h"
#include "widgetlidar.h"
#include "widgetvoiture.h"
#include "widgetbatterie.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    // Slots pour les clics sur les boutons
    void bpStart_clicked();
    void bpStop_clicked();

private:
    Ui::MainWindow *ui;

    WidgetLidar lidar;
    WidgetVoiture voiture;
    WidgetBatterie batterie;

    TCPclient clientLidar;
    TCPclient clientVoiture;
//    TCPclient clientStartStop;
    TCPclient clientBatterie;
    TCPclient clientTFmini;
};
#endif // MAINWINDOW_H
