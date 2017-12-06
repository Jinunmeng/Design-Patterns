#include <QCoreApplication>
#include "product.h"
#include "factory.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Factory *fac = new ConcreteFactory();
    Product *p = fac->CreateProduct();

    Factory *facB = new ConcreteFactoryB();
    Product *pb = facB->CreateProduct();

    return a.exec();
}
