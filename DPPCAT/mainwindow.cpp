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

            QString command2 =  "ssh -qo ConnectTimeout=1 " + ipAddress + " ssh -qo ConnectTimeout=1 dpp ethtool p4p2| grep 'Speed\\|Link detected\\|Duplex'; ";

           QProcess process1;
           process1.start(command2);
           process1.waitForFinished(-1);

           QString output = process1.readAllStandardOutput();


            ui->DCB2->setText(output);



           QString text = ui->DCB2->toPlainText();
           if (text.contains("Speed: 2000Mb/s")) {
               ui->speed_2->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
           }
           else  if (text.contains("Speed: 1000Mb/s")) {
               ui->speed_2->setStyleSheet("QLabel { background-color : orange; border-radius:15; }");
           }
           else if (text.contains("Speed: Unknown!")){
               ui->speed_2->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
           }
           else {
               ui->speed_2->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
           }

           QString text2 = ui->DCB2->toPlainText();
           if (text2.contains("Duplex: Full")) {
               ui->duplex_2->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
           }
           else  if (text2.contains("Duplex: Unknown! (255)")) {
               ui->duplex_2->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
           }
           else {
               ui->duplex_2->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
           }

           QString text3 = ui->DCB2->toPlainText();
           if (text.contains("Link detected: yes")) {
               ui->link_2->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
           }
           else  if (text3.contains("Link detected: no")) {
               ui->link_2->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
           }
           else {
               ui->link_2->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
           }





           QString command3 =  "ssh -qo ConnectTimeout=1 " + ipAddress + " ssh -qo ConnectTimeout=1 dpp ethtool p4p4| grep 'Speed\\|Link detected\\|Duplex'; ";

          QProcess process2;
          process2.start(command3);
          process2.waitForFinished(-1);

          QString output2 = process2.readAllStandardOutput();


           ui->DCB4->setText(output2);



          QString text4 = ui->DCB4->toPlainText();
          if (text4.contains("Speed: 2000Mb/s")) {
              ui->speed_4->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
          }
          else  if (text4.contains("Speed: 1000Mb/s")) {
              ui->speed_4->setStyleSheet("QLabel { background-color : orange; border-radius:15; }");
          }
          else if (text4.contains("Speed: Unknown!")){
              ui->speed_4->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
          }
          else {
              ui->speed_4->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
          }

          QString text5 = ui->DCB4->toPlainText();
          if (text5.contains("Duplex: Full")) {
              ui->duplex_4->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
          }
          else  if (text5.contains("Duplex: Unknown! (255)")) {
              ui->duplex_4->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
          }
          else {
              ui->duplex_4->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
          }

          QString text6 = ui->DCB4->toPlainText();
          if (text6.contains("Link detected: yes")) {
              ui->link_4->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
          }
          else  if (text6.contains("Link detected: no")) {
              ui->link_4->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
          }
          else {
              ui->link_4->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
          }




          QString command4 =  "ssh -qo ConnectTimeout=1 " + ipAddress + " ssh -qo ConnectTimeout=1 dpp ethtool p15p2| grep 'Speed\\|Link detected\\|Duplex'; ";

         QProcess process3;
         process3.start(command3);
         process3.waitForFinished(-1);

         QString output3 = process3.readAllStandardOutput();


          ui->DCB6->setText(output3);



         QString text7 = ui->DCB6->toPlainText();
         if (text7.contains("Speed: 2000Mb/s")) {
             ui->speed_6->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
         }
         else  if (text7.contains("Speed: 1000Mb/s")) {
             ui->speed_6->setStyleSheet("QLabel { background-color : orange; border-radius:15; }");
         }
         else if (text7.contains("Speed: Unknown!")){
             ui->speed_6->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
         }
         else {
             ui->speed_6->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
         }

         QString text8 = ui->DCB6->toPlainText();
         if (text8.contains("Duplex: Full")) {
             ui->duplex_6->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
         }
         else  if (text8.contains("Duplex: Unknown! (255)")) {
             ui->duplex_6->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
         }
         else {
             ui->duplex_6->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
         }

         QString text9 = ui->DCB6->toPlainText();
         if (text9.contains("Link detected: yes")) {
             ui->link_6->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
         }
         else  if (text9.contains("Link detected: no")) {
             ui->link_6->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
         }
         else {
             ui->link_6->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
         }




         QString command5 =  "ssh -qo ConnectTimeout=1 " + ipAddress + " ssh -qo ConnectTimeout=1 dpp ethtool p4p1| grep 'Speed\\|Link detected\\|Duplex'; ";

        QProcess process4;
        process4.start(command5);
        process4.waitForFinished(-1);

        QString output4 = process4.readAllStandardOutput();


         ui->DCB1->setText(output4);



        QString text10 = ui->DCB1->toPlainText();
        if (text10.contains("Speed: 2000Mb/s")) {
            ui->speed->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
        }
        else  if (text10.contains("Speed: 1000Mb/s")) {
            ui->speed->setStyleSheet("QLabel { background-color : orange; border-radius:15; }");
        }
        else if (text10.contains("Speed: Unknown!")){
            ui->speed->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
        }
        else {
            ui->speed->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
        }

        QString text11 = ui->DCB1->toPlainText();
        if (text11.contains("Duplex: Full")) {
            ui->duplex->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
        }
        else  if (text11.contains("Duplex: Unknown! (255)")) {
            ui->duplex->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
        }
        else {
            ui->duplex->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
        }

        QString text12 = ui->DCB1->toPlainText();
        if (text12.contains("Link detected: yes")) {
            ui->link->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
        }
        else  if (text12.contains("Link detected: no")) {
            ui->link->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
        }
        else {
            ui->link->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
        }




        QString command6 =  "ssh -qo ConnectTimeout=1 " + ipAddress + " ssh -qo ConnectTimeout=1 dpp ethtool p4p3| grep 'Speed\\|Link detected\\|Duplex'; ";

       QProcess process5;
       process5.start(command6);
       process5.waitForFinished(-1);

       QString output5 = process5.readAllStandardOutput();


        ui->DCB3->setText(output5);



       QString text13 = ui->DCB3->toPlainText();
       if (text13.contains("Speed: 2000Mb/s")) {
           ui->speed_3->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
       }
       else  if (text13.contains("Speed: 1000Mb/s")) {
           ui->speed_3->setStyleSheet("QLabel { background-color : orange; border-radius:15; }");
       }
       else if (text13.contains("Speed: Unknown!")){
           ui->speed_3->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
       }
       else {
           ui->speed_3->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
       }

       QString text14 = ui->DCB3->toPlainText();
       if (text14.contains("Duplex: Full")) {
           ui->duplex_3->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
       }
       else  if (text14.contains("Duplex: Unknown! (255)")) {
           ui->duplex_3->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
       }
       else {
           ui->duplex_3->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
       }

       QString text15 = ui->DCB3->toPlainText();
       if (text15.contains("Link detected: yes")) {
           ui->link_3->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
       }
       else  if (text15.contains("Link detected: no")) {
           ui->link_3->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
       }
       else {
           ui->link_3->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
       }



       QString command7 =  "ssh -qo ConnectTimeout=1 " + ipAddress + " ssh -qo ConnectTimeout=1 dpp ethtool p15p1| grep 'Speed\\|Link detected\\|Duplex'; ";

      QProcess process6;
      process6.start(command7);
      process6.waitForFinished(-1);

      QString output6 = process6.readAllStandardOutput();


       ui->DCB5->setText(output6);



      QString text16 = ui->DCB5->toPlainText();
      if (text16.contains("Speed: 2000Mb/s")) {
          ui->speed_5->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
      }
      else  if (text16.contains("Speed: 1000Mb/s")) {
          ui->speed_5->setStyleSheet("QLabel { background-color : orange; border-radius:15; }");
      }
      else if (text16.contains("Speed: Unknown!")){
          ui->speed_5->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
      }
      else {
          ui->speed_5->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
      }

      QString text17 = ui->DCB5->toPlainText();
      if (text17.contains("Duplex: Full")) {
          ui->duplex_5->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
      }
      else  if (text17.contains("Duplex: Unknown! (255)")) {
          ui->duplex_5->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
      }
      else {
          ui->duplex_5->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
      }

      QString text18 = ui->DCB5->toPlainText();
      if (text18.contains("Link detected: yes")) {
          ui->link_5->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
      }
      else  if (text18.contains("Link detected: no")) {
          ui->link_5->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
      }
      else {
          ui->link_5->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
      }



      QString command8 =  "ssh -qo ConnectTimeout=1 " + ipAddress + " ssh -qo ConnectTimeout=1 dpp ethtool p15p3| grep 'Speed\\|Link detected\\|Duplex'; ";

     QProcess process7;
     process7.start(command8);
     process7.waitForFinished(-1);

     QString output7 = process7.readAllStandardOutput();


      ui->DCB7->setText(output7);



     QString text19 = ui->DCB7->toPlainText();
     if (text19.contains("Speed: 2000Mb/s")) {
         ui->speed_7->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
     }
     else  if (text19.contains("Speed: 1000Mb/s")) {
         ui->speed_7->setStyleSheet("QLabel { background-color : orange; border-radius:15; }");
     }
     else if (text19.contains("Speed: Unknown!")){
         ui->speed_7->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
     }
     else {
         ui->speed_7->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
     }

     QString text20 = ui->DCB7->toPlainText();
     if (text20.contains("Duplex: Full")) {
         ui->duplex_7->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
     }
     else  if (text20.contains("Duplex: Unknown! (255)")) {
         ui->duplex_7->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
     }
     else {
         ui->duplex_7->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
     }

     QString text21 = ui->DCB7->toPlainText();
     if (text21.contains("Link detected: yes")) {
         ui->link_7->setStyleSheet("QLabel { background-color : green; border-radius:15; }");
     }
     else  if (text21.contains("Link detected: no")) {
         ui->link_7->setStyleSheet("QLabel { background-color : red; border-radius:15; }");
     }
     else {
         ui->link_7->setStyleSheet("QLabel { background-color : transparent; border-radius:15; }");
     }






}









