#include "product.h"
#include <QDebug>

Product::~Product()
{

}

Product::Product()
{

}

ConcreteProduct::~ConcreteProduct()
{

}

ConcreteProduct::ConcreteProduct()
{
    qDebug() << "ConcreteProduct";
}

ConcreteProductB::~ConcreteProductB()
{

}

ConcreteProductB::ConcreteProductB()
{
    qDebug() << "ConcreteProductB";
}
