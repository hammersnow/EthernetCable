#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QComboBox>
#include <QTextEdit>
#include <QProcess>
#include <QString>
#include <QHBoxLayout>
#include <QThread>
#include <QTimer>
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_currentIndexChanged(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}


    void MainWindow::on_comboBox_currentIndexChanged(int index)
{

        //ssh ip

    QString ipAddress;
    if (index == 1) ipAddress = "10.1.10.37";
    else if (index == 2) ipAddress = "10.1.10.40";
    else if (index == 3) ipAddress = "10.1.10.35";
    else if (index == 4) ipAddress = "10.1.10.36";
    else if (index == 5) ipAddress = "10.1.10.38";
    else if (index == 6) ipAddress = "10.1.10.39";
    else if (index == 7) ipAddress = "10.1.10.25";
    else if (index == 8) ipAddress = "10.1.10.17";
    else if (index == 9) ipAddress = "10.1.10.23";
    else if (index == 10) ipAddress = "10.1.10.22";
    else if (index == 11) ipAddress = "10.1.10.33";
    else if (index == 12) ipAddress = "10.1.10.32";
    else if (index == 13) ipAddress = "10.1.10.20";
    else if (index == 14) ipAddress = "10.1.10.28";
    else if (index == 15) ipAddress = "10.1.10.21";
    else if (index == 16) ipAddress = "10.1.10.26";
    else if (index == 17) ipAddress = "10.1.10.27";
    else if (index == 18) ipAddress = "10.1.10.24";
    else if (index == 19) ipAddress = "10.1.10.44";
    else if (index == 20) ipAddress = "10.1.10.46";
    else if (index == 21) ipAddress = "10.1.10.43";
    else if (index == 22) ipAddress = "10.1.10.45";
    else if (index == 23) ipAddress = "10.1.10.41";
    else if (index == 24) ipAddress = "10.1.10.42";

    QString command = "ssh -qo ConnectTimeout=1 " + ipAddress + " ssh -qo ConnectTimeout=1 dpp ethtool mv3d1| grep 'mv3d1\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p4p1| grep 'p4p1\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p4p2| grep 'p4p2\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p4p3| grep 'p4p3\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p4p4| grep 'p4p4\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p15p1| grep 'p15p1\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p15p2| grep 'p15p2\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p15p3| grep 'p15p3\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p17p1| grep 'p17p1\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p17p2| grep 'p17p2\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p17p3| grep 'p17p3\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool p17p4| grep 'p17p4\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool recon1| grep 'recon1\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool recon1:1| grep 'recon1:1\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool recon1:2| grep 'recon1:2\\|Speed\\|Link detected\\|Duplex'; ssh -qo ConnectTimeout=1 dpp ethtool recon1:3| grep 'recon1:3\\|Speed\\|Link detected\\|Duplex'";
        QProcess process;
                process.start(command);

            if (process.waitForFinished())
            {
                QByteArray result = process.readAllStandardOutput();
                QString output = QString(result);

                //renk
                QString speed = "Speed: 2000Mb/s";
                QString duplex = "Duplex: Full";
                QString link = "Link detected: yes";
                QString speed1 = "Speed: 1000Mb/s";
                QString speed2 = "Speed: Unknown!";
                QString duplex1 = "Duplex: Unknown! (255)";
                QString link1 = "Link detected: no";

                QTextCharFormat format;
                format.setFontWeight(QFont::Bold);

                QStringList lines = output.split("\n");
                ui->cikti->clear();


                QString styledOutput = output;
                if (output.contains(speed)) {
                    styledOutput = styledOutput.replace(speed, "<font color='green'><br>" + speed + "</font><br>");
                    format.setForeground(Qt::green);
                }

                if (output.contains(duplex)) {
                    styledOutput = styledOutput.replace(duplex, "<font color='green'>" + duplex + "</font><br>");
                    format.setForeground(Qt::green);
                }


                if (output.contains(link)) {
                    styledOutput = styledOutput.replace(link, "<font color='green'>" + link + "</font><br><br>");
                    format.setForeground(Qt::green);
                }


                if (output.contains(speed1)) {
                    styledOutput = styledOutput.replace(speed1, "<font color='orange'><br>" + speed1 + "</font><br>");
                    format.setForeground(Qt::darkYellow);
                }

                if (output.contains(speed2)) {
                    styledOutput = styledOutput.replace(speed2, "<font color='red'><br>" + speed2 + "</font><br>");
                    format.setForeground(Qt::red);
                }


                if (output.contains(duplex1)) {
                    styledOutput = styledOutput.replace(duplex1, "<font color='red'>" + duplex1 + "</font><br>");
                    format.setForeground(Qt::red);
                }

                if (output.contains(link1)) {
                    styledOutput = styledOutput.replace(link1, "<font color='red'>" + link1 + "</font><br><br>");
                    format.setForeground(Qt::red);
                }
                else {
                    format.setForeground(Qt::red);}

                ui->cikti->clear();
                ui->cikti->setCurrentCharFormat(format);
                ui->cikti->insertHtml(styledOutput);

            }  else {

        ui->cikti->setText("Hata program calistirilamadi.");
    }


}









