#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "customshadoweffect.h"


MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    authoirty_data_file = QDir::currentPath() + "/authoirty_data_file.txt";
    qDebug() << authoirty_data_file;

    //Добавление шрифта
    int id = QFontDatabase::addApplicationFont("../fonts/Lato/Lato-Regular.ttf");
    QString Lato = QFontDatabase::applicationFontFamilies(id).at(0);
    int id_n = QFontDatabase::addApplicationFont("../fonts/Nunito/Nunito-Regular.ttf");
    QString Nunito = QFontDatabase::applicationFontFamilies(id_n).at(0);
    //Добавление шрифта
    //
    QFont nunito_70(Nunito, 70, QFont::Normal, false);
    QFont lato(Lato, 14, QFont::Normal, false);
    QFont lato_21(Lato, 21, QFont::Normal, false);
    QFont lato_13(Lato, 13, QFont::Normal, false);
    QFont lato_19(Lato, 19, QFont::Normal, false);
    QFont lato_11(Lato, 11, QFont::Normal, false);
    QFont lato_16(Lato, 16, QFont::Normal, false);
    QFont lato_30(Lato, 30, QFont::Normal, false);
    QFont lato_14(Lato, 14, QFont::Normal, false);
    //

    //эффект тени
    CustomShadowEffect *bodyShadow = new CustomShadowEffect();
    bodyShadow->setBlurRadius(20.0);
    bodyShadow->setDistance(3.0);
    bodyShadow->setColor(QColor(0, 0, 0, 80));

    CustomShadowEffect *shadow[19];
    for (int i = 0; i < 19; i++) {
        shadow[i] = new CustomShadowEffect();
        shadow[i]->setBlurRadius(20.0);
        shadow[i]->setDistance(3.0);
        shadow[i]->setColor(QColor(0, 0, 0, 20));
    }

    ui->pushButton_4->setGraphicsEffect(shadow[0]);
    ui->pushButton->setGraphicsEffect(shadow[1]);
    ui->lineEdit->setGraphicsEffect(shadow[2]);
    ui->lineEdit_2->setGraphicsEffect(shadow[3]);
    ui->lineEdit_3->setGraphicsEffect(shadow[4]);
    ui->checkBox->setGraphicsEffect(shadow[5]);
    ui->lineEdit_5->setGraphicsEffect(shadow[6]);
    ui->lineEdit_6->setGraphicsEffect(shadow[7]);
    ui->pushButton_12->setGraphicsEffect(shadow[8]);
    ui->pushButton_13->setGraphicsEffect(shadow[9]);
    ui->pushButton_2->setGraphicsEffect(shadow[10]);
    ui->pushButton_3->setGraphicsEffect(shadow[11]);
    ui->lineEdit_8->setGraphicsEffect(shadow[12]);
    ui->pushButton_13->setGraphicsEffect(shadow[13]);
    ui->pushButton_14->setGraphicsEffect(shadow[14]);
    ui->pushButton_15->setGraphicsEffect(shadow[15]);
    ui->pushButton_16->setGraphicsEffect(shadow[16]);
    ui->pushButton_17->setGraphicsEffect(shadow[17]);
    ui->commandLinkButton_9->setGraphicsEffect(shadow[18]);
    ui->checkBox->setFocusPolicy(Qt::NoFocus);
    //эффект тени

    //фон из облачков на странице регистрации
    auto reg_clouds = new QSvgWidget(ui->widget_2);
    QString path_clouds = "../clouds.svg";
    reg_clouds->setGeometry(0, 0, 560, 780);
    reg_clouds->setStyleSheet(
            "border-color:#64AEEA;"
            "background-color:rgba(0, 0, 0, 0);"
            "border-radius: 15px;"
    );
    reg_clouds->load(path_clouds);
    //фон из облачков на странице регистрации

    //фото для аватарки
    auto avatar = new QSvgWidget(ui->widget_11);
    QString path_avatar = ":/picture/home_page/cmake-build-debug/pictures/home_page/ava.svg";
    avatar->setGeometry(328, 30, 100, 100);
    avatar->setStyleSheet(
            "border-color:rgba(100, 100, 100, 0);"
    );
    avatar->load(path_avatar);
    //фото для аватарки

    //фон из облачков на странице входа
    auto in_clouds = new QSvgWidget(ui->widget_4);
    in_clouds->setGeometry(0, 0, 560, 780);
    in_clouds->setStyleSheet(
            "border-color:#64AEEA;"
            "background-color:rgba(0, 0, 0, 0);"
            "border-radius: 15px;"
    );
    in_clouds->load(path_clouds);
    //фон из облачков на странице входа

    //лабел на странице входа
    QLabel *label_26 = new QLabel(in_clouds);
    label_26->setObjectName("label_26");
    label_26->setGeometry(132, 188, 296, 54);
    label_26->setFont(lato_14);
    label_26->setStyleSheet("color:white;"
                            "border:0px;");
    label_26->setWordWrap(true);
    label_26->setAlignment(Qt::AlignCenter);
    label_26->setText("Ещё нет аккаунта? Скорее присоединяйся к нам");
    //лабел на странице входа

    //лабел на странице регистрации
    QLabel *label_27 = new QLabel(reg_clouds);
    label_27->setObjectName("label_27");
    label_27->setGeometry(138, 125, 285, 44);
    label_27->setFont(lato_16);
    label_27->setStyleSheet("color:white;"
                            "border:0px;");
    label_27->setWordWrap(true);
    label_27->setAlignment(Qt::AlignCenter);
    label_27->setText("Уже есть аккаунт?");
    //лабел на странице регистрации

    //чел ты на странице регистрации
    auto man_on_cloud = new QSvgWidget(ui->widget_2);
    QString man_on_cloud_path = +"../pictures/reg_page/man_on_cloud.svg";
    man_on_cloud->setGeometry(17, 180, 533, 425);
    man_on_cloud->setStyleSheet("border-color:#64AEEA;"
                                "background-color:rgba(0, 0, 0, 0);"
                                "border-color:rgba(100, 174, 234, 0);");
    man_on_cloud->load(man_on_cloud_path);
    //чел ты на странице регистрации

    //чел ты на странице входа
    auto man_on_cloud_r = new QSvgWidget(ui->widget_4);
    QString man_on_cloud_r_path = +"../pictures/reg_page/man_on_cloud_r.svg";
    man_on_cloud_r->setGeometry(12, 240, 540, 405);
    man_on_cloud_r->setStyleSheet("border-color:#64AEEA;"
                                  "background-color:rgba(0, 0, 0, 0);"
                                  "border-color:rgba(100, 174, 234, 0);");
    man_on_cloud_r->load(man_on_cloud_r_path);
    //чел ты на странице входа

    //логотип на сранице входа
    auto svgw_1 = new QSvgWidget(ui->widget_3);
    QString path_2 = +"../logo.svg";
    svgw_1->setGeometry(25, 25, 185, 46);
    svgw_1->setStyleSheet("border-color:#64AEEA");
    svgw_1->load(path_2);
    //логотип на сранице входа

    //разделитель на сранице входа
    auto sep = new QSvgWidget(ui->widget_3);
    QString sep_path = +"../pictures/in_page/separator.svg";
    sep->setGeometry(120, 461, 480, 27);
    sep->setStyleSheet("border-color:#64AEEA");
    sep->load(sep_path);
    //разделитель на сранице входа

    //логотип на сранице регистрации
    auto reg_logo = new QSvgWidget(reg_clouds);
    QString reg_logo_path = +"../pictures/reg_page/logo.svg";
    reg_logo->setGeometry(25, 25, 185, 45);
    reg_logo->setStyleSheet("border-color:#64AEEA");
    reg_logo->setAutoFillBackground(true);
    reg_logo->setStyleSheet("border-color:rgba(0,0,0,0);");
    reg_logo->load(reg_logo_path);
    //логотип на сранице регистрации

    //кнопка на странице регистрации свап
    ui->pushButton_2->stackUnder(man_on_cloud);
    //кнопка на странице регистрации свап

    //кнопка на странице входа свап
    in_clouds->stackUnder(ui->pushButton_3);
    //кнопка на странице входа свап

    //надпись на странице входа
    QLabel *label_25 = new QLabel(in_clouds);
    label_25->setObjectName("label_25");
    label_25->setGeometry(129, 70, 334, 88);
    label_25->setText("Добро пожаловать в UpStorage");
    label_25->setWordWrap(true);
    label_25->setFont(lato_19);
    label_25->setAlignment(Qt::AlignCenter);
    label_25->setStyleSheet("color:white;"
                            "border:0px;");
    //надпись на странице входа

    //кнопка скрыть/показать пароль на странице входа
    pushButton_18 = new QPushButton(ui->lineEdit_6);
    pushButton_18->setObjectName("pushbutton_18");
    pushButton_18->setGeometry(423, 14, 32, 32);
    pushButton_18->setStyleSheet("border:0px;");
    pushButton_18->setCheckable(true);
    QIcon icon15;
    isPressed = false;
    icon15.addFile(QString::fromUtf8("../pictures/in_page/eye_.svg"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_18->setIcon(icon15);
    pushButton_18->setIconSize(QSize(32, 32));

    ui->lineEdit_6->stackUnder(pushButton_18);
    //кнопка скрыть/показать пароль на странице входа

    //кнопка скрыть/показать пароль на странице входа
    pushButton_19 = new QPushButton(ui->lineEdit_3);
    pushButton_19->setObjectName("pushbutton_19");
    pushButton_19->setGeometry(423, 14, 32, 32);
    pushButton_19->setStyleSheet("border:0px;");
    pushButton_19->setCheckable(true);
    QIcon icon16;
    isPressed_1 = false;
    icon16.addFile(QString::fromUtf8("../pictures/in_page/eye_.svg"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_19->setIcon(icon15);
    pushButton_19->setIconSize(QSize(32, 32));

    ui->lineEdit_6->stackUnder(pushButton_18);
    //кнопка скрыть/показать пароль на странице входа

    //лабел ворнинга о неверных данных
    label_12 = new QLabel(ui->widget_3);
    label_12->setObjectName("label_12");
    label_12->setGeometry(155,610,500,25);
    label_12->setFont(lato_11);
    //лабел ворнинга о неверных данных

    //значёк ворнинга на сранице входа
    warning = new QSvgWidget(ui->widget_3);
    QString warning_path = + "../pictures/in_page/worning.svg";
    warning->setGeometry(120, 610, 25, 25);
    warning->setStyleSheet("border-color:#64AEEA");
    warning->setAutoFillBackground(true);
    warning->setStyleSheet("border-color:rgba(0,0,0,0);");
    warning->load(warning_path);
    warning->hide();
    //значёк ворнинга на сранице входа

    //активация гиперссылок
    ui->label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->label_2->setOpenExternalLinks(false);
    //активация гиперссылок

    
    connect(ui->pushButton_2, SIGNAL (clicked()), this, SLOT (on_pushButton_2_clicked()));
    connect(ui->pushButton_3, SIGNAL (clicked()), this, SLOT (on_pushButton_3_clicked()));
    connect(ui->commandLinkButton_2, SIGNAL (clicked()), this, SLOT (on_commandLinkButton_2()));
    connect(ui->pushButton_5, SIGNAL (clicked()), this, SLOT (on_commandLinkButton_5()));
    connect(ui->pushButton_6, SIGNAL (clicked()), this, SLOT (on_commandLinkButton_6()));
    connect(ui->pushButton_8, SIGNAL (clicked()), this, SLOT (on_commandLinkButton_8()));
    connect(ui->pushButton_17, SIGNAL (clicked()), this, SLOT (on_pushButton_17_clicked()));
    connect(pushButton_18, SIGNAL (clicked()), this, SLOT (on_pushButton_18_clicked()));
    connect(pushButton_19, SIGNAL (clicked()), this, SLOT (on_pushButton_19_clicked()));
    connect(ui->label_2, SIGNAL (linkActivated(const QString &link)), this, SLOT (on_label_2_linkActivated(QString&link)));

    setMaximumHeight(780);
    setMaximumWidth(1280);
    ui->centralwidget->setGeometry(0, 0, 1280, 780);
    ui->commandLinkButton->setFont(lato);
    ui->commandLinkButton_3->setFont(lato);
    ui->commandLinkButton_4->setFont(lato);
    ui->commandLinkButton_5->setFont(lato);
    ui->commandLinkButton_6->setFont(lato);
    ui->commandLinkButton_7->setFont(lato);
    ui->commandLinkButton_8->setFont(lato);
    ui->commandLinkButton_10->setFont(lato);
    ui->pushButton_9->setFont(lato);
    ui->commandLinkButton_12->setFont(lato);
    ui->commandLinkButton_13->setFont(lato);
    ui->label->setFont(lato_21);
    ui->label_2->setFont(lato_11);
    ui->pushButton_2->setFont(lato_14);
    ui->lineEdit->setFont(lato_14);
    ui->lineEdit_2->setFont(lato_14);
    ui->lineEdit_3->setFont(lato_14);


    ui->label_18->setFont(lato);
    ui->lineEdit_8->setFont(lato);
    ui->commandLinkButton->setIconSize(QSize(26, 25));
    ui->commandLinkButton_3->setIconSize(QSize(26, 25));
    ui->commandLinkButton_4->setIconSize(QSize(26, 25));
    ui->commandLinkButton_5->setIconSize(QSize(26, 25));
    ui->commandLinkButton_6->setIconSize(QSize(26, 25));
    ui->commandLinkButton_7->setIconSize(QSize(26, 25));
    ui->commandLinkButton_8->setIconSize(QSize(26, 25));
    ui->commandLinkButton_10->setIconSize(QSize(26, 25));
    ui->commandLinkButton_12->setIconSize(QSize(26, 25));
    ui->commandLinkButton_13->setIconSize(QSize(26, 25));
    ui->label_19->setFont(lato_21);
    ui->label_20->setFont(lato_13);

    ui->label_21->setFont(lato_19);
    ui->label_22->setFont(lato_11);
    ui->label_23->setFont(lato_11);
    ui->label_24->setFont(nunito_70);
    ui->label_26->setFont(lato_14);
    ui->label_27->setFont(lato_14);
    ui->label_28->setFont(nunito_70);
    ui->label_29->setFont(lato_30);
    ui->label_30->setFont(lato_30);

    ui->pushButton_10->setFont(lato_16);
    ui->pushButton_11->setFont(lato_16);



}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_2_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_5_clicked() {
    if (getRecoverEmail()) {
        ui->stackedWidget->setCurrentIndex(3);
    }
}

void MainWindow::on_pushButton_6_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_8_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_17_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
    if(ui->checkBox_2->checkState() == Qt::Unchecked) {
        ui->lineEdit_5->clear();
        ui->lineEdit_6->clear();
    }
    setMaximumWidth(1280);
    setMaximumHeight(780);
    setMinimumWidth(1280);
    setMinimumHeight(780);
}

void MainWindow::on_pushButton_18_clicked() {
    QIcon icon15;
    if(!isPressed) {
        icon15.addFile(QString::fromUtf8("../pictures/in_page/eye.svg"), QSize(), QIcon::Normal, QIcon::Off);
        isPressed = true;
        ui->lineEdit_6->setEchoMode(QLineEdit::Normal);
    }else{
        icon15.addFile(QString::fromUtf8("../pictures/in_page/eye_.svg"), QSize(), QIcon::Normal, QIcon::Off);
        isPressed = false;
        ui->lineEdit_6->setEchoMode(QLineEdit::Password);
    }
    pushButton_18->setIcon(icon15);
}

void MainWindow::on_pushButton_19_clicked() {
    QIcon icon16;
    if(!isPressed_1) {
        icon16.addFile(QString::fromUtf8("../pictures/in_page/eye.svg"), QSize(), QIcon::Normal, QIcon::Off);
        isPressed_1 = true;
        ui->lineEdit_3->setEchoMode(QLineEdit::Normal);
    }else{
        icon16.addFile(QString::fromUtf8("../pictures/in_page/eye_.svg"), QSize(), QIcon::Normal, QIcon::Off);
        isPressed_1 = false;
        ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    }
    pushButton_19->setIcon(icon16);
}


void MainWindow::on_commandLinkButton_2() {
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_clicked() {
    if (getRegValues()) {
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

        QObject::connect(reply, &QNetworkReply::finished, [=]() {
            if (reply->error() == QNetworkReply::NoError) {
                QString contents = QString::fromUtf8(reply->readAll());
                qDebug() << contents;
            } else {
                QString err = reply->errorString();
                qDebug() << err;
                QString contents = QString::fromUtf8(reply->readAll());
                qDebug() << contents;
            }
            reply->deleteLater();
        });
    }
}

void MainWindow::on_pushButton_4_clicked() {
    if ((getSignInValues()) && (ui->checkBox->checkState() == Qt::Checked)) {
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

        QObject::connect(reply, &QNetworkReply::finished, [=]() {
            if (reply->error() == QNetworkReply::NoError) {
                QString contents = QString::fromUtf8(reply->readAll());
                qDebug() << contents;
            } else {
                QString err = reply->errorString();
                qDebug() << err;
            }
            reply->deleteLater();
        });
        ui->stackedWidget->setCurrentIndex(4);
        if (ui->stackedWidget->currentIndex() == 4) {
            setMaximumWidth(1680);
            setMaximumHeight(947);
            setMinimumWidth(1680);
            setMinimumHeight(967);

        }
    }
}

bool MainWindow::getRegValues() {
    bool checkFields[3] = {getRegFIO(), getRegEmail(), getRegPass()};
    if (checkFields[0] && checkFields[1] && checkFields[2]) {
        QFile file(authoirty_data_file);
        if (file.isOpen()) {
            qDebug() << "File is open";
            file.close();
            qDebug() << "File is closed";
        }
        file.open(QIODevice::WriteOnly | QIODevice::Text);
        if (file.isOpen()) {
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

bool MainWindow::getRegEmail() {
    if (ui->lineEdit_2->text().isEmpty()) {
        /*ui->label_9->setText("Неподходящее email");
        ui->label_9->setStyleSheet("color:#ff0000;");*/
        return false;
    } else if ((!fields.checkEmail(ui->lineEdit_2->text()))) {
        /*ui->label_9->setText("Неподходящее email");
        ui->label_9->setStyleSheet("color:#ff0000;");*/
        return false;
    } else {
        /*ui->label_9->setText("Готово");
        ui->label_9->setStyleSheet("color:#4eeb00;");*/
        fields.regemail = ui->lineEdit_2->text();
        qDebug() << fields.regemail;
    }
    return true;
}

bool MainWindow::getRegPass() {
    if (ui->lineEdit_3->text().isEmpty()) {
        /*ui->label_10->setText("Неподходящее пароль");
        ui->label_10->setStyleSheet("color:#ff0000;");*/
        return false;
    } else if (ui->lineEdit_3->text().length() < 8) {
        /*ui->label_10->setText("Пароль слишком короткий");
        ui->label_10->setStyleSheet("color:#ff0000;");*/
        return false;
    } else {
        /*ui->label_10->setText("Готово");
        ui->label_10->setStyleSheet("color:#4eeb00;");*/
        fields.regpass = ui->lineEdit_3->text();
        qDebug() << fields.regpass;
    }
    return true;
}

bool MainWindow::getRegFIO() {
    if (ui->lineEdit->text().isEmpty()) {
        /*ui->label_8->setText("Неподходящее ФИО");
        ui->label_8->setStyleSheet("color:#ff0000;");*/
        return false;
    } else {
        /*ui->label_8->setText("Готово");
        ui->label_8->setStyleSheet("color:#4eeb00;");*/
        fields.regfio = ui->lineEdit_3->text();
        qDebug() << fields.regfio;
    }
    return true;
}

bool MainWindow::getSignInValues() {
    bool checkFields[2] = {getSignInEmail(), getSignInPass()};
    if (!checkFields[0] && !checkFields[1]) {
        label_12->setText("Неверный адрес электронной почты или пароль");
        warning->show();
        return false;
    }
    label_12->clear();
    warning->hide();
    return true;
}

bool MainWindow::getSignInEmail() {
    if (ui->lineEdit_5->text().isEmpty()) {
        /*ui->label_11->setText("Неподходящее email");
        ui->label_11->setStyleSheet("color:#ff0000;");*/
        return false;
    } else if ((!fields.checkEmail(ui->lineEdit_5->text()))) {
        /*ui->label_11->setText("Неподходящее email");
        ui->label_11->setStyleSheet("color:#ff0000;");*/
        return false;
    } else {
        /*ui->label_11->setText("Готово");
        ui->label_11->setStyleSheet("color:#4eeb00;");
        fields.regemail = ui->lineEdit_5->text();
        qDebug() << fields.regemail;*/
    }
    return true;
}

bool MainWindow::getSignInPass() {
    if ((ui->lineEdit_6->text().isEmpty()) && (ui->lineEdit_6->text().length() < 9)) {
        return false;
    } else {
        fields.regpass = ui->lineEdit_6->text();
        qDebug() << fields.regpass;
    }
    return true;
}

bool MainWindow::getRecoverEmail() {
    if ((ui->lineEdit_4->text().isEmpty()) && (!fields.checkEmail(ui->lineEdit_4->text()))) {
        return false;
    } else {
        fields.regemail = ui->lineEdit_4->text();
        qDebug() << fields.regemail;
    }
    return true;
}

void MainWindow::on_label_2_linkActivated() {
    qDebug() << "link";
}




