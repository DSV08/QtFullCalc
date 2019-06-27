/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButtonClear;
    QPushButton *pushButton9;
    QPushButton *pushButton8;
    QPushButton *pushButtonMais;
    QPushButton *pushButton7;
    QPushButton *pushButton6;
    QPushButton *pushButton5;
    QPushButton *pushButtonMenos;
    QPushButton *pushButton4;
    QPushButton *pushButton3;
    QPushButton *pushButton2;
    QPushButton *pushButtonVezes;
    QPushButton *pushButton1;
    QPushButton *pushButton0;
    QPushButton *pushButtonPoint;
    QPushButton *pushButtonDividir;
    QPushButton *pushButtonIgual;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(338, 424);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 50));
        lineEdit_2->setSizeIncrement(QSize(0, 50));
        lineEdit_2->setBaseSize(QSize(0, 50));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 100));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonClear = new QPushButton(centralWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonClear->setFont(font1);

        gridLayout->addWidget(pushButtonClear, 0, 0, 1, 1);

        pushButton9 = new QPushButton(centralWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        pushButton9->setFont(font1);

        gridLayout->addWidget(pushButton9, 0, 1, 1, 1);

        pushButton8 = new QPushButton(centralWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        pushButton8->setFont(font1);

        gridLayout->addWidget(pushButton8, 0, 2, 1, 1);

        pushButtonMais = new QPushButton(centralWidget);
        pushButtonMais->setObjectName(QString::fromUtf8("pushButtonMais"));
        pushButtonMais->setFont(font1);

        gridLayout->addWidget(pushButtonMais, 0, 3, 1, 1);

        pushButton7 = new QPushButton(centralWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        pushButton7->setFont(font1);

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton6 = new QPushButton(centralWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        pushButton6->setFont(font1);

        gridLayout->addWidget(pushButton6, 1, 1, 1, 1);

        pushButton5 = new QPushButton(centralWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        pushButton5->setFont(font1);

        gridLayout->addWidget(pushButton5, 1, 2, 1, 1);

        pushButtonMenos = new QPushButton(centralWidget);
        pushButtonMenos->setObjectName(QString::fromUtf8("pushButtonMenos"));
        pushButtonMenos->setFont(font1);

        gridLayout->addWidget(pushButtonMenos, 1, 3, 1, 1);

        pushButton4 = new QPushButton(centralWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        pushButton4->setFont(font1);

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton3 = new QPushButton(centralWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        pushButton3->setFont(font1);

        gridLayout->addWidget(pushButton3, 2, 1, 1, 1);

        pushButton2 = new QPushButton(centralWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setFont(font1);

        gridLayout->addWidget(pushButton2, 2, 2, 1, 1);

        pushButtonVezes = new QPushButton(centralWidget);
        pushButtonVezes->setObjectName(QString::fromUtf8("pushButtonVezes"));
        pushButtonVezes->setFont(font1);

        gridLayout->addWidget(pushButtonVezes, 2, 3, 1, 1);

        pushButton1 = new QPushButton(centralWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setFont(font1);

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton0 = new QPushButton(centralWidget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));
        pushButton0->setFont(font1);

        gridLayout->addWidget(pushButton0, 3, 1, 1, 1);

        pushButtonPoint = new QPushButton(centralWidget);
        pushButtonPoint->setObjectName(QString::fromUtf8("pushButtonPoint"));
        pushButtonPoint->setFont(font1);

        gridLayout->addWidget(pushButtonPoint, 3, 2, 1, 1);

        pushButtonDividir = new QPushButton(centralWidget);
        pushButtonDividir->setObjectName(QString::fromUtf8("pushButtonDividir"));
        pushButtonDividir->setFont(font1);

        gridLayout->addWidget(pushButtonDividir, 3, 3, 1, 1);

        pushButtonIgual = new QPushButton(centralWidget);
        pushButtonIgual->setObjectName(QString::fromUtf8("pushButtonIgual"));
        pushButtonIgual->setFont(font1);

        gridLayout->addWidget(pushButtonIgual, 4, 0, 1, 4);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 338, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButtonClear->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButton9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButtonMais->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButtonMenos->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButtonVezes->setText(QApplication::translate("MainWindow", "x", nullptr));
        pushButton1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButtonPoint->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButtonDividir->setText(QApplication::translate("MainWindow", "\303\267", nullptr));
        pushButtonIgual->setText(QApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
