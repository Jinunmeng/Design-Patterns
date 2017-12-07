#include "abstractimplement.h"
#include <iostream>
using namespace std;

AbstractImplement::~AbstractImplement()
{

}

AbstractImplement::AbstractImplement()
{

}

ConcreteAbstractionImplementA::ConcreteAbstractionImplementA()
{

}

void ConcreteAbstractionImplementA::Operation()
{
    cout << "ConcreteAbstractionImplementA Operation" << endl;
}

ConcreteAbstractionImplementA::~ConcreteAbstractionImplementA()
{

}

ConcreteAbstractionImplementB::ConcreteAbstractionImplementB()
{

}

void ConcreteAbstractionImplementB::Operation()
{
    cout << "ConcreteAbstractionImplementB Operation" << endl;
}

ConcreteAbstractionImplementB::~ConcreteAbstractionImplementB()
{

}
