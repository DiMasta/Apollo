#include <QtGui/QApplication>
#include "apollo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Apollo w;
    w.show();
    
    return a.exec();
}
