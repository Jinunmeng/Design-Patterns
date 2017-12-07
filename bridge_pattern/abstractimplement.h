#ifndef ABSTRACTIMPLEMENT_H
#define ABSTRACTIMPLEMENT_H

//抽象基类，定义了实现的接口

class AbstractImplement
{
public:
    virtual void Operation() = 0; //定义操作接口
    virtual ~AbstractImplement();
protected:
    AbstractImplement();
};

//继承自AbstractionImplement,是AbstractionImplement的不同实现之一
class ConcreteAbstractionImplementA : public AbstractImplement
{
public:
    ConcreteAbstractionImplementA();
    void Operation();
    ~ConcreteAbstractionImplementA();
protected:
};
//继承自AbstractionImplement,是AbstractionImplement的不同实现之一
class ConcreteAbstractionImplementB : public AbstractImplement
{
public:
    ConcreteAbstractionImplementB();
    void Operation();
    ~ConcreteAbstractionImplementB();
protected:
};

#endif // ABSTRACTIMPLEMENT_H
