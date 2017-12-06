#include "product.h"
#include <QDebug>

Product::Product()
{

}

Product::~Product()
{

}

void Product::setPartA(const string &s)
{
    this->m_partA = s;
}

void Product::setPartB(const string &s)
{
    this->m_partB = s;
}

void Product::setPartC(const string &s)
{
    this->m_partC = s;
}


Builder::Builder()
{

}

Builder::~Builder()
{

}


ConcreteBuilder1::ConcreteBuilder1()
{
    this->m_pProduct = new Product();
    cout << "Create empty product" << endl;
}

ConcreteBuilder1::~ConcreteBuilder1()
{
    delete this->m_pProduct;
    this->m_pProduct = NULL;
}

void ConcreteBuilder1::BuilderPartA()
{
    this->m_pProduct->setPartA("A");
    cout << "BuildPartA" << endl;
}

void ConcreteBuilder1::BuilderPartB()
{
    this->m_pProduct->setPartB("B");
    cout << "BuildPartB" << endl;
}

void ConcreteBuilder1::BuilderPartC()
{
    this->m_pProduct->setPartC("A");
    cout << "BuildPartC" << endl;
}

Product *ConcreteBuilder1::GetProduct()
{
    return this->m_pProduct;
}

ConcreteBuilder2::ConcreteBuilder2()
{
    this->m_pProduct = new Product();
    cout << "Create empty product" << endl;
}

ConcreteBuilder2::~ConcreteBuilder2()
{
   delete this->m_pProduct;
    this->m_pProduct = NULL;
}

void ConcreteBuilder2::BuilderPartA()
{
    this->m_pProduct->setPartB("A");
    cout << "BuildPartA" << endl;
}

void ConcreteBuilder2::BuilderPartB()
{
    this->m_pProduct->setPartC("B");
    cout << "BuildPartB" << endl;
}

void ConcreteBuilder2::BuilderPartC()
{
    this->m_pProduct->setPartA("C");
    cout << "BuildPartC" << endl;
}

Product *ConcreteBuilder2::GetProduct()
{
    return this->m_pProduct;
}

Director::Director(Builder *pBuilder)
{
    this->m_pBuilder = pBuilder;
}

Director::~Director()
{
    delete this->m_pBuilder;
    this->m_pBuilder = NULL;
}

void Director::Construct()
{
    this->m_pBuilder->BuilderPartA();
    this->m_pBuilder->BuilderPartB();
    this->m_pBuilder->BuilderPartC();
}


