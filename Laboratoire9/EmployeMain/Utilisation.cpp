/**
 * \file Utilisation.cpp
 * \brief Programme principal pour la création des objets des classes enfants dela classe parent Employe.
 * \author etudiant
 * \version 0.1
 * \date 2014-11-13
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "Employe.h"
#include "Patron.h"
#include "EmployeCommission.h"
#include "EmployeHoraire.h"
#include "time.h"

using namespace std;
using namespace labo10;
using namespace util;

int determineMois();  // Détermine le mois courant

int main() {
	Patron unPatron("Soucy", "Jean", Date(12, 5, 1976), 12, 800.00);
	EmployeCommission unEmployeCommisssion("Sue", "Jones", Date(12, 3, 1976), 14, 200.0, 3.0, 150);
	EmployeHoraire unEmployeHoraire("Price", "Karen", Date(12, 6, 1976), 15, 13.75, 40);

	vector<Employe*> entreprise;
	entreprise.push_back(&unPatron);
	entreprise.push_back(&unEmployeCommisssion);
	entreprise.push_back(&unEmployeHoraire);

	int moisCourant = determineMois();
	for (int i = 0; i < 3; i++) {
		if (entreprise[i]->reqDateNaissance().reqMois() == moisCourant) {
			cout << entreprise[i]->reqEmployeFormate() << " a gagné " << entreprise[i]->gains() + 100.0 << endl;
		} else {
			cout << entreprise[i]->reqEmployeFormate() << " a gagné " << entreprise[i]->gains() << endl;
		}
	}
	return 0;
}

/**
 * \brief Détermination du mois courant
 * \return le mois courant
 */
int determineMois() {
	time_t tempsCourant;
	char chaineMois[3];

	time(&tempsCourant);
	strftime(chaineMois, 3, "%m",      // strftime %m Le numéro du mois (entre 01 et 12)
			localtime(&tempsCourant));    // date et heure courante
	return atoi(chaineMois);      // atoi conversion d'un string en entier
}

