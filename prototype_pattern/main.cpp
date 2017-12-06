#include <QCoreApplication>
#include "prototype.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Prototype *p = new ConcretePrototype();
    Prototype *p1 = p->Clone();

    Prototype *p2 = p->Clone();

    return a.exec();
}
