#include <QCoreApplication>
#include <iostream>

#include "lib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Hello,world" << std::endl;
    std::cout << "Version: " << version() << std::endl;
    system("pause");

    return a.exec();
}
