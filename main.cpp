#include "stdafx.h"
#include "klotski.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Klotski w;
    w.show();
    return a.exec();
}
