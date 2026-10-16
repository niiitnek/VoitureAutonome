#ifndef MATERIELSIMULE_H
#define MATERIELSIMULE_H
#include "materiel.h"
// #include "tcpclient.h"

class MaterielSimule : public Materiel
{
public:
    explicit MaterielSimule();
    virtual void deplacer(double vitesse, double angle) override;
public slots:
    void processTcpDatas(QString data);
private:
    // TcpClient tcp;
};

#endif // MATERIELSIMULE_H
