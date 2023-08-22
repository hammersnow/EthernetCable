/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jun 22 06:03:48 2023
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QTextBrowser *cikti;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QTextBrowser *DCB1;
    QLabel *speed;
    QLabel *duplex;
    QLabel *link;
    QLabel *label_6;
    QLabel *label_7;
    QTextBrowser *DCB2;
    QTextBrowser *DCB3;
    QTextBrowser *DCB4;
    QTextBrowser *DCB5;
    QTextBrowser *DCB6;
    QTextBrowser *DCB7;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *duplex_2;
    QLabel *label_14;
    QLabel *speed_2;
    QLabel *link_2;
    QLabel *label_15;
    QLabel *speed_3;
    QLabel *duplex_3;
    QLabel *link_3;
    QLabel *speed_4;
    QLabel *label_16;
    QLabel *duplex_4;
    QLabel *link_4;
    QLabel *speed_5;
    QLabel *label_17;
    QLabel *duplex_5;
    QLabel *link_5;
    QLabel *speed_6;
    QLabel *label_18;
    QLabel *duplex_6;
    QLabel *link_6;
    QLabel *speed_7;
    QLabel *label_19;
    QLabel *duplex_7;
    QLabel *link_7;
    QLabel *label_4;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(797, 662);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(30, 60, 111, 41));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 215, 0);\n"
"border-radius:15\n"
""));
        cikti = new QTextBrowser(centralWidget);
        cikti->setObjectName(QString::fromUtf8("cikti"));
        cikti->setGeometry(QRect(530, 70, 241, 561));
        cikti->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);\n"
"border-radius:15\n"
"\n"
""));
        cikti->setFrameShape(QFrame::Panel);
        cikti->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 620, 51, 21));
        label->setStyleSheet(QString::fromUtf8("font: 65 italic 5pt \"Sans Serif\";\n"
"border-radius:10\n"
"\n"
"\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, 0, 811, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 italic 9pt \"Sans Serif\";\n"
"background-color: rgb(188, 188, 188);"));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Raised);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(150, 110, 21, 491));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 100, 161, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(0, 590, 161, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        DCB1 = new QTextBrowser(centralWidget);
        DCB1->setObjectName(QString::fromUtf8("DCB1"));
        DCB1->setGeometry(QRect(190, 120, 311, 61));
        DCB1->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);\n"
"border-radius:15\n"
"\n"
""));
        speed = new QLabel(centralWidget);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(30, 140, 31, 31));
        speed->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        duplex = new QLabel(centralWidget);
        duplex->setObjectName(QString::fromUtf8("duplex"));
        duplex->setGeometry(QRect(70, 140, 31, 31));
        duplex->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        link = new QLabel(centralWidget);
        link->setObjectName(QString::fromUtf8("link"));
        link->setGeometry(QRect(110, 140, 31, 31));
        link->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 120, 31, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 140, 56, 15));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);"));
        DCB2 = new QTextBrowser(centralWidget);
        DCB2->setObjectName(QString::fromUtf8("DCB2"));
        DCB2->setGeometry(QRect(190, 190, 311, 61));
        DCB2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);\n"
"border-radius:15\n"
"\n"
""));
        DCB3 = new QTextBrowser(centralWidget);
        DCB3->setObjectName(QString::fromUtf8("DCB3"));
        DCB3->setGeometry(QRect(190, 260, 311, 61));
        DCB3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);\n"
"border-radius:15\n"
"\n"
""));
        DCB4 = new QTextBrowser(centralWidget);
        DCB4->setObjectName(QString::fromUtf8("DCB4"));
        DCB4->setGeometry(QRect(190, 330, 311, 61));
        DCB4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);\n"
"border-radius:15\n"
"\n"
""));
        DCB5 = new QTextBrowser(centralWidget);
        DCB5->setObjectName(QString::fromUtf8("DCB5"));
        DCB5->setGeometry(QRect(190, 400, 311, 61));
        DCB5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);\n"
"border-radius:15\n"
"\n"
""));
        DCB6 = new QTextBrowser(centralWidget);
        DCB6->setObjectName(QString::fromUtf8("DCB6"));
        DCB6->setGeometry(QRect(190, 470, 311, 61));
        DCB6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);\n"
"border-radius:15\n"
"\n"
""));
        DCB7 = new QTextBrowser(centralWidget);
        DCB7->setObjectName(QString::fromUtf8("DCB7"));
        DCB7->setGeometry(QRect(190, 540, 311, 61));
        DCB7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);\n"
"border-radius:15\n"
"\n"
""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 30, 241, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 italic 9pt \"Sans Serif\";\n"
"\n"
"background-color: rgb(188, 188, 188);\n"
"border-radius:15\n"
""));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(210, 210, 56, 15));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(210, 280, 56, 15));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(210, 350, 56, 15));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(210, 420, 56, 15));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(210, 490, 56, 15));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(210, 560, 56, 15));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 215, 0);"));
        duplex_2 = new QLabel(centralWidget);
        duplex_2->setObjectName(QString::fromUtf8("duplex_2"));
        duplex_2->setGeometry(QRect(70, 210, 31, 31));
        duplex_2->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(70, 190, 41, 16));
        speed_2 = new QLabel(centralWidget);
        speed_2->setObjectName(QString::fromUtf8("speed_2"));
        speed_2->setGeometry(QRect(30, 210, 31, 31));
        speed_2->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        link_2 = new QLabel(centralWidget);
        link_2->setObjectName(QString::fromUtf8("link_2"));
        link_2->setGeometry(QRect(110, 210, 31, 31));
        link_2->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(70, 260, 41, 16));
        speed_3 = new QLabel(centralWidget);
        speed_3->setObjectName(QString::fromUtf8("speed_3"));
        speed_3->setGeometry(QRect(30, 280, 31, 31));
        speed_3->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        duplex_3 = new QLabel(centralWidget);
        duplex_3->setObjectName(QString::fromUtf8("duplex_3"));
        duplex_3->setGeometry(QRect(70, 280, 31, 31));
        duplex_3->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        link_3 = new QLabel(centralWidget);
        link_3->setObjectName(QString::fromUtf8("link_3"));
        link_3->setGeometry(QRect(110, 280, 31, 31));
        link_3->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        speed_4 = new QLabel(centralWidget);
        speed_4->setObjectName(QString::fromUtf8("speed_4"));
        speed_4->setGeometry(QRect(30, 350, 31, 31));
        speed_4->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(70, 330, 41, 16));
        duplex_4 = new QLabel(centralWidget);
        duplex_4->setObjectName(QString::fromUtf8("duplex_4"));
        duplex_4->setGeometry(QRect(70, 350, 31, 31));
        duplex_4->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        link_4 = new QLabel(centralWidget);
        link_4->setObjectName(QString::fromUtf8("link_4"));
        link_4->setGeometry(QRect(110, 350, 31, 31));
        link_4->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        speed_5 = new QLabel(centralWidget);
        speed_5->setObjectName(QString::fromUtf8("speed_5"));
        speed_5->setGeometry(QRect(30, 420, 31, 31));
        speed_5->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(70, 400, 41, 16));
        duplex_5 = new QLabel(centralWidget);
        duplex_5->setObjectName(QString::fromUtf8("duplex_5"));
        duplex_5->setGeometry(QRect(70, 420, 31, 31));
        duplex_5->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        link_5 = new QLabel(centralWidget);
        link_5->setObjectName(QString::fromUtf8("link_5"));
        link_5->setGeometry(QRect(110, 420, 31, 31));
        link_5->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        speed_6 = new QLabel(centralWidget);
        speed_6->setObjectName(QString::fromUtf8("speed_6"));
        speed_6->setGeometry(QRect(30, 490, 31, 31));
        speed_6->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(70, 470, 41, 16));
        duplex_6 = new QLabel(centralWidget);
        duplex_6->setObjectName(QString::fromUtf8("duplex_6"));
        duplex_6->setGeometry(QRect(70, 490, 31, 31));
        duplex_6->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        link_6 = new QLabel(centralWidget);
        link_6->setObjectName(QString::fromUtf8("link_6"));
        link_6->setGeometry(QRect(110, 490, 31, 31));
        link_6->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        speed_7 = new QLabel(centralWidget);
        speed_7->setObjectName(QString::fromUtf8("speed_7"));
        speed_7->setGeometry(QRect(30, 560, 31, 31));
        speed_7->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(70, 540, 41, 16));
        duplex_7 = new QLabel(centralWidget);
        duplex_7->setObjectName(QString::fromUtf8("duplex_7"));
        duplex_7->setGeometry(QRect(70, 560, 31, 31));
        duplex_7->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        link_7 = new QLabel(centralWidget);
        link_7->setObjectName(QString::fromUtf8("link_7"));
        link_7->setGeometry(QRect(110, 560, 31, 31));
        link_7->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:15"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 70, 311, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 italic 9pt \"Sans Serif\";\n"
"\n"
"background-color: rgb(188, 188, 188);\n"
"border-radius:15\n"
""));
        label_4->setFrameShape(QFrame::StyledPanel);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(170, 120, 21, 481));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(180, 100, 331, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(500, 120, 21, 481));
        line_6->setFrameShadow(QFrame::Sunken);
        line_6->setFrameShape(QFrame::VLine);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(180, 600, 331, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        comboBox->raise();
        cikti->raise();
        label->raise();
        label_2->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        DCB1->raise();
        speed->raise();
        duplex->raise();
        link->raise();
        label_6->raise();
        label_7->raise();
        DCB2->raise();
        DCB3->raise();
        DCB4->raise();
        DCB5->raise();
        DCB6->raise();
        DCB7->raise();
        label_3->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        duplex_2->raise();
        label_14->raise();
        speed_2->raise();
        link_2->raise();
        label_15->raise();
        speed_3->raise();
        duplex_3->raise();
        link_3->raise();
        speed_4->raise();
        label_16->raise();
        duplex_4->raise();
        link_4->raise();
        speed_5->raise();
        label_17->raise();
        duplex_5->raise();
        link_5->raise();
        speed_6->raise();
        label_18->raise();
        duplex_6->raise();
        link_6->raise();
        speed_7->raise();
        label_19->raise();
        duplex_7->raise();
        link_7->raise();
        label_4->raise();
        line_4->raise();
        line_5->raise();
        line_7->raise();
        line_6->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DPPCATCONTROL", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Select device", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED02", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED03", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED04", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED05", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED06", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED09", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED26", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED27", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "ED28", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:40; font-style:italic;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ekrem Iscan</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "Ekrem Iscan", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:72; font-style:italic;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">DPP Cat kablo kontrol programi</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        speed->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        duplex->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        link->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "DCB1", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "DCB1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:72; font-style:italic;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400; font-style:normal;\">FULL</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "DCB2", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "DCB3", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "DCB4", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "DCB5", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "DCB6", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "DCB7", 0, QApplication::UnicodeUTF8));
        duplex_2->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "DCB2", 0, QApplication::UnicodeUTF8));
        speed_2->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        link_2->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "DCB3", 0, QApplication::UnicodeUTF8));
        speed_3->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        duplex_3->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        link_3->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        speed_4->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "DCB4", 0, QApplication::UnicodeUTF8));
        duplex_4->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        link_4->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        speed_5->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "DCB5", 0, QApplication::UnicodeUTF8));
        duplex_5->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        link_5->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        speed_6->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "DCB6", 0, QApplication::UnicodeUTF8));
        duplex_6->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        link_6->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        speed_7->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "DCB7", 0, QApplication::UnicodeUTF8));
        duplex_7->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        link_7->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:72; font-style:italic;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400; font-style:normal;\">DCB DETAILS</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
