#include "reg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    reg w;
    w.show();
    return a.exec();
}
