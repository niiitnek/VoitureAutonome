#include "widgetbatterie.h"
#include <QPainter>

WidgetBatterie::WidgetBatterie(QWidget *parent)
    : QWidget(parent)
    , tension(0)          // 0 tant que la voiture n'a rien envoyé (avant : valeur au hasard)
{}

void WidgetBatterie::processTcpDatas(QString data) {
    bool ok;
    double v = data.trimmed().toDouble(&ok);
    if(ok) {
        tension = v;
        update();
    }
}

void WidgetBatterie::paintEvent(QPaintEvent*) {
    QPainter p(this);
    QRect r(5,5,width()-15,height()-10);
    p.drawRect(r); p.drawRect(r.right(),height()/2-5,10,10);

    double pct = qBound(0.0,(tension-6.0)/(8.4-6.0)*100.0,100.0);
    int full = int((pct+19)/20), e=3, w=(r.width()-(6*e))/5, h=r.height()-2*e;

    for(int i=0;i<5;i++){
        QRect b(r.left()+e+i*(w+e),r.top()+e,w,h);
        QColor c=(i<full)?Qt::green:Qt::gray;
        if(pct<30)c=(i<full)?QColor(255,165,0):Qt::gray;
        if(pct<15)c=(i<full)?Qt::red:Qt::gray;
        p.fillRect(b,c); p.drawRect(b);
    }
    p.drawText(r,Qt::AlignCenter,QString("%1 V").arg(tension,0,'f',2));
}