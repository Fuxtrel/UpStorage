#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("/home/alex/Pictures/1.png"));
    MainWindow w;
    w.show();
    return a.exec();
}
