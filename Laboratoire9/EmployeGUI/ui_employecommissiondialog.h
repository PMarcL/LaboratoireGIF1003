/********************************************************************************
** Form generated from reading UI file 'employecommissiondialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYECOMMISSIONDIALOG_H
#define UI_EMPLOYECOMMISSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EmployeCommissionDialogClass
{
public:
    QPushButton *boutonQuitter;
    QPushButton *okBouton;
    QLineEdit *prenomLineEdit;
    QLineEdit *nomLineEdit;
    QSpinBox *jourSpinBox;
    QSpinBox *moisSpinBox;
    QSpinBox *anneeSpinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *quantiteSpinBox;
    QDoubleSpinBox *salaireDoubleSpinBox;
    QDoubleSpinBox *commissionDoubleSpinBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *EmployeCommissionDialogClass)
    {
        if (EmployeCommissionDialogClass->objectName().isEmpty())
            EmployeCommissionDialogClass->setObjectName(QString::fromUtf8("EmployeCommissionDialogClass"));
        EmployeCommissionDialogClass->resize(400, 300);
        boutonQuitter = new QPushButton(EmployeCommissionDialogClass);
        boutonQuitter->setObjectName(QString::fromUtf8("boutonQuitter"));
        boutonQuitter->setGeometry(QRect(210, 260, 171, 27));
        okBouton = new QPushButton(EmployeCommissionDialogClass);
        okBouton->setObjectName(QString::fromUtf8("okBouton"));
        okBouton->setGeometry(QRect(20, 260, 171, 27));
        prenomLineEdit = new QLineEdit(EmployeCommissionDialogClass);
        prenomLineEdit->setObjectName(QString::fromUtf8("prenomLineEdit"));
        prenomLineEdit->setGeometry(QRect(200, 20, 181, 27));
        nomLineEdit = new QLineEdit(EmployeCommissionDialogClass);
        nomLineEdit->setObjectName(QString::fromUtf8("nomLineEdit"));
        nomLineEdit->setGeometry(QRect(200, 70, 181, 27));
        jourSpinBox = new QSpinBox(EmployeCommissionDialogClass);
        jourSpinBox->setObjectName(QString::fromUtf8("jourSpinBox"));
        jourSpinBox->setGeometry(QRect(200, 120, 49, 27));
        jourSpinBox->setMinimum(1);
        jourSpinBox->setMaximum(31);
        jourSpinBox->setValue(1);
        moisSpinBox = new QSpinBox(EmployeCommissionDialogClass);
        moisSpinBox->setObjectName(QString::fromUtf8("moisSpinBox"));
        moisSpinBox->setGeometry(QRect(260, 120, 49, 27));
        moisSpinBox->setMinimum(1);
        moisSpinBox->setMaximum(12);
        anneeSpinBox = new QSpinBox(EmployeCommissionDialogClass);
        anneeSpinBox->setObjectName(QString::fromUtf8("anneeSpinBox"));
        anneeSpinBox->setGeometry(QRect(328, 120, 51, 27));
        anneeSpinBox->setMinimum(1970);
        anneeSpinBox->setMaximum(2017);
        label = new QLabel(EmployeCommissionDialogClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 20, 51, 20));
        label_2 = new QLabel(EmployeCommissionDialogClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 70, 31, 17));
        label_3 = new QLabel(EmployeCommissionDialogClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 120, 91, 20));
        quantiteSpinBox = new QSpinBox(EmployeCommissionDialogClass);
        quantiteSpinBox->setObjectName(QString::fromUtf8("quantiteSpinBox"));
        quantiteSpinBox->setGeometry(QRect(200, 220, 49, 27));
        salaireDoubleSpinBox = new QDoubleSpinBox(EmployeCommissionDialogClass);
        salaireDoubleSpinBox->setObjectName(QString::fromUtf8("salaireDoubleSpinBox"));
        salaireDoubleSpinBox->setGeometry(QRect(200, 160, 62, 27));
        commissionDoubleSpinBox = new QDoubleSpinBox(EmployeCommissionDialogClass);
        commissionDoubleSpinBox->setObjectName(QString::fromUtf8("commissionDoubleSpinBox"));
        commissionDoubleSpinBox->setGeometry(QRect(200, 190, 62, 27));
        label_4 = new QLabel(EmployeCommissionDialogClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 160, 55, 17));
        label_5 = new QLabel(EmployeCommissionDialogClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 200, 81, 20));
        label_6 = new QLabel(EmployeCommissionDialogClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 230, 55, 17));

        retranslateUi(EmployeCommissionDialogClass);
        QObject::connect(boutonQuitter, SIGNAL(clicked()), EmployeCommissionDialogClass, SLOT(close()));

        QMetaObject::connectSlotsByName(EmployeCommissionDialogClass);
    } // setupUi

    void retranslateUi(QDialog *EmployeCommissionDialogClass)
    {
        EmployeCommissionDialogClass->setWindowTitle(QApplication::translate("EmployeCommissionDialogClass", "EmployeCommissionDialog", 0, QApplication::UnicodeUTF8));
        boutonQuitter->setText(QApplication::translate("EmployeCommissionDialogClass", "Cancel", 0, QApplication::UnicodeUTF8));
        okBouton->setText(QApplication::translate("EmployeCommissionDialogClass", "Ok", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EmployeCommissionDialogClass", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EmployeCommissionDialogClass", "Nom:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EmployeCommissionDialogClass", "Date naissance:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EmployeCommissionDialogClass", "Salaire :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EmployeCommissionDialogClass", "Commission :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("EmployeCommissionDialogClass", "Quantit\303\251:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EmployeCommissionDialogClass: public Ui_EmployeCommissionDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYECOMMISSIONDIALOG_H
