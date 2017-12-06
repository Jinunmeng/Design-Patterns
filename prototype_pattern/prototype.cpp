#include "prototype.h"
#include <QDebug>

Prototype::~Prototype()
{

}

Prototype *Prototype::Clone() const
{
    return 0;
}

Prototype::Prototype()
{

}

ConcretePrototype::ConcretePrototype()
{

}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &cp)
{
    qDebug() << "ConcretePrototype copy...";
}

ConcretePrototype::~ConcretePrototype()
{

}

Prototype *ConcretePrototype::Clone() const
{
    return new ConcretePrototype(*this);
}
