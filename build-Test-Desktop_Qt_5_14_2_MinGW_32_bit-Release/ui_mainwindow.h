/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
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
    QListWidget *listWidget;
    QLineEdit *dpEdit;
    QLineEdit *evaEdit;
    QLineEdit *apEdit;
    QLineEdit *drEdit;
    QLineEdit *accEdit;
    QLineEdit *costEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 160, 751, 381));
        dpEdit = new QLineEdit(centralwidget);
        dpEdit->setObjectName(QString::fromUtf8("dpEdit"));
        dpEdit->setGeometry(QRect(30, 120, 113, 20));
        evaEdit = new QLineEdit(centralwidget);
        evaEdit->setObjectName(QString::fromUtf8("evaEdit"));
        evaEdit->setGeometry(QRect(152, 120, 113, 20));
        apEdit = new QLineEdit(centralwidget);
        apEdit->setObjectName(QString::fromUtf8("apEdit"));
        apEdit->setGeometry(QRect(394, 120, 113, 20));
        drEdit = new QLineEdit(centralwidget);
        drEdit->setObjectName(QString::fromUtf8("drEdit"));
        drEdit->setGeometry(QRect(273, 120, 113, 20));
        accEdit = new QLineEdit(centralwidget);
        accEdit->setObjectName(QString::fromUtf8("accEdit"));
        accEdit->setGeometry(QRect(514, 120, 113, 20));
        costEdit = new QLineEdit(centralwidget);
        costEdit->setObjectName(QString::fromUtf8("costEdit"));
        costEdit->setGeometry(QRect(635, 120, 120, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 100, 47, 13));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 100, 47, 13));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 100, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 100, 47, 13));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(560, 100, 47, 13));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(680, 100, 47, 13));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 60, 75, 23));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(190, 60, 171, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        dpEdit->setText(QCoreApplication::translate("MainWindow", "380", nullptr));
        evaEdit->setText(QCoreApplication::translate("MainWindow", "600", nullptr));
        apEdit->setText(QCoreApplication::translate("MainWindow", "305", nullptr));
        drEdit->setText(QCoreApplication::translate("MainWindow", "250", nullptr));
        accEdit->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        costEdit->setText(QCoreApplication::translate("MainWindow", "800", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Eva", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "DR", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "AP", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ACC", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Cost", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "AP", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "DP", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Eva", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "DR", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "ACC", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Cost", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
