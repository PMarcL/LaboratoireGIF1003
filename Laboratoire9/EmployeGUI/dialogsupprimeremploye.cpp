#include "dialogsupprimeremploye.h"

DialogSupprimerEmploye::DialogSupprimerEmploye(QWidget *parent) :
		QDialog(parent) {
	ui.setupUi(this);
	QObject::connect(ui.okBouton, SIGNAL(clicked()), this, SLOT(validerFormulaire()));
}

DialogSupprimerEmploye::~DialogSupprimerEmploye() {

}

QString DialogSupprimerEmploye::reqNom() const {
	return ui.nomLineEdit->text();
}

QString DialogSupprimerEmploye::reqPrenom() const {
	return ui.prenomLineEdit->text();
}

void DialogSupprimerEmploye::validerFormulaire() {
	accept();
}
