/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(510, 420, 141, 51));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 410, 151, 71));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 130, 121, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 70, 591, 151));
        label->setTextFormat(Qt::RichText);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 200, 531, 81));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 300, 101, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 290, 531, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\346\214\211\346\234\210\344\273\275\345\210\206\347\261\273", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\225\264\347\220\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\273\230\350\256\244\347\233\256\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\200\350\210\254\345\275\242\345\246\202\357\274\232WeChat Fileswxid_XXXXXXXXXXXXXXFileStorageMsgAttach", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "(\350\257\267\345\212\241\345\277\205\347\241\256\350\256\244\351\200\211\346\213\251\344\272\206\346\255\243\347\241\256\347\232\204\350\267\257\345\276\204\357\274\2141.0\347\211\210\346\234\254\345\271\266\344\270\215\344\277\235\350\257\201\344\270\215\345\217\257\351\242\204\346\226\231\347\232\204\351\224\231\350\257\257\344\270\215\344\274\232\345\207\272\347\216\260\357\274\211", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\233\256\346\240\207\347\233\256\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\270\272\351\201\277\345\205\215\344\270\215\345\217\257\351\242\204\346\226\231\347\232\204\346\203\205\345\206\265\345\207\272\347\216\260\357\274\214\350\257\267\345\260\275\351\207\217\351\200\211\346\213\251\345\205\250\350\213\261\346\226\207\350\267\257\345\276\204\357\274\214\345\271\266\344\275\277\347\224\250\346\226\260\345\273\272\346\226\207\344\273\266\345\244\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
