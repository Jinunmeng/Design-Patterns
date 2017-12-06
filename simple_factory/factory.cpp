#include "factory.h"
#include "product.h"
#include <QDebug>
#include <QString>
Factory::~Factory()
{

}

Product *Factory::CreateProduct(QString s)
{
    Product *product = nullptr;
    if (s == "A")
    {
        product = new ConcreteProductA();
    }
    else if (s == "B")
    {
        product = new ConcreteProductB();
    }
    return product;
}

Factory::Factory()
{

}

ConcreteFactory::~ConcreteFactory()
{

}

ConcreteFactory::ConcreteFactory()
{
    qDebug() << "ConcreteFactory";
}
