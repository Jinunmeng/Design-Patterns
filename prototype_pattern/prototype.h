#ifndef PROTOTYPE_H
#define PROTOTYPE_H


class Prototype
{
public:
    virtual ~Prototype();
    virtual Prototype *Clone() const = 0;
protected:
    Prototype();
};


class ConcretePrototype : public Prototype
{
public:
    ConcretePrototype();
    ConcretePrototype(const ConcretePrototype &cp);
    ~ConcretePrototype();

    Prototype *Clone() const;
protected:
private:

};

#endif // PROTOTYPE_H
