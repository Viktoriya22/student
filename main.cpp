#include <QCoreApplication>
#include "human.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Human *h = new Human();
    h->say();
    Human *x = new Human("Petr",176,71);
    x->say();
    return a.exec();
}
