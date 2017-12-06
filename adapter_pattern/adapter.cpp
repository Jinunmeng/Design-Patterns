#include "adapter.h"
#include <QDebug>


Target::Target()
{

}

Target::~Target()
{

}

void Target::Request()
{
    qDebug() << "Target::Request()";
}

Adaptee::Adaptee()
{

}

Adaptee::~Adaptee()
{

}

void Adaptee::SpecificRequest()
{
    qDebug() << "Adaptee::SpecificRequest()";
}

Adapter::Adapter()
{

}

Adapter::~Adapter()
{

}

void Adapter::Request()
{
    qDebug() << "Adapter::Request()";
    this->SpecificRequest();
}

Adapter1::Adapter1(Adaptee *adaptee)
{
    this->_adaptee = adaptee;
}

Adapter1::Adapter1() : _adaptee(new Adaptee)
{

}

Adapter1::~Adapter1()
{

}

void Adapter1::Request()
{
    qDebug() << "Adapter1::Request()";
    this->_adaptee->SpecificRequest();
}
