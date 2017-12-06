#include <QCoreApplication>
#include "product.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   Director *pDirector = new Director(new ConcreteBuilder1());
   pDirector->Construct();

   Director *pDirector1 = new Director(new ConcreteBuilder2());
   pDirector1->Construct();


    return a.exec();
}
