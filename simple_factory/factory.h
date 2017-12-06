#ifndef FACTORY_H
#define FACTORY_H

#include <QString>
class Product;

class Factory
{
public:
    virtual ~Factory() = 0;

public:
    static Product *CreateProduct(QString s);

protected:
    Factory();
};

class ConcreteFactory : public Factory
{
public:
       ~ ConcreteFactory();
        ConcreteFactory();
};




#endif // FACTORY_H
