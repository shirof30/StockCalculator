/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *savetext;
    QPushButton *bukatext;
    QLabel *label;
    QPushButton *tambahstock;
    QLabel *label_2;
    QLabel *uangdisplay;
    QPushButton *kurangstock;
    QPushButton *kuranguang;
    QPushButton *tambahuang;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QFrame *line;
    QFrame *line_2;
    QLCDNumber *lcdgalon;
    QLCDNumber *lcd330;
    QLCDNumber *lcd600;
    QLCDNumber *lcdliter;
    QLabel *label_7;
    QPushButton *tambahstock_2;
    QLCDNumber *lcdpliter;
    QLabel *label_10;
    QLCDNumber *lcdp350;
    QPushButton *kurangstock_2;
    QPushButton *pushButton_2;
    QFrame *line_3;
    QLabel *label_11;
    QLabel *label_8;
    QLCDNumber *galonebony;
    QLabel *label_9;
    QLCDNumber *galonelok;
    QLabel *label_12;
    QLCDNumber *galonasri;
    QFrame *line_4;
    QLabel *label_13;
    QLabel *label_14;
    QLCDNumber *kecilebony;
    QLabel *label_15;
    QLCDNumber *kecilelok;
    QLabel *label_16;
    QLCDNumber *kecilasri;
    QLabel *label_17;
    QLCDNumber *sedengasri;
    QLCDNumber *sedengebony;
    QLabel *label_18;
    QLCDNumber *sedengelok;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLCDNumber *literelok;
    QLCDNumber *literebony;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLCDNumber *literasri;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *uangbank;
    QFrame *line_5;
    QLabel *label_27;
    QLabel *uangtotal;
    QLabel *label_28;
    QLabel *tanggalLast;
    QLabel *tanggaltoday;
    QLabel *label_31;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1071, 713);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        savetext = new QPushButton(centralwidget);
        savetext->setObjectName(QString::fromUtf8("savetext"));
        savetext->setGeometry(QRect(530, 610, 111, 51));
        bukatext = new QPushButton(centralwidget);
        bukatext->setObjectName(QString::fromUtf8("bukatext"));
        bukatext->setGeometry(QRect(530, 550, 111, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 141, 41));
        tambahstock = new QPushButton(centralwidget);
        tambahstock->setObjectName(QString::fromUtf8("tambahstock"));
        tambahstock->setGeometry(QRect(150, 550, 81, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 340, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        uangdisplay = new QLabel(centralwidget);
        uangdisplay->setObjectName(QString::fromUtf8("uangdisplay"));
        uangdisplay->setGeometry(QRect(440, 370, 131, 41));
        uangdisplay->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";"));
        kurangstock = new QPushButton(centralwidget);
        kurangstock->setObjectName(QString::fromUtf8("kurangstock"));
        kurangstock->setGeometry(QRect(150, 610, 81, 51));
        kuranguang = new QPushButton(centralwidget);
        kuranguang->setObjectName(QString::fromUtf8("kuranguang"));
        kuranguang->setGeometry(QRect(670, 460, 81, 41));
        tambahuang = new QPushButton(centralwidget);
        tambahuang->setObjectName(QString::fromUtf8("tambahuang"));
        tambahuang->setGeometry(QRect(670, 410, 81, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 40, 71, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 120, 91, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 160, 91, 41));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 240, 81, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 550, 81, 111));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(500, 0, 21, 341));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-50, 530, 1161, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lcdgalon = new QLCDNumber(centralwidget);
        lcdgalon->setObjectName(QString::fromUtf8("lcdgalon"));
        lcdgalon->setGeometry(QRect(930, 40, 81, 41));
        lcdgalon->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lcd330 = new QLCDNumber(centralwidget);
        lcd330->setObjectName(QString::fromUtf8("lcd330"));
        lcd330->setGeometry(QRect(930, 120, 81, 41));
        lcd600 = new QLCDNumber(centralwidget);
        lcd600->setObjectName(QString::fromUtf8("lcd600"));
        lcd600->setGeometry(QRect(930, 200, 81, 41));
        lcdliter = new QLCDNumber(centralwidget);
        lcdliter->setObjectName(QString::fromUtf8("lcdliter"));
        lcdliter->setGeometry(QRect(930, 280, 81, 41));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 370, 91, 61));
        tambahstock_2 = new QPushButton(centralwidget);
        tambahstock_2->setObjectName(QString::fromUtf8("tambahstock_2"));
        tambahstock_2->setGeometry(QRect(400, 550, 81, 51));
        lcdpliter = new QLCDNumber(centralwidget);
        lcdpliter->setObjectName(QString::fromUtf8("lcdpliter"));
        lcdpliter->setGeometry(QRect(150, 450, 81, 41));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 440, 81, 71));
        lcdp350 = new QLCDNumber(centralwidget);
        lcdp350->setObjectName(QString::fromUtf8("lcdp350"));
        lcdp350->setGeometry(QRect(150, 370, 81, 41));
        kurangstock_2 = new QPushButton(centralwidget);
        kurangstock_2->setObjectName(QString::fromUtf8("kurangstock_2"));
        kurangstock_2->setGeometry(QRect(400, 610, 81, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 550, 81, 111));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(240, 0, 21, 661));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 340, 141, 41));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 40, 131, 41));
        galonebony = new QLCDNumber(centralwidget);
        galonebony->setObjectName(QString::fromUtf8("galonebony"));
        galonebony->setGeometry(QRect(410, 40, 81, 41));
        galonebony->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(530, 40, 131, 41));
        galonelok = new QLCDNumber(centralwidget);
        galonelok->setObjectName(QString::fromUtf8("galonelok"));
        galonelok->setGeometry(QRect(680, 40, 81, 41));
        galonelok->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(820, 40, 131, 41));
        galonasri = new QLCDNumber(centralwidget);
        galonasri->setObjectName(QString::fromUtf8("galonasri"));
        galonasri->setGeometry(QRect(150, 40, 81, 41));
        galonasri->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(780, 0, 21, 701));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 80, 141, 41));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(260, 120, 131, 41));
        kecilebony = new QLCDNumber(centralwidget);
        kecilebony->setObjectName(QString::fromUtf8("kecilebony"));
        kecilebony->setGeometry(QRect(410, 120, 81, 41));
        kecilebony->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(530, 120, 131, 41));
        kecilelok = new QLCDNumber(centralwidget);
        kecilelok->setObjectName(QString::fromUtf8("kecilelok"));
        kecilelok->setGeometry(QRect(680, 120, 81, 41));
        kecilelok->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(820, 120, 131, 41));
        kecilasri = new QLCDNumber(centralwidget);
        kecilasri->setObjectName(QString::fromUtf8("kecilasri"));
        kecilasri->setGeometry(QRect(150, 120, 81, 41));
        kecilasri->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(260, 200, 131, 41));
        sedengasri = new QLCDNumber(centralwidget);
        sedengasri->setObjectName(QString::fromUtf8("sedengasri"));
        sedengasri->setGeometry(QRect(150, 200, 81, 41));
        sedengebony = new QLCDNumber(centralwidget);
        sedengebony->setObjectName(QString::fromUtf8("sedengebony"));
        sedengebony->setGeometry(QRect(410, 200, 81, 41));
        sedengebony->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(30, 200, 91, 41));
        sedengelok = new QLCDNumber(centralwidget);
        sedengelok->setObjectName(QString::fromUtf8("sedengelok"));
        sedengelok->setGeometry(QRect(680, 200, 81, 41));
        sedengelok->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(530, 200, 131, 41));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(820, 200, 131, 41));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(820, 280, 131, 41));
        literelok = new QLCDNumber(centralwidget);
        literelok->setObjectName(QString::fromUtf8("literelok"));
        literelok->setGeometry(QRect(680, 280, 81, 41));
        literelok->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        literebony = new QLCDNumber(centralwidget);
        literebony->setObjectName(QString::fromUtf8("literebony"));
        literebony->setGeometry(QRect(410, 280, 81, 41));
        literebony->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(530, 280, 131, 41));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(260, 280, 131, 41));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(30, 280, 91, 41));
        literasri = new QLCDNumber(centralwidget);
        literasri->setObjectName(QString::fromUtf8("literasri"));
        literasri->setGeometry(QRect(150, 280, 81, 41));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(380, 382, 55, 16));
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(360, 432, 61, 16));
        uangbank = new QLabel(centralwidget);
        uangbank->setObjectName(QString::fromUtf8("uangbank"));
        uangbank->setGeometry(QRect(440, 420, 131, 41));
        uangbank->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";"));
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(380, 460, 251, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(380, 490, 55, 16));
        uangtotal = new QLabel(centralwidget);
        uangtotal->setObjectName(QString::fromUtf8("uangtotal"));
        uangtotal->setGeometry(QRect(440, 480, 131, 41));
        uangtotal->setStyleSheet(QString::fromUtf8("font: 20pt \"MS Shell Dlg 2\";"));
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(810, 420, 181, 20));
        tanggalLast = new QLabel(centralwidget);
        tanggalLast->setObjectName(QString::fromUtf8("tanggalLast"));
        tanggalLast->setGeometry(QRect(830, 450, 201, 20));
        tanggalLast->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        tanggaltoday = new QLabel(centralwidget);
        tanggaltoday->setObjectName(QString::fromUtf8("tanggaltoday"));
        tanggaltoday->setGeometry(QRect(830, 590, 201, 20));
        tanggaltoday->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        label_31 = new QLabel(centralwidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(800, 560, 181, 20));
        label_31->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1071, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Stock Calculator", nullptr));
        savetext->setText(QCoreApplication::translate("MainWindow", "SAVE DATA", nullptr));
        bukatext->setText(QCoreApplication::translate("MainWindow", "BUKA FILE", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "STOCK GALON", nullptr));
        tambahstock->setText(QCoreApplication::translate("MainWindow", "Tambah", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Uang Setoran", nullptr));
        uangdisplay->setText(QString());
        kurangstock->setText(QCoreApplication::translate("MainWindow", "Kurang", nullptr));
        kuranguang->setText(QCoreApplication::translate("MainWindow", "Kurang", nullptr));
        tambahuang->setText(QCoreApplication::translate("MainWindow", "Tambah", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ASRI", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "            ASRI", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "STOCK 600ml", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "STOCK 1.5L", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Reset Stock", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "STOCK 350ml", nullptr));
        tambahstock_2->setText(QCoreApplication::translate("MainWindow", "Tambah", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "STOCK 1.5L", nullptr));
        kurangstock_2->setText(QCoreApplication::translate("MainWindow", "Kurang", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reset Stock", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "JUMLAH STOCK PUCUK", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "STOCK GALON EBONY", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "STOCK GALON ELOK", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "TOTAL STOCK", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "STOCK 330ml", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "           EBONY", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "           ELOK", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "TOTAL STOCK", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "           EBONY", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "            ASRI", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "           ELOK", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "TOTAL STOCK", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "TOTAL STOCK", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "           ELOK", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "           EBONY", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "            ASRI", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "CASH", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "TRANSFER", nullptr));
        uangbank->setText(QString());
        label_27->setText(QCoreApplication::translate("MainWindow", "TOTAL", nullptr));
        uangtotal->setText(QString());
        label_28->setText(QCoreApplication::translate("MainWindow", "TANGGAL LAST UPDATE", nullptr));
        tanggalLast->setText(QCoreApplication::translate("MainWindow", "Tanggal", nullptr));
        tanggaltoday->setText(QCoreApplication::translate("MainWindow", "Tanggal", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "TANGGAL HARI INI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
