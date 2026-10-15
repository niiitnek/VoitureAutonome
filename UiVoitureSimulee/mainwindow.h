#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "widgetlidar.h"
#include "tcpclient.h"
#include "widgetvoiture.h"

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
    // WidgetLidar *widgetLidar;
    TCPclient clientLidar;
    // TCPclient clientVitesseAngle;
    // TCPclient clientStartStop;
};
#endif // MAINWINDOW_H
