#include <QCoreApplication>
#include "adapter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //类模式
    Target *pTarget = new Adapter();
    pTarget->Request();

    //对象模式
    Adaptee *ade = new Adaptee();
    Target *pTarget1 = new Adapter1(ade);
    pTarget1->Request();

    //对象模式Adapter2
    Target *pTarget2 = new Adapter1();
    pTarget2->Request();

    return a.exec();
}
