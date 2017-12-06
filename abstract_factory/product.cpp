#include "product.h"

#include <QDebug>

AbstractProductB::~AbstractProductB()
{

}

AbstractProductB::AbstractProductB()
{

}

AbstractProductA::~AbstractProductA()
{

}

AbstractProductA::AbstractProductA()
{

}

ProductB2::ProductB2()
{
    qDebug() << "ProdecutB2...";
}

ProductB1::ProductB1()
{
     qDebug() << "ProductB1...";
}

ProductA2::ProductA2()
{
     qDebug() << "ProductA2...";
}

ProductA1::ProductA1()
{
     qDebug() << "ProductA1...";
}
