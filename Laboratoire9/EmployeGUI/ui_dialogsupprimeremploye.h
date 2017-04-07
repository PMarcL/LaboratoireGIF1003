/********************************************************************************
** Form generated from reading UI file 'dialogsupprimeremploye.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSUPPRIMEREMPLOYE_H
#define UI_DIALOGSUPPRIMEREMPLOYE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogSupprimerEmployeClass
{
public:
    QLineEdit *nomLineEdit;
    QLineEdit *prenomLineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *okBouton;
    QPushButton *cancelBouton;

    void setupUi(QDialog *DialogSupprimerEmployeClass)
    {
        if (DialogSupprimerEmployeClass->objectName().isEmpty())
            DialogSupprimerEmployeClass->setObjectName(QString::fromUtf8("DialogSupprimerEmployeClass"));
        DialogSupprimerEmployeClass->resize(363, 177);
        nomLineEdit = new QLineEdit(DialogSupprimerEmployeClass);
        nomLineEdit->setObjectName(QString::fromUtf8("nomLineEdit"));
        nomLineEdit->setGeometry(QRect(200, 20, 113, 27));
        prenomLineEdit = new QLineEdit(DialogSupprimerEmployeClass);
        prenomLineEdit->setObjectName(QString::fromUtf8("prenomLineEdit"));
        prenomLineEdit->setGeometry(QRect(200, 70, 113, 27));
        label = new QLabel(DialogSupprimerEmployeClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 55, 17));
        label_2 = new QLabel(DialogSupprimerEmployeClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 80, 55, 17));
        okBouton = new QPushButton(DialogSupprimerEmployeClass);
        okBouton->setObjectName(QString::fromUtf8("okBouton"));
        okBouton->setGeometry(QRect(20, 130, 141, 27));
        cancelBouton = new QPushButton(DialogSupprimerEmployeClass);
        cancelBouton->setObjectName(QString::fromUtf8("cancelBouton"));
        cancelBouton->setGeometry(QRect(180, 130, 161, 27));

        retranslateUi(DialogSupprimerEmployeClass);
        QObject::connect(cancelBouton, SIGNAL(clicked()), DialogSupprimerEmployeClass, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogSupprimerEmployeClass);
    } // setupUi

    void retranslateUi(QDialog *DialogSupprimerEmployeClass)
    {
        DialogSupprimerEmployeClass->setWindowTitle(QApplication::translate("DialogSupprimerEmployeClass", "DialogSupprimerEmploye", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogSupprimerEmployeClass", "Nom", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogSupprimerEmployeClass", "Pr\303\251nom", 0, QApplication::UnicodeUTF8));
        okBouton->setText(QApplication::translate("DialogSupprimerEmployeClass", "Ok", 0, QApplication::UnicodeUTF8));
        cancelBouton->setText(QApplication::translate("DialogSupprimerEmployeClass", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogSupprimerEmployeClass: public Ui_DialogSupprimerEmployeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSUPPRIMEREMPLOYE_H
