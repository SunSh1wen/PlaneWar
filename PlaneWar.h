#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PlaneWar.h"

class PlaneWar : public QMainWindow
{
    Q_OBJECT

public:
    PlaneWar(QWidget *parent = Q_NULLPTR);

    //������ʼ��
    void initScene();

private:
    Ui::PlaneWarClass ui;
};
