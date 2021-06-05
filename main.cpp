#include "mainwindow.h"
#include "fields_values.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("D:/qt_proj/UpStorage/database-storage.png"));
    MainWindow w;
    w.show();
    return a.exec();
}
