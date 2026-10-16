#include "materielsimule.h"
#include <qdebug.h>
MaterielSimule::MaterielSimule()
    : Materiel{}
{
    // connect(&tcp, &TcpClient::newDatas, this, &MaterielSimule::processTcpDatas);
    // tcp.connectTCP("127.0.0.1");
}
void MaterielSimule::deplacer(double vitesse, double angle)
{
    QString message = QString::number(vitesse) + ";" + QString::number(angle);
    // tcp.sendDatas(message);
}
void MaterielSimule::processTcpDatas(QString data)
{
    QStringList liste = data.split(';');
    if (liste.size() == 360)
    {
        for (int i = 0; i < 360; i++)
            distanceLidar[i] = liste[i].toInt();
    }
    qDebug()<<liste;
    emit newDistances();
}