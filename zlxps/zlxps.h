#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_zlxps.h"

class zlxps : public QMainWindow
{
    Q_OBJECT

public:
    zlxps(QWidget *parent = Q_NULLPTR);

private:
    Ui::zlxpsClass ui;
};
