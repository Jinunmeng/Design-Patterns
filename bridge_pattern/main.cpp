#include <QCoreApplication>
#include "abstractimplement.h"
#include "abstraction.h"
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
     *  将抽象部分与他的实现分离，使得它们可以独立地变化
     *  1、抽象Abstraction与实现AbstractionImplement分离
     *  2、抽象部分Abstraction可以变化，如new RefinedAbstractionA(imp)、new RefinedAbstractionB(imp2)
     *  3、实现部分AbstractionImplement也可以变化，如new ConcreteAbstractionImplementA()
     */
    AbstractImplement *imp = new ConcreteAbstractionImplementA(); //实现部分
    Abstraction *abs = new RefineAbstractionA(imp);  //抽象部分
    abs->Operation();

    cout << "----------------------------------" << endl;

    AbstractImplement *imp1 = new ConcreteAbstractionImplementB(); //实现部分
    Abstraction *abs1 = new RefineAbstractionB(imp1); //抽象部分
    abs1->Operation();

    cout << "----------------------------------" << endl;

    AbstractImplement *imp2 = new ConcreteAbstractionImplementA(); //实现部分
    Abstraction *abs2 = new RefineAbstractionB(imp2);  // 抽象部分
    abs2->Operation();

    cout << "----------------------------------" << endl;
    AbstractImplement *imp3 = new ConcreteAbstractionImplementB(); //实现部分
    Abstraction *abs3 = new RefineAbstractionA(imp3);
    abs3->Operation();


    return a.exec();
}















