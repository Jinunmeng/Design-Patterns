#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "abstractimplement.h"

class AbstractImplement;

class Abstraction
{
public:
    virtual void Operation() = 0;//定义接口，表示该类说支持的操作
    virtual ~Abstraction();
protected:
    Abstraction();
};

class RefineAbstractionA : public Abstraction
{
public:
    RefineAbstractionA(AbstractImplement *imp);//构造函数
    virtual void Operation(); //实现接口
    virtual ~RefineAbstractionA();
protected:

private:
    AbstractImplement *_imp;
};
class RefineAbstractionB : public Abstraction
{
public:
    RefineAbstractionB(AbstractImplement *imp);//构造函数
    virtual void Operation(); //实现接口
    virtual ~RefineAbstractionB();
protected:

private:
    AbstractImplement *_imp;
};

#endif // ABSTRACTION_H
