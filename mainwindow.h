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
#include <QFontDatabase>
#include <QGraphicsDropShadowEffect>
#include "fields_values.h"
#include "./ui_mainwindow.h"
#include "graphics.h"


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
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QLabel *label_12;
    QSvgWidget *warning;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_commandLinkButton_2();

    void on_label_2_linkActivated();

private:

    QString authoirty_data_file;
    bool isPressed;
    bool isPressed_1;
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
