#ifndef PRODUCT_H
#define PRODUCT_H


class AbstractProductA
{
public:
    virtual ~AbstractProductA();
protected:
    AbstractProductA();
};

class AbstractProductB
{
public:
    virtual ~AbstractProductB();
protected:
    AbstractProductB();
};


class ProductA1 : public AbstractProductA
{
public:
    ProductA1();
protected:
private:
};

class ProductA2 : public AbstractProductA
{
public:
    ProductA2();
protected:
private:
};

class ProductB1 : public AbstractProductB
{
public:
    ProductB1();
protected:
private:

};
class ProductB2 : public AbstractProductB
{
public:
    ProductB2();
protected:
private:

};

#endif // PRODUCT_H
