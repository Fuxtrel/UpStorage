/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QCheckBox *checkBox;
    QWidget *page_4;
    QWidget *widget_3;
    QWidget *widget_4;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QPushButton *pushButton_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QWidget *widget_7;
    QCheckBox *checkBox_2;
    QCommandLinkButton *commandLinkButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 832);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1280, 780));
        MainWindow->setMaximumSize(QSize(1280, 832));
        MainWindow->setBaseSize(QSize(1280, 780));
        QFont font;
        font.setFamily(QString::fromUtf8("MS UI Gothic"));
        font.setPointSize(14);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(1280, 780));
        centralwidget->setMaximumSize(QSize(1280, 780));
        centralwidget->setAutoFillBackground(true);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0)"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(1280, 780));
        stackedWidget->setMaximumSize(QSize(1280, 780));
        stackedWidget->setAutoFillBackground(true);
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        widget = new QWidget(page_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1280, 780));
        widget->setMinimumSize(QSize(1280, 780));
        widget->setMaximumSize(QSize(1280, 780));
        widget->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"\n"
""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 560, 780));
        widget_2->setMinimumSize(QSize(560, 780));
        widget_2->setMaximumSize(QSize(560, 780));
        widget_2->setStyleSheet(QString::fromUtf8("background: #64AEEA;\n"
"border: 1px solid rgba(248, 248, 248, 0.6);\n"
"\n"
""));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(666, 220, 351, 341));
        label_4->setStyleSheet(QString::fromUtf8("border-color: rgb(100, 174, 234);\n"
"border-radius:15px;"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 610, 301, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Loma"));
        font1.setPointSize(13);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(100, 174, 234) ;\n"
"border: 3px solid #F7F9FB; padding: 5px;\n"
"border-radius: 15px;\n"
""));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(753, 650, 334, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(13);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background: #F7F9FB;\n"
"border: 3px solid rgb(114, 159, 207); padding: 5px;\n"
"border-radius: 15px;\n"
""));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(640, 100, 561, 391));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setMinimumSize(QSize(360, 44));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Noto Sans CJK HK"));
        font3.setPointSize(21);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 20));
        label_8->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_8);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(480, 60));
        lineEdit->setMaximumSize(QSize(60, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(14);
        lineEdit->setFont(font4);
        lineEdit->setStyleSheet(QString::fromUtf8("background: rgb(238, 238, 236);\n"
"border: 3px;\n"
"border-color: rgb(114, 159, 207) ;\n"
"border-radius: 15px;"));

        verticalLayout_2->addWidget(lineEdit);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(0, 20));
        label_9->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_9);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(480, 60));
        lineEdit_2->setMaximumSize(QSize(480, 60));
        lineEdit_2->setFont(font4);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background: rgb(238, 238, 236);\n"
"border: 3px;\n"
"border-color: rgb(114, 159, 207) ;\n"
"border-radius: 15px;"));

        verticalLayout_2->addWidget(lineEdit_2);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(0, 20));
        label_10->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(label_10);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(480, 60));
        lineEdit_3->setMaximumSize(QSize(480, 60));
        lineEdit_3->setFont(font4);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background: rgb(238, 238, 236);\n"
"border: 3px;\n"
"border-color: rgb(114, 159, 207) ;\n"
"border-radius: 15px;"));

        verticalLayout_2->addWidget(lineEdit_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(690, 500, 491, 81));
        label_2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_2->setWordWrap(true);
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(650, 500, 21, 21));
        checkBox->setMinimumSize(QSize(0, 0));
        checkBox->setMaximumSize(QSize(600, 90));
        QFont font5;
        font5.setFamily(QString::fromUtf8("aakar"));
        font5.setPointSize(12);
        checkBox->setFont(font5);
        checkBox->setStyleSheet(QString::fromUtf8("subcontrol-position: left top;"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        widget_3 = new QWidget(page_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 0, 1280, 780));
        widget_3->setMinimumSize(QSize(1280, 780));
        widget_3->setMaximumSize(QSize(1280, 780));
        widget_3->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"\n"
""));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(720, 0, 560, 780));
        widget_4->setMinimumSize(QSize(0, 780));
        widget_4->setMaximumSize(QSize(16777215, 780));
        widget_4->setStyleSheet(QString::fromUtf8("background: #64AEEA;\n"
"border: 1px solid rgba(248, 248, 248, 0.6);\n"
"\n"
""));
        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(666, 220, 351, 341));
        label_5->setStyleSheet(QString::fromUtf8("border-color: rgb(100, 174, 234);\n"
"border-radius:15px;"));
        pushButton_3 = new QPushButton(widget_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(128, 650, 334, 70));
        pushButton_3->setMinimumSize(QSize(334, 70));
        pushButton_3->setMaximumSize(QSize(334, 60));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background:white ;\n"
"border: 3px solid #F7F9FB; padding: 5px;\n"
"border-radius: 15px;\n"
""));
        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(129, 70, 334, 88));
        QFont font6;
        font6.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font6.setPointSize(18);
        label_7->setFont(font6);
        label_7->setTabletTracking(false);
        label_7->setAcceptDrops(false);
        label_7->setStyleSheet(QString::fromUtf8("color: white;\n"
"border-color:rgb(100, 174, 234);"));
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(true);
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(193, 650, 334, 60));
        pushButton_4->setMinimumSize(QSize(334, 60));
        pushButton_4->setMaximumSize(QSize(334, 60));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("background: #F7F9FB;\n"
"border: 3px solid rgb(114, 159, 207); padding: 5px;\n"
"border-radius: 15px;"));
        verticalLayoutWidget_2 = new QWidget(widget_3);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(120, 150, 482, 406));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(361, 44));
        label_3->setMaximumSize(QSize(361, 44));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Noto Sans CJK HK"));
        font7.setPointSize(19);
        label_3->setFont(font7);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 107, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(0, 20));
        label_11->setMaximumSize(QSize(16777215, 20));

        verticalLayout_4->addWidget(label_11);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(480, 60));
        lineEdit_5->setMaximumSize(QSize(480, 60));
        lineEdit_5->setFont(font4);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background: rgb(238, 238, 236);\n"
"border: 3px;\n"
"border-color: rgb(114, 159, 207) ;\n"
"border-radius: 15px;"));

        verticalLayout_4->addWidget(lineEdit_5);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(0, 20));
        label_12->setMaximumSize(QSize(16777215, 20));

        verticalLayout_4->addWidget(label_12);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(480, 60));
        lineEdit_6->setMaximumSize(QSize(480, 60));
        lineEdit_6->setFont(font4);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background: rgb(238, 238, 236);\n"
"border: 3px;\n"
"border-color: rgb(114, 159, 207) ;\n"
"border-radius: 15px;"));

        verticalLayout_4->addWidget(lineEdit_6);

        widget_7 = new QWidget(verticalLayoutWidget_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(0, 40));
        widget_7->setMaximumSize(QSize(16777215, 40));
        checkBox_2 = new QCheckBox(widget_7);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(0, 10, 171, 20));
        checkBox_2->setMinimumSize(QSize(0, 20));
        checkBox_2->setMaximumSize(QSize(1000, 20));
        commandLinkButton_2 = new QCommandLinkButton(widget_7);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(310, 0, 165, 30));
        commandLinkButton_2->setMinimumSize(QSize(165, 30));
        commandLinkButton_2->setMaximumSize(QSize(165, 30));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setWeight(50);
        font8.setStrikeOut(false);
        font8.setKerning(false);
        commandLinkButton_2->setFont(font8);
        commandLinkButton_2->setLayoutDirection(Qt::LeftToRight);
        commandLinkButton_2->setIconSize(QSize(0, 0));
        commandLinkButton_2->setCheckable(false);

        verticalLayout_4->addWidget(widget_7);

        stackedWidget->addWidget(page_4);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\272 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label_8->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        label_9->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_10->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\257 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\321\216 \321\203\321\201\320\273\320\276\320\262\320\270\321\217 \320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\276\320\263\320\276 \321\201\320\276\320\263\320\273\320\260\321\210\320\265\320\275\320\270\321\217 \320\270 \320\264\320\260\321\216 \321\201\320\262\320\276\320\265 \321\201\320\276\320\263\320\273\320\260\321\201\320\270\320\265 \320\275\320\260 \320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\321\203 \320\274\320\276\320\265\320\271 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\321\214\320\275\320\276\320\271 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270 \320\275\320\260 \321\203\321\201\320\273\320\276\320\262\320\270\321\217\321\205 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\275\321\213\321\205 \320\237\320\276\320\273\320\270\321\202\320\270\320\272\320\276"
                        "\320\271 \320\272\320\276\320\275\321\204\320\270\320\264\320\265\320\275\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
        checkBox->setText(QString());
        label_5->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\265\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 UpStorage", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264 \320\262 \321\203\321\207\321\221\321\202\320\275\321\203\321\216 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        label_11->setText(QString());
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_12->setText(QString());
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\274\320\275\320\270\321\202\321\214 \320\274\320\265\320\275\321\217", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\261\321\213\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
