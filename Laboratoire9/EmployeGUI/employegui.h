#ifndef EMPLOYEGUI_H
#define EMPLOYEGUI_H

#include <QtGui/QMainWindow>
#include "ui_employegui.h"
#include "Entreprise.h"

class EmployeGUI: public QMainWindow {
	Q_OBJECT

public:
	EmployeGUI(QWidget *parent = 0);
	~EmployeGUI();

private slots:
	void dialogCommis();
	void dialogSupprimerEmploye();

private:
	labo10::Entreprise m_entreprise;
	Ui::EmployeGUIClass ui;
};

#endif // EMPLOYEGUI_H