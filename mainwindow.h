#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QtSvgWidgets/QSvgWidget>
#include <QFile>
#include <QDir>
#include <QDataStream>
#include "fields_values.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;
    Fields_values fields;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:

    QString authoirty_data_file;

    bool getRegValues();
    bool getRegEmail();
    bool getRegPass();
    bool getRegFIO();
    bool getSignInValues();
    bool getSignInEmail();
    bool getSignInPass();
};
#endif // MAINWINDOW_H
