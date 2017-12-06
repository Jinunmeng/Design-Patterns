#include "factory.h"
#include <QDebug>
#include "product.h"
Factory::~Factory()
{

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

Product *ConcreteFactory::CreateProduct()
{
    return new ConcreteProduct();
}

ConcreteFactoryB::~ConcreteFactoryB()
{

}

ConcreteFactoryB::ConcreteFactoryB()
{
    qDebug() << "ConcreteFactoryB";
}

Product *ConcreteFactoryB::CreateProduct()
{
    return new ConcreteProductB();
}
