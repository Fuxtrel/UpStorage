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

    //фон из облачков на странице регистрации
    auto reg_clouds = new QSvgWidget(ui->widget_2);
    QString path_clouds =  + "../clouds.svg";
    reg_clouds->setGeometry(0,0,560, 780);
    reg_clouds->setStyleSheet(
                     "border-color:#64AEEA;"
                              "background-color:rgba(0, 0, 0, 0);"
                              "border-radius: 15px;"
                              );
    reg_clouds->load(path_clouds);

    //фон из облачков на странице входа
    auto in_clouds = new QSvgWidget(ui->widget_4);
    in_clouds->setGeometry(0,0,560, 780);
    in_clouds->setStyleSheet(
                    "border-color:#64AEEA;"
                             "background-color:rgba(0, 0, 0, 0);"
                             "border-radius: 15px;"
                             );
    in_clouds->load(path_clouds);

    //чел ты на странице регистрации
    auto svgw = new QSvgWidget(ui->widget_2);
    QString path =  + "../chelty.svg";
    svgw->setGeometry(30,110,363, 400);
    svgw->setStyleSheet("border-color:#64AEEA;"
                        "background-color:rgba(0, 0, 0, 0);"
                        "border-color:rgba(100, 174, 234, 0);");
    svgw->load(path);

    //логотип на сранице входит
    auto svgw_1 = new QSvgWidget(ui->widget_3);
    QString path_2 =  + "../logo.svg";
    svgw_1->setGeometry(25,25,185, 46);
    svgw_1->setStyleSheet("border-color:#64AEEA");
    svgw_1->load(path_2);

    //кнопка на странице регистрации свап
    ui->pushButton_2 = new QPushButton(reg_clouds);
    ui->pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    ui->pushButton_2->setGeometry(QRect(100, 650, 334, 60));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Loma"));
    font1.setPointSize(13);
    ui->pushButton_2->setFont(font1);
    ui->pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(100, 174, 234) ;\n"
                                                  "border: 3px solid #F7F9FB; padding: 5px;\n"
                                                  "border-radius: 15px;\n"
                                                  ""));
    ui->pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));

    //кнопка на странице входа свап
    ui->pushButton_3 = new QPushButton(in_clouds);
    ui->pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    ui->pushButton_3->setGeometry(QRect(128, 650, 334, 60));
    ui->pushButton_3->setMinimumSize(QSize(334, 70));
    ui->pushButton_3->setMaximumSize(QSize(334, 60));
    ui->pushButton_3->setFont(font1);
    ui->pushButton_3->setStyleSheet(QString::fromUtf8("background:white ;\n"
                                                  "border: 3px solid #F7F9FB; padding: 5px;\n"
                                                  "border-radius: 15px;\n"
                                                  ""));
    ui->pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
   //надпись на странице входа
    ui->label_7 = new QLabel(in_clouds);
    ui->label_7->setObjectName(QString::fromUtf8("label_7"));
    ui->label_7->setGeometry(QRect(129, 70, 334, 88));
    QFont font6;
    font6.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
    font6.setPointSize(18);
    ui->label_7->setFont(font6);
    ui->label_7->setTabletTracking(false);
    ui->label_7->setAcceptDrops(false);
    ui->label_7->setStyleSheet(QString::fromUtf8("color: white;\n"
                                             "border-color:rgba(100, 174, 234, 0);"
                                             "background-color: rgba(0, 0, 0, 0 ;)"));
    ui->label_7->setAlignment(Qt::AlignCenter);
    ui->label_7->setWordWrap(true);
    ui->label_7->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 UpStorage", nullptr));
    connect(ui->pushButton_2, SIGNAL (clicked()), this, SLOT (on_pushButton_2_clicked()));
    connect(ui->pushButton_3, SIGNAL (clicked()), this, SLOT (on_pushButton_3_clicked()));
    connect(ui->commandLinkButton_2, SIGNAL (clicked()), this, SLOT (on_commandLinkButton_2()));
    connect(ui->pushButton_5, SIGNAL (clicked()), this, SLOT (on_commandLinkButton_5()));
    connect(ui->pushButton_6, SIGNAL (clicked()), this, SLOT (on_commandLinkButton_6()));
    connect(ui->pushButton_8, SIGNAL (clicked()), this, SLOT (on_commandLinkButton_8()));

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

void MainWindow::on_commandLinkButton_2(){
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_5_clicked(){
    if(getRecoverEmail()){
        ui->stackedWidget->setCurrentIndex(3);
    }
}

void MainWindow::on_pushButton_6_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_8_clicked(){
    ui->stackedWidget->setCurrentIndex(0);
}



void MainWindow::on_pushButton_clicked(){
    if(getRegValues()){
        QNetworkAccessManager *mgr = new QNetworkAccessManager(this);
        const QUrl url(QStringLiteral("https://upstorage.net/api/auth/sign-up"));
        QNetworkRequest request(url);
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        QJsonObject obj;
        obj["email"] = fields.regemail;
        obj["passsword"] = fields.regpass;
        QJsonDocument doc(obj);
        QByteArray data = doc.toJson();
        qDebug() << doc.toJson();
        QNetworkReply *reply = mgr->post(request, data);

        QObject::connect(reply, &QNetworkReply::finished, [=](){
            if(reply->error() == QNetworkReply::NoError){
                QString contents = QString::fromUtf8(reply->readAll());
                qDebug() << contents;
            }
            else{
                QString err = reply->errorString();
                qDebug() << err;
                QString contents = QString::fromUtf8(reply->readAll());
                qDebug() << contents;
            }
            reply->deleteLater();
        });
    }
}

void MainWindow::on_pushButton_4_clicked(){
    if(getSignInValues()){
        QNetworkAccessManager *mgr = new QNetworkAccessManager(this);
        const QUrl url(QStringLiteral("https://upstorage.net/api/auth/sign-in"));
        QNetworkRequest request(url);
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
        QJsonObject obj;
        obj["email"] = "a99som@rambler.ru";
        obj["passsword"] = "1234";
        obj["invitationToken"] = "";
        obj["tenantId"] = "";
        QJsonDocument doc(obj);
        QByteArray data = doc.toJson();
        QNetworkReply *reply = mgr->post(request, data);

        QObject::connect(reply, &QNetworkReply::finished, [=](){
            if(reply->error() == QNetworkReply::NoError){
                QString contents = QString::fromUtf8(reply->readAll());
                qDebug() << contents;
            }
            else{
                QString err = reply->errorString();
                qDebug() << err;
            }
            reply->deleteLater();
        });
        ui->stackedWidget->setCurrentIndex(4);
        if(ui->stackedWidget->currentIndex() == 4) {
            ui->centralwidget->setMaximumHeight(2160);
            ui->home_page->setMaximumWidth(3840);
            ui->home_page->setMaximumHeight(2160);
        }
    }
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
    }else if(ui->lineEdit_3->text().length() < 8){
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
    }else if((!fields.checkEmail(ui->lineEdit_5->text()))) {
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

bool MainWindow::getRecoverEmail() {
    if(ui->lineEdit_4->text().isEmpty()){
        ui->label_14->setText("Неподходящее email");
        ui->label_14->setStyleSheet("color:#ff0000;");
        return false;
    }else if((!fields.checkEmail(ui->lineEdit_4->text()))) {
        ui->label_14->setText("Неподходящее email");
        ui->label_14->setStyleSheet("color:#ff0000;");
        return false;
    } else{
        ui->label_14->setText("Готово");
        ui->label_14->setStyleSheet("color:#4eeb00;");
        qDebug() << fields.regemail;
    }
    return true;
}




