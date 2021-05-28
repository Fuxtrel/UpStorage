#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    authoirty_data_file = QDir::currentPath() + "/authoirty_data_file.txt";
    qDebug() << authoirty_data_file;
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_pushButton_2_clicked(){
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_clicked(){
    getRegValues();
}

void MainWindow::on_pushButton_4_clicked(){
    getSignInValues();
}

bool MainWindow::getRegValues(){
    bool checkFields[3] = {getRegFIO(), getRegEmail(), getRegPass()};
    if(checkFields[0] && checkFields[1] && checkFields[2]){
        QFile file(authoirty_data_file);
        if(file.isOpen()){
            qDebug() << "File is open";
            file.close();
            qDebug() << "File is closed";
        }
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        if(file.isOpen()){
            qDebug() << "File is open to write FIO email password";
        }
        QDataStream output(&file);
        output << fields.regfio << fields.regemail << fields.regpass;
        file.close();
        qDebug() << "Writing in file is ended";
        return true;
    }
    return false;
}

bool MainWindow::getRegEmail(){
    if(ui->lineEdit_2->text().isEmpty()){
        ui->label_9->setText("Неподходящее email");
        ui->label_9->setStyleSheet("color:#ff0000;");
        return false;
    }else if((!fields.checkEmail(ui->lineEdit_2->text()))) {
        ui->label_9->setText("Неподходящее email");
        ui->label_9->setStyleSheet("color:#ff0000;");
        return false;
    } else{
        ui->label_9->setText("Готово");
        ui->label_9->setStyleSheet("color:#4eeb00;");
        fields.regemail = ui->lineEdit_2->text();
        qDebug() << fields.regemail;
    }
    return true;
}

bool MainWindow::getRegPass(){
    if(ui->lineEdit_3->text().isEmpty()){
        ui->label_10->setText("Неподходящее пароль");
        ui->label_10->setStyleSheet("color:#ff0000;");
        return false;
    }else if(ui->lineEdit_3->text().length() < 9){
        ui->label_10->setText("Пароль слишком короткий");
        ui->label_10->setStyleSheet("color:#ff0000;");
        return false;
    }else{
        ui->label_10->setText("Готово");
        ui->label_10->setStyleSheet("color:#4eeb00;");
        fields.regpass = ui->lineEdit_3->text();
        qDebug() << fields.regpass;
    }
    return true;
}

bool MainWindow::getRegFIO(){
    if(ui->lineEdit->text().isEmpty()){
        ui->label_8->setText("Неподходящее ФИО");
        ui->label_8->setStyleSheet("color:#ff0000;");
        return false;
    }else{
        ui->label_8->setText("Готово");
        ui->label_8->setStyleSheet("color:#4eeb00;");
        fields.regfio = ui->lineEdit_3->text();
        qDebug() << fields.regfio;
    }
    return true;
}

bool MainWindow::getSignInValues(){
    bool checkFields[2] = {getSignInEmail(), getSignInPass()};
    if(!checkFields[0] && !checkFields[1]){
        return false;
    }
    return true;
}

bool MainWindow::getSignInEmail(){
    if(ui->lineEdit_5->text().isEmpty()){
        ui->label_11->setText("Неподходящее email");
        ui->label_11->setStyleSheet("color:#ff0000;");
        return false;
    }else if((!fields.checkEmail(ui->lineEdit_2->text()))) {
        ui->label_11->setText("Неподходящее email");
        ui->label_11->setStyleSheet("color:#ff0000;");
        return false;
    } else{
        ui->label_11->setText("Готово");
        ui->label_11->setStyleSheet("color:#4eeb00;");
        fields.regemail = ui->lineEdit_5->text();
        qDebug() << fields.regemail;
    }
    return true;
}

bool MainWindow::getSignInPass(){
    if(ui->lineEdit_6->text().isEmpty()){
        ui->label_12->setText("Неподходящее пароль");
        ui->label_12->setStyleSheet("color:#ff0000;");
        return false;
    }else if(ui->lineEdit_6->text().length() < 9){
        ui->label_12->setText("Пароль слишком короткий");
        ui->label_12->setStyleSheet("color:#ff0000;");
        return false;
    }else{
        ui->label_12->setText("Готово");
        ui->label_12->setStyleSheet("color:#4eeb00;");
        fields.regpass = ui->lineEdit_6->text();
        qDebug() << fields.regpass;
    }
    return true;
}





