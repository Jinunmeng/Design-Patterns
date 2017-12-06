#include "product.h"
#include <QDebug>
Product::~Product()
{

}

Product::Product()
{

}

ConcreteProductA::~ConcreteProductA()
{

}

ConcreteProductA::ConcreteProductA()
{
    qDebug() << "ConcreteProductA";
}

ConcreteProductB::~ConcreteProductB()
{

}

ConcreteProductB::ConcreteProductB()
{
     qDebug() << "ConcreteProductB";
}
