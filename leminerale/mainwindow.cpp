#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>

using namespace std;
int sGalonAsri=0;
int s330A = 0;
int s600A = 0;
int sliterAsri = 0;

int sGalonel=0;
int s330el = 0;
int s600el = 0;
int sliterel = 0;

int sGaloneb=0;
int s330eb = 0;
int s600eb = 0;
int slitereb = 0;
QString tanggalLast;


int sGalon = 0;
int s330 = 0;
int s600 = 0;
int sliter = 0;


int uangcash = 0;
int uangbank = 0;
int uangtotal = 0;

int p250 = 3;
int p350 = 3;
int p480 = 3;
int pliter = 3;

#define DTTMFMT "%Y-%m-%d %H:%M:%S "
#define DTTMSZ 21
static char *getDtTm (char *buff) {
    time_t t = time (0);
    strftime (buff, DTTMSZ, DTTMFMT, localtime (&t));
    return buff;
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MainWindow::on_bukatext_clicked();
}

MainWindow::~MainWindow()
{
    MainWindow::on_savetext_clicked();
    delete ui;
}

void MainWindow::on_tambahstock_clicked()
{
    QStringList lok;
    lok << tr("Ebony") << tr("Elok") << tr("Asri");
    bool sip1;
    QString lokasi = QInputDialog::getItem(this, tr("Pilih Lokasi"),
                                             tr("Tempat :"), lok, 0, false, &sip1);

    QStringList items;
    items << tr("Galon") << tr("330") << tr("600") << tr("1.5L");
    bool sip;
    QString item = QInputDialog::getItem(this, tr("Pilih tipe"),
                                             tr("Jenis :"), items, 0, false, &sip);
    if(!sip)
        return;

    bool ok;
    int i = QInputDialog::getInt(this, tr("Ubah Stock"),
                                 tr(" TAMBAH STOCK "), 0, 0, 1000, 1, &ok);
    if (item.isEmpty())
        return;


    if(!sip1)
        return;
    int loc = 0;
    if (lokasi == "Ebony")
    {
        loc = 1;
    }
    if (lokasi == tr("Elok"))
    {
        loc = 2;
    }
    if (lokasi == tr("Asri"))
    {
        loc = 3;
    }

    //total
    int cond = 0;
    if (item == "Galon")
    {
        cond = 1;
    }
    if (item == tr("330"))
    {
        cond = 2;
    }
    if (item == tr("600"))
    {
        cond = 3;
    }
    if (item == tr("1.5L"))
    {
        cond = 4;
    }
    switch(cond)
    {
    case 1:
        sGalon += i;
        ui->lcdgalon->display(sGalon);
        if(loc == 1)
        {
            sGaloneb+=i;
            ui->galonebony->display(sGaloneb);
        }
        if(loc == 2)
        {
            sGalonel +=i;
            ui->galonelok->display(sGalonel);
        }
        if(loc == 3)
        {
            sGalonAsri+=i;
            ui->galonasri->display(sGalonAsri);
        }
        break;
    case 2:
        s330 += i;
        ui->lcd330->display(s330);
        if(loc == 1)
        {
            s330eb+=i;
            ui->kecilebony->display(s330eb);
        }
        if(loc == 2)
        {
            s330el +=i;
            ui->kecilelok->display(s330el);
        }
        if(loc == 3)
        {
            s330A+=i;
            ui->kecilasri->display(s330A);
        }
        break;
    case 3:
        s600 += i;
        ui->lcd600->display(s600);
        if(loc == 1)
        {
            s600eb+=i;
            ui->sedengebony->display(s600eb);
        }
        if(loc == 2)
        {
            s600el +=i;
            ui->sedengelok->display(s600el);
        }
        if(loc == 3)
        {
            s600A+=i;
            ui->sedengasri->display(s600A);
        }
        break;
    case 4:
        sliter += i;
        ui->lcdliter->display(sliter);
        if(loc == 1)
        {
            slitereb+=i;
            ui->literebony->display(slitereb);
        }
        if(loc == 2)
        {
            sliterel +=i;
            ui->literelok->display(sliterel);
        }
        if(loc == 3)
        {
            sliterAsri+=i;
            ui->literasri->display(sliterAsri);
        }
        break;
    }

}

void MainWindow::on_kurangstock_clicked()
{

    QStringList lok;
    lok << tr("Ebony") << tr("Elok") << tr("Asri");
    bool sip1;
    QString lokasi = QInputDialog::getItem(this, tr("Pilih Lokasi"),
                                             tr("Tempat :"), lok, 0, false, &sip1);
    if(!sip1)
        return;
    int loc = 0;
    if (lokasi == "Ebony")
    {
        loc = 1;
    }
    if (lokasi == tr("Elok"))
    {
        loc = 2;
    }
    if (lokasi == tr("Asri"))
    {
        loc = 3;
    }

    QStringList items;
    items << tr("Galon") << tr("330") << tr("600") << tr("1.5L");
    bool sip;
    QString item = QInputDialog::getItem(this, tr("Pilih tipe"),
                                             tr("Jenis :"), items, 0, false, &sip);
    if(!sip)
        return;
    bool ok;
    int i = QInputDialog::getInt(this, tr("Ubah Stock"),
                                 tr(" KURANG STOCK "), 0, 0, 100, 1, &ok);
    if (item.isEmpty())
        return;



    int cond = 0;
    if (item == "Galon")
    {
        cond = 1;
    }
    if (item == tr("330"))
    {
        cond = 2;
    }
    if (item == tr("600"))
    {
        cond = 3;
    }
    if (item == tr("1.5L"))
    {
        cond = 4;
    }
    QMessageBox msgBox;

    switch(cond)
    {
    case 1:
        if(i > sGalon)
        {
            break;
        }
        sGalon -= i;
        ui->lcdgalon->display(sGalon);
        if(sGalon <= 10)
        {
            msgBox.setText("Stock dibawah 10.");
            msgBox.exec();
        }
        if(loc == 1)
        {
            sGaloneb-=i;
            ui->galonebony->display(sGaloneb);
        }
        if(loc == 2)
        {
            sGalonel -=i;
            ui->galonelok->display(sGalonel);
        }
        if(loc == 3)
        {
            sGalonAsri-=i;
            ui->galonasri->display(sGalonAsri);
        }
        break;
    case 2:
        if(i > s330)
        {
            break;
        }
        s330 -= i;
        ui->lcd330->display(s330);
        if(s330 <= 10)
        {
            msgBox.setText("Stock dibawah 10.");
            msgBox.exec();
        }
        if(loc == 1)
        {
            s330eb-=i;
            ui->kecilebony->display(s330eb);
        }
        if(loc == 2)
        {
            s330el -=i;
            ui->kecilelok->display(s330el);
        }
        if(loc == 3)
        {
            s330A-=i;
            ui->kecilasri->display(s330A);
        }
        break;
    case 3:
        if(i > s600)
        {
            break;
        }
        s600 -= i;
        ui->lcd600->display(s600);
        if(s600 <= 10)
        {
            msgBox.setText("Stock dibawah 10.");
            msgBox.exec();
        }
        if(loc == 1)
        {
            s600eb-=i;
            ui->sedengebony->display(s600eb);
        }
        if(loc == 2)
        {
            s600el -=i;
            ui->sedengelok->display(s600el);
        }
        if(loc == 3)
        {
            s600A-=i;
            ui->sedengasri->display(s600A);
        }
        break;
    case 4:
        if(i > sliter)
        {
            break;
        }
        sliter -= i;
        ui->lcdliter->display(sliter);
        if(sliter <= 10)
        {
            msgBox.setText("Stock dibawah 10.");
            msgBox.exec();
        }
        if(loc == 1)
        {
            slitereb-=i;
            ui->literebony->display(slitereb);
        }
        if(loc == 2)
        {
            sliterel -=i;
            ui->literelok->display(sliterel);
        }
        if(loc == 3)
        {
            sliterAsri-=i;
            ui->literasri->display(sliterAsri);
        }
        break;
    }
}

void MainWindow::on_bukatext_clicked()
{
    //tanggal
    char buff[DTTMSZ];
    QString tanggal = QDir::currentPath();
    tanggal.append("/tanggal.txt");
    QFile tanggals(tanggal);
    tanggals.open(QIODevice::ReadOnly);
    QTextStream tanggalku(&tanggals);

    QString stline = tanggalku.readLine();
    tanggalLast = stline;
    tanggals.close();
    ui->tanggalLast->setText(tanggalLast);
    getDtTm (buff);
    QString tgl = buff;
    ui->tanggaltoday->setText(tgl);


    QString apath = QDir::currentPath();
    QString bpath = QDir::currentPath();
    QString cpath = QDir::currentPath();
    QString dpath = QDir::currentPath();
    QString upath = QDir::currentPath();
    QString tfbankpath = QDir::currentPath();



    apath.append("/galon.txt");
    bpath.append("/330.txt");
    cpath.append("/600.txt");
    dpath.append("/liter.txt");
    upath.append("/uang.txt");
    tfbankpath.append("/uangbank.txt");

    QString aapath = QDir::currentPath();
    QString bapath = QDir::currentPath();
    QString capath = QDir::currentPath();
    QString dapath = QDir::currentPath();



    aapath.append("/galonas.txt");
    bapath.append("/330as.txt");
    capath.append("/600as.txt");
    dapath.append("/literas.txt");

    QString abpath = QDir::currentPath();
    QString bbpath = QDir::currentPath();
    QString cbpath = QDir::currentPath();
    QString dbpath = QDir::currentPath();



    abpath.append("/galonel.txt");
    bbpath.append("/330el.txt");
    cbpath.append("/600el.txt");
    dbpath.append("/literel.txt");

    QString acpath = QDir::currentPath();
    QString bcpath = QDir::currentPath();
    QString ccpath = QDir::currentPath();
    QString dcpath = QDir::currentPath();



    acpath.append("/galoneb.txt");
    bcpath.append("/330eb.txt");
    ccpath.append("/600eb.txt");
    dcpath.append("/litereb.txt");

    //pucuk

    QString bppath = QDir::currentPath();
    QString dppath = QDir::currentPath();

    bppath.append("/p350.txt");
    dppath.append("/pliter.txt");

    QFile inputgalon(apath);
    QFile input300(bpath);
    QFile input600(cpath);
    QFile inputliter(dpath);
    QFile inputuang(upath);
    QFile inputuangBank(tfbankpath);

    inputuang.open(QIODevice::ReadOnly);
    inputuangBank.open(QIODevice::ReadOnly);
    inputgalon.open(QIODevice::ReadOnly);
    input300.open(QIODevice::ReadOnly);
    input600.open(QIODevice::ReadOnly);
    inputliter.open(QIODevice::ReadOnly);

    QFile ainputgalon(aapath);
    QFile ainput300(bapath);
    QFile ainput600(capath);
    QFile ainputliter(dapath);

    ainputgalon.open(QIODevice::ReadOnly);
    ainput300.open(QIODevice::ReadOnly);
    ainput600.open(QIODevice::ReadOnly);
    ainputliter.open(QIODevice::ReadOnly);


    QFile binputgalon(abpath);
    QFile binput300(bbpath);
    QFile binput600(cbpath);
    QFile binputliter(dbpath);

    binputgalon.open(QIODevice::ReadOnly);
    binput300.open(QIODevice::ReadOnly);
    binput600.open(QIODevice::ReadOnly);
    binputliter.open(QIODevice::ReadOnly);


    QFile cinputgalon(acpath);
    QFile cinput300(bcpath);
    QFile cinput600(ccpath);
    QFile cinputliter(dcpath);

    cinputgalon.open(QIODevice::ReadOnly);
    cinput300.open(QIODevice::ReadOnly);
    cinput600.open(QIODevice::ReadOnly);
    cinputliter.open(QIODevice::ReadOnly);


    if (!inputgalon.isOpen() ||!inputuang.isOpen()||!input300.isOpen()||!input600.isOpen() || !inputliter.isOpen() )
    {
        QMessageBox msgBox;
        msgBox.setText("File Error.");
        msgBox.exec();
    }

    //pucuk


    QFile inputp350(bppath);

    QFile inputpliter(dppath);


    inputp350.open(QIODevice::ReadOnly);

    inputpliter.open(QIODevice::ReadOnly);


    if (!inputp350.isOpen()||!inputpliter.isOpen())
    {
        QMessageBox msgBox;
        msgBox.setText("File Error.");
        msgBox.exec();
    }
    //pucuk
    QTextStream s2p(&inputp350);
    QTextStream slp(&inputpliter);


    QTextStream stream(&inputgalon);
    QTextStream s2(&input300);
    QTextStream s6(&input600);
    QTextStream sl(&inputliter);
    QTextStream su(&inputuang);
    QTextStream tfsu(&inputuangBank);



    //galon
    QString line = stream.readLine();
    sGalon = line.toInt();

    //330
    line = s2.readLine();
    s330 = line.toInt();

    //600
    line = s6.readLine();
    s600 = line.toInt();

    //liter
    line = sl.readLine();
    sliter = line.toInt();

    // END GALON TOTAL
    //GALON AS
    QTextStream astream(&ainputgalon);
    QTextStream as2(&ainput300);
    QTextStream as6(&ainput600);
    QTextStream asl(&ainputliter);



    //galon
    QString aline = astream.readLine();
    sGalonAsri = aline.toInt();

    //330
    aline = as2.readLine();
    s330A = aline.toInt();

    //600
    aline = as6.readLine();
    s600A = aline.toInt();

    //liter
    aline = asl.readLine();
    sliterAsri = aline.toInt();



    QTextStream bstream(&binputgalon);
    QTextStream bs2(&binput300);
    QTextStream bs6(&binput600);
    QTextStream bsl(&binputliter);

    //galon
    QString bline = bstream.readLine();
    sGalonel = bline.toInt();

    //330
    bline = bs2.readLine();
    s330el = bline.toInt();

    //600
    bline = bs6.readLine();
    s600el = bline.toInt();

    //liter
    bline = bsl.readLine();
    sliterel = bline.toInt();



    QTextStream cstream(&cinputgalon);
    QTextStream cs2(&cinput300);
    QTextStream cs6(&cinput600);
    QTextStream csl(&cinputliter);



    //galon
    QString cline = cstream.readLine();
    sGaloneb = cline.toInt();

    //330
    cline = cs2.readLine();
    s330eb = cline.toInt();

    //600
    cline = cs6.readLine();
    s600eb = cline.toInt();

    //liter
    cline = csl.readLine();
    slitereb = cline.toInt();







    //uang
    string dispuang;
    line = su.readLine();
    uangcash = line.toInt();
    if(uangcash > -1)
    {
        //display the money
        dispuang = line.toStdString();
        int n = dispuang.length() - 3;
        while (n > 0) {
           dispuang.insert(n, ",");
           n -= 3;
        }
        ui->uangdisplay->setText(QString::fromStdString(dispuang));
    }


    string tfdispuang;
    line = tfsu.readLine();
    uangbank = line.toInt();
    if(uangbank > -1)
    {
        //display the money
        tfdispuang = line.toStdString();
        int n = tfdispuang.length() - 3;
        while (n > 0) {
           tfdispuang.insert(n, ",");
           n -= 3;
        }
        ui->uangbank->setText(QString::fromStdString(tfdispuang));
    }


    uangtotal = uangcash + uangbank;
    string adispuang = to_string(uangtotal);
    int an = adispuang.length() - 3;
    while (an > 0) {
       adispuang.insert(an, ",");
       an -= 3;
    }

    ui->uangtotal->setText(QString::fromStdString(adispuang));
    //pucuk
    //galon

    //330
    line = s2p.readLine();
    p350 = line.toInt();

    //liter
    line = slp.readLine();
    pliter = line.toInt();



    ui->lcdgalon->display(sGalon);
    ui->lcd330->display(s330);
    ui->lcd600->display(s600);
    ui->lcdliter->display(sliter);

    ui->galonasri->display(sGalonAsri);
    ui->kecilasri->display(s330A);
    ui->sedengasri->display(s600A);
    ui->literasri->display(sliterAsri);

    ui->galonebony->display(sGaloneb);
    ui->kecilebony->display(s330eb);
    ui->sedengebony->display(s600eb);
    ui->literebony->display(slitereb);

    ui->galonelok->display(sGalonel);
    ui->kecilelok->display(s330el);
    ui->sedengelok->display(s600el);
    ui->literelok->display(sliterel);

    ui->lcdp350->display(p350);
    ui->lcdpliter->display(pliter);


    ui->uangdisplay->setText(QString::fromStdString(dispuang));

    inputgalon.close();
    input300.close();
    input600.close();
    inputliter.close();

    ainputgalon.close();
    ainput300.close();
    ainput600.close();
    ainputliter.close();

    binputgalon.close();
    binput300.close();
    binput600.close();
    binputliter.close();

    cinputgalon.close();
    cinput300.close();
    cinput600.close();
    cinputliter.close();

    inputuang.close();
    inputp350.close();
    inputpliter.close();
}

void MainWindow::on_savetext_clicked()
{
    //tanggal
    char buff[DTTMSZ];
    QString tanggal = QDir::currentPath();
    tanggal.append("/tanggal.txt");
    QFile tanggals(tanggal);
    tanggals.open(QIODevice::ReadOnly);
    QTextStream tanggalku(&tanggals);
    tanggals.remove();
    tanggals.open(QIODevice::ReadWrite);
    tanggalku << getDtTm (buff);
    tanggals.close();


    //pucuk
    QString bppath = QDir::currentPath();
    QString dppath = QDir::currentPath();

    bppath.append("/p350.txt");
    dppath.append("/pliter.txt");

    QFile inputp350(bppath);
    QFile inputpliter(dppath);

    inputp350.open(QIODevice::ReadOnly);
    inputpliter.open(QIODevice::ReadOnly);

    QTextStream s2p(&inputp350);
    QTextStream slp(&inputpliter);
    inputp350.remove();
    inputpliter.remove();

     inputp350.open(QIODevice::ReadWrite);
     inputpliter.open(QIODevice::ReadWrite);


    s2p << p350;
    inputp350.close();
    slp << pliter;
    inputpliter.close();




    //lemin
    QString apath = QDir::currentPath();
    QString bpath = QDir::currentPath();
    QString cpath = QDir::currentPath();
    QString dpath = QDir::currentPath();
    QString upath = QDir::currentPath();
    QString ubpath = QDir::currentPath();
    QString ucpath = QDir::currentPath();


    apath.append("/galon.txt");
    bpath.append("/330.txt");
    cpath.append("/600.txt");
    dpath.append("/liter.txt");
    upath.append("/uang.txt");
    ubpath.append("/uangbank.txt");
    ucpath.append("/uangakhir.txt");

    QString aapath = QDir::currentPath();
    QString bapath = QDir::currentPath();
    QString capath = QDir::currentPath();
    QString dapath = QDir::currentPath();



    aapath.append("/galonas.txt");
    bapath.append("/330as.txt");
    capath.append("/600as.txt");
    dapath.append("/literas.txt");

    QString abpath = QDir::currentPath();
    QString bbpath = QDir::currentPath();
    QString cbpath = QDir::currentPath();
    QString dbpath = QDir::currentPath();



    abpath.append("/galonel.txt");
    bbpath.append("/330el.txt");
    cbpath.append("/600el.txt");
    dbpath.append("/literel.txt");

    QString acpath = QDir::currentPath();
    QString bcpath = QDir::currentPath();
    QString ccpath = QDir::currentPath();
    QString dcpath = QDir::currentPath();



    acpath.append("/galoneb.txt");
    bcpath.append("/330eb.txt");
    ccpath.append("/600eb.txt");
    dcpath.append("/litereb.txt");

    QFile inputgalon(apath);
    QFile input300(bpath);
    QFile input600(cpath);
    QFile inputliter(dpath);
    QFile inputuang(upath);
    QFile ainputuang(ubpath);
    QFile binputuang(ucpath);

    QFile ainputgalon(aapath);
    QFile ainput300(bapath);
    QFile ainput600(capath);
    QFile ainputliter(dapath);

    QFile binputgalon(abpath);
    QFile binput300(bbpath);
    QFile binput600(cbpath);
    QFile binputliter(dbpath);

    QFile cinputgalon(acpath);
    QFile cinput300(bcpath);
    QFile cinput600(ccpath);
    QFile cinputliter(dcpath);

    inputgalon.remove();
    input300.remove();
    input600.remove();
    inputliter.remove();
    inputuang.remove();
    ainputuang.remove();
    binputuang.remove();

    ainputgalon.remove();
    ainput300.remove();
    ainput600.remove();
    ainputliter.remove();

    binputgalon.remove();
    binput300.remove();
    binput600.remove();
    binputliter.remove();

    cinputgalon.remove();
    cinput300.remove();
    cinput600.remove();
    cinputliter.remove();

    inputuang.open(QIODevice::ReadWrite);
    ainputuang.open(QIODevice::ReadWrite);
    binputuang.open(QIODevice::ReadWrite);
    inputgalon.open(QIODevice::ReadWrite);
    input300.open(QIODevice::ReadWrite);
    input600.open(QIODevice::ReadWrite);
    inputliter.open(QIODevice::ReadWrite);

    ainputgalon.open(QIODevice::ReadWrite);
    ainput300.open(QIODevice::ReadWrite);
    ainput600.open(QIODevice::ReadWrite);
    ainputliter.open(QIODevice::ReadWrite);

    binputgalon.open(QIODevice::ReadWrite);
    binput300.open(QIODevice::ReadWrite);
    binput600.open(QIODevice::ReadWrite);
    binputliter.open(QIODevice::ReadWrite);

    cinputgalon.open(QIODevice::ReadWrite);
    cinput300.open(QIODevice::ReadWrite);
    cinput600.open(QIODevice::ReadWrite);
    cinputliter.open(QIODevice::ReadWrite);

    QTextStream stream(&inputgalon);
    QTextStream s2(&input300);
    QTextStream s6(&input600);
    QTextStream sl(&inputliter);
    QTextStream su(&inputuang);
    QTextStream asu(&ainputuang);
    QTextStream bsu(&binputuang);

    QTextStream astream(&ainputgalon);
    QTextStream as2(&ainput300);
    QTextStream as6(&ainput600);
    QTextStream asl(&ainputliter);

    QTextStream bstream(&binputgalon);
    QTextStream bs2(&binput300);
    QTextStream bs6(&binput600);
    QTextStream bsl(&binputliter);

    QTextStream cstream(&cinputgalon);
    QTextStream cs2(&cinput300);
    QTextStream cs6(&cinput600);
    QTextStream csl(&cinputliter);

    sGalon = sGalonAsri+sGaloneb+sGalonel;
    s330=s330A+s330eb+s330eb;
    s600=s600A+s600el+s600eb;
    sliter=sliterAsri+slitereb+sliterel;


    uangtotal = uangbank+uangcash;

    stream << sGalon;
    inputgalon.close();
    s2 << s330;
    input300.close();
    s6 << s600;
    input600.close();
    sl << sliter;
    inputliter.close();

    astream << sGalonAsri;
    ainputgalon.close();
    as2 << s330A;
    ainput300.close();
    as6 << s600A;
    ainput600.close();
    asl << sliterAsri;
    ainputliter.close();

    bstream << sGalonel;
    binputgalon.close();
    bs2 << s330el;
    binput300.close();
    bs6 << s600el;
    binput600.close();
    bsl << sliterel;
    binputliter.close();

    cstream << sGaloneb;
    cinputgalon.close();
    cs2 << s330eb;
    cinput300.close();
    cs6 << s600eb;
    cinput600.close();
    csl << slitereb;
    cinputliter.close();


    su << uangcash;
    inputuang.close();
    asu << uangbank;
    ainputuang.close();
    bsu << uangtotal;
    binputuang.close();

    QMessageBox msgBox;
    msgBox.setText("File berhasil di save.");
    msgBox.show();
}

void MainWindow::on_tambahuang_clicked()
{
    QStringList lok;
    lok << tr("Transferan") << tr("Cash");
    bool sip1;
    QString lokasi = QInputDialog::getItem(this, tr("Pilih aja"),
                                             tr("uang :"), lok, 0, false, &sip1);
    if(!sip1)
        return;
    bool ok;
    int i = QInputDialog::getInt(this, tr("Ubah Uang"),
                                 tr(" Tambah Uang "), 0, 0, 1000000000, 1, &ok);
    if(!ok)
    {
        return;
    }
    if(lokasi == "Cash")
    {
        uangcash += i;
        string dispuang = to_string(uangcash);
        int n = dispuang.length() - 3;
        while (n > 0) {
           dispuang.insert(n, ",");
           n -= 3;
        }
        ui->uangdisplay->setText(QString::fromStdString(dispuang));
    }
    else
    {
        uangbank += i;
        string dispuang = to_string(uangbank);
        int n = dispuang.length() - 3;
        while (n > 0) {
           dispuang.insert(n, ",");
           n -= 3;
        }
        ui->uangbank->setText(QString::fromStdString(dispuang));
    }
    uangtotal += i;
    string dispuang = to_string(uangtotal);
    int n = dispuang.length() - 3;
    while (n > 0) {
       dispuang.insert(n, ",");
       n -= 3;
    }
    ui->uangtotal->setText(QString::fromStdString(dispuang));

}

void MainWindow::on_kuranguang_clicked()
{
    QStringList lok;
    lok << tr("Transferan") << tr("Cash");
    bool sip1;
    QString lokasi = QInputDialog::getItem(this, tr("Pilih aja"),
                                             tr("uang :"), lok, 0, false, &sip1);
    if(!sip1)
        return;
    bool ok;
    int i = QInputDialog::getInt(this, tr("Ubah Uang"),
                                 tr(" Kurangi Uang "), 0, 0, 1000000000, 1, &ok);
    if(!ok)
    {
        return;
    }
    if(lokasi == "Cash")
    {
        uangcash += i;
        string dispuang = to_string(uangcash);
        int n = dispuang.length() - 3;
        while (n > 0) {
           dispuang.insert(n, ",");
           n -= 3;
        }
        ui->uangdisplay->setText(QString::fromStdString(dispuang));
    }
    else
    {
        uangbank += i;
        string dispuang = to_string(uangbank);
        int n = dispuang.length() - 3;
        while (n > 0) {
           dispuang.insert(n, ",");
           n -= 3;
        }
        ui->uangbank->setText(QString::fromStdString(dispuang));
    }
    uangtotal += i;
    string dispuang = to_string(uangtotal);
    int n = dispuang.length() - 3;
    while (n > 0) {
       dispuang.insert(n, ",");
       n -= 3;
    }
    ui->uangtotal->setText(QString::fromStdString(dispuang));
}

void MainWindow::on_pushButton_clicked()
{
    QStringList items;
    items << tr("Galon") << tr("330") << tr("600") << tr("1.5L");
    bool sip;
    QString item = QInputDialog::getItem(this, tr("Pilih tipe"),
                                             tr("Jenis :"), items, 0, false, &sip);
    if(!sip)
        return;

    bool ok;
    int i = QInputDialog::getInt(this, tr("Ubah Stock"),
                                 tr(" SET STOCK "), 0, 0, 100, 1, &ok);
    if (item.isEmpty())
        return;



    int cond = 0;
    if (item == "Galon")
    {
        cond = 1;
    }
    if (item == tr("330"))
    {
        cond = 2;
    }
    if (item == tr("600"))
    {
        cond = 3;
    }
    if (item == tr("1.5L"))
    {
        cond = 4;
    }
    cout<<cond<<endl;
    switch(cond)
    {
    case 1:
        sGalon = i;
        ui->lcdgalon->display(sGalon);
        break;
    case 2:
        s330 = i;
        ui->lcd330->display(s330);
        break;
    case 3:
        s600 = i;
        ui->lcd600->display(s600);
        break;
    case 4:
        sliter = i;
        ui->lcdliter->display(sliter);
        break;
    }

}

void MainWindow::on_tambahstock_2_clicked()
{
    QStringList items;
    items << tr("350ml") << tr("1.3L");
    bool sip;
    QString item = QInputDialog::getItem(this, tr("Pilih tipe"),
                                             tr("Jenis :"), items, 0, false, &sip);
    if(!sip)
        return;

    bool ok;
    int i = QInputDialog::getInt(this, tr("Ubah Stock"),
                                 tr(" TAMBAH STOCK "), 0, 0, 100, 1, &ok);
    if (item.isEmpty())
        return;



    int cond = 0;
    if (item == tr("350ml"))
    {
        cond = 2;
    }
    if (item == tr("1.3L"))
    {
        cond = 4;
    }
    cout<<cond<<endl;
    switch(cond)
    {
    case 2:
        p350 += i;
        ui->lcdp350->display(p350);
        break;
    case 4:
        pliter += i;
        ui->lcdpliter->display(pliter);
        break;
    }
}

void MainWindow::on_kurangstock_2_clicked()
{
    QStringList items;
    items << tr("350ml") << tr("1.5L");
    bool sip;
    QString item = QInputDialog::getItem(this, tr("Pilih tipe"),
                                             tr("Jenis :"), items, 0, false, &sip);
    if(!sip)
        return;

    bool ok;
    int i = QInputDialog::getInt(this, tr("Ubah Stock"),
                                 tr(" KURANG STOCK "), 0, 0, 100, 1, &ok);
    if (item.isEmpty())
        return;

    int cond = 0;
    if (item == "250ml")
    {
        cond = 1;
    }
    if (item == tr("350ml"))
    {
        cond = 2;
    }
    if (item == tr("480ml"))
    {
        cond = 3;
    }
    if (item == tr("1.5L"))
    {
        cond = 4;
    }
    QMessageBox msgBox;

    switch(cond)
    {
    case 2:
        if(i > p350)
        {
            break;
        }
        p350 -= i;
        ui->lcdp350->display(p350);
        if(p350 <= 10)
        {
            msgBox.setText("Stock dibawah 10.");
            msgBox.exec();
        }
        break;
    case 4:
        if(i > pliter)
        {
            break;
        }
        pliter -= i;
        ui->lcdpliter->display(pliter);
        if(pliter <= 10)
        {
            msgBox.setText("Stock dibawah 10.");
            msgBox.exec();
        }
        break;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QStringList items;
    items << tr("350ml")<< tr("1.5L");
    bool sip;
    QString item = QInputDialog::getItem(this, tr("Pilih tipe"),
                                             tr("Jenis :"), items, 0, false, &sip);
    if(!sip)
        return;

    bool ok;
    int i = QInputDialog::getInt(this, tr("Ubah Stock"),
                                 tr(" SETTING STOCK "), 0, 0, 100, 1, &ok);
    if (item.isEmpty())
        return;



    int cond = 0;
    if (item == "250ml")
    {
        cond = 1;
    }
    if (item == tr("350ml"))
    {
        cond = 2;
    }
    if (item == tr("480ml"))
    {
        cond = 3;
    }
    if (item == tr("1.5L"))
    {
        cond = 4;
    }
    cout<<cond<<endl;
    switch(cond)
    {
    case 1:
    case 2:
        p350 = i;
        ui->lcdp350->display(p350);
        break;
    case 3:
    case 4:
        pliter = i;
        ui->lcdpliter->display(pliter);
        break;
    }
}
