#include "calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Russian");
    QApplication a(argc, argv);
    Calculator w;
    w.show();
    return a.exec();
}
