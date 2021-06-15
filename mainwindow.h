#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QFile>
#include <QDir>
#include <QDataStream>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSsl>
#include <QSslSocket>
#include <QNetworkReply>
#include <QtSvg/QSvgWidget>
#include "fields_values.h"
#include <QtCha>
#include "./ui_mainwindow.h"


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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_commandLinkButton_2();


private:

    QString authoirty_data_file;

    bool getRegValues();
    bool getRegEmail();
    bool getRegPass();
    bool getRegFIO();
    bool getSignInValues();
    bool getSignInEmail();
    bool getSignInPass();
    bool getRecoverEmail();
};
#endif // MAINWINDOW_H
