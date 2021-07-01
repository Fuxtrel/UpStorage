#include "mainwindow.h"
#include "fields_values.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("../pictures/logo/logo.svg"));
    MainWindow w;
    w.setWindowTitle("UpStorage");
    w.resize(1280, 780);
    w.setMaximumHeight(780);
    w.show();
    return a.exec();
}
