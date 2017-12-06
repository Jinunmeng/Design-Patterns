#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
public:
    virtual ~Product() = 0;
protected:
    Product();
private:
};


class ConcreteProduct : public Product
{
public:
    ~ConcreteProduct();
    ConcreteProduct();
protected:

private:

};

class ConcreteProductB : public Product
{
public:
    ~ConcreteProductB();
    ConcreteProductB();
};

#endif // PRODUCT_H
