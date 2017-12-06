#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
public:
    virtual ~Product() = 0;
protected:
    Product();
};


class ConcreteProductA : public Product
{
public:
    ~ConcreteProductA();
    ConcreteProductA();
};

class ConcreteProductB : public Product
{
public:
    ~ConcreteProductB();
    ConcreteProductB();
};

#endif // PRODUCT_H
