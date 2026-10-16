#ifndef WIDGETBATTERIE_H
#define WIDGETBATTERIE_H
#include "tcpclient.h"
#include <QWidget>

class WidgetBatterie : public QWidget {
    Q_OBJECT
public:
    explicit WidgetBatterie(QWidget *parent = nullptr);

public slots:
    void processTcpDatas(QString data);

protected:
    void paintEvent(QPaintEvent *) override;

private:
    double tension;
};
#endif