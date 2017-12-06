#include <QCoreApplication>
#include "singleton.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Singleton *sgn = Singleton::Instance();

    return a.exec();
}
