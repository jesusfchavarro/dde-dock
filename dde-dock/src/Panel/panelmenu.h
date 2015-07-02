#ifndef PANELMENU_H
#define PANELMENU_H

#include <QWidget>
#include <QLabel>
#include <QDebug>
#include "Controller/dockmodedata.h"

class PanelMenuItem : public QLabel
{
    Q_OBJECT
public:
    explicit PanelMenuItem(QString text, QWidget *parent = 0);

signals:
    void itemClicked();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
};

class PanelMenu : public QWidget
{
    Q_OBJECT
public:
    explicit PanelMenu(QWidget *parent = 0);

signals:

public slots:
private slots:
    void changeToFashionMode();
    void changeToEfficientMode();
    void changeToClassicMode();

private:
    DockModeData *dockCons = DockModeData::getInstants();

    const int MENU_ITEM_HEIGHT = 30;
    const int MENU_ITEM_SPACING = 3;
};

#endif // PANELMENU_H