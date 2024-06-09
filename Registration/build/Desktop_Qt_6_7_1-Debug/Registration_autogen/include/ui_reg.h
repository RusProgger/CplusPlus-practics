/********************************************************************************
** Form generated from reading UI file 'reg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_H
#define UI_REG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reg
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *reg)
    {
        if (reg->objectName().isEmpty())
            reg->setObjectName("reg");
        reg->resize(800, 600);
        centralwidget = new QWidget(reg);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 190, 781, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 250, 781, 41));
        lineEdit_2->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 330, 341, 51));
        QFont font1;
        font1.setPointSize(13);
        font1.setItalic(true);
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        reg->setCentralWidget(centralwidget);
        menubar = new QMenuBar(reg);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        reg->setMenuBar(menubar);
        statusbar = new QStatusBar(reg);
        statusbar->setObjectName("statusbar");
        reg->setStatusBar(statusbar);

        retranslateUi(reg);

        QMetaObject::connectSlotsByName(reg);
    } // setupUi

    void retranslateUi(QMainWindow *reg)
    {
        reg->setWindowTitle(QCoreApplication::translate("reg", "Registration", nullptr));
        lineEdit->setText(QCoreApplication::translate("reg", "   \320\233\320\276\320\263\320\270\320\275:", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("reg", "   \320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pushButton->setText(QCoreApplication::translate("reg", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reg: public Ui_reg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_H
