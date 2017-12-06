#include <QCoreApplication>
#include "factory.h"
#include "product.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Product *pa = Factory::CreateProduct("A");
    Product *pb = Factory::CreateProduct("B");
    return a.exec();
}
