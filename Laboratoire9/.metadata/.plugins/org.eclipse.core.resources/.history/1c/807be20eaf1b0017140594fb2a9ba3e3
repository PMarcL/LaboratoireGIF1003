/**
 * \file Employe.h
 * \brief Classe de base abstraite Employe
 * \author etudiant
 * \version 0.1
 * \date 2015-03-19
 */
#ifndef EMPLOYE_H_
#define EMPLOYE_H_

#include "Date.h"
#include "ContratException.h"

namespace labo10 {
/**
 * \class Employe
 * \brief Classe de base
 */
class Employe {
public:

	Employe(const std::string& p_nom, const std::string& p_prenom, util::Date p_dateNaissance, int p_codeDepartement);
	virtual ~Employe() {
	}
	;

	//Accesseurs
	std::string reqPrenom() const;
	std::string reqNomFamille() const;
	int reqCodeDepartement() const;
	util::Date reqDateNaissance() const;

	virtual double gains() const = 0;
	virtual std::string reqEmployeFormate() const = 0;

private:
	void verifieInvariant() const;

	std::string m_nomFamille;
	std::string m_prenom;
	int m_codeDepartement;
	util::Date m_dateNaissance;
};

}
#endif /* EMPLOYE_H_ */
