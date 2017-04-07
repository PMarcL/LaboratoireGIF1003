#ifndef EMPLOYECOMMISSIONDIALOG_H
#define EMPLOYECOMMISSIONDIALOG_H

#include <QtGui/QDialog>
#include "ui_employecommissiondialog.h"
#include "Date.h"

enum TypeDialog {
	COMMISSION, PATRON
};

class EmployeCommissionDialog: public QDialog {
	Q_OBJECT

public:
	EmployeCommissionDialog(QWidget *parent = 0, TypeDialog t = COMMISSION);
	~EmployeCommissionDialog();

	QString reqNom() const;
	QString reqPrenom() const;
	util::Date reqDateNaissance() const;
	double reqSalaire() const;
	double reqCommission() const;
	int reqQuantite() const;

private slots:
	void validerFormulaire();

private:
	Ui::EmployeCommissionDialogClass ui;
};

#endif // EMPLOYECOMMISSIONDIALOG_H