#include "abstraction.h"
#include "abstractimplement.h"
#include <iostream>
using namespace std;
Abstraction::~Abstraction()
{

}

Abstraction::Abstraction()
{

}

RefineAbstractionA::RefineAbstractionA(AbstractImplement *imp)
{
    this->_imp = imp;
}

void RefineAbstractionA::Operation()
{
    cout << "RefineAbstractionA::Operation" << endl;
    this->_imp->Operation();
}

RefineAbstractionA::~RefineAbstractionA()
{
    delete this->_imp;
    this->_imp = NULL;
}

RefineAbstractionB::RefineAbstractionB(AbstractImplement *imp)
{
    this->_imp = imp;
}

void RefineAbstractionB::Operation()
{
    cout << "RefinedAbstractionB::Operation" << endl;
    this->_imp->Operation();
}

RefineAbstractionB::~RefineAbstractionB()
{
    delete this->_imp;
    this->_imp = NULL;
}
