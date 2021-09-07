#include "zlxps.h"

zlxps::zlxps(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.openaction, SIGNAL(triggered()), ui.image, SLOT(Open()));


}
