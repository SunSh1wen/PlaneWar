#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PlaneWar.h"

class PlaneWar : public QMainWindow
{
    Q_OBJECT

public:
    PlaneWar(QWidget *parent = Q_NULLPTR);

    //≥°æ∞≥ı ºªØ
    void initScene();

private:
    Ui::PlaneWarClass ui;
};
