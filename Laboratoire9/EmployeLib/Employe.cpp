/**
 * \file Employe.cpp
 * \brief Implémentation de la classe de base abstraite Employe.
 *        Note: aucune définition de la méthode virtuelle pure.
 * \author etudiant
 * \version 0.1
 * \date 2015-03-19
 */

#include "Employe.h"
#include <iostream>

using namespace std;
using namespace util;
namespace labo10 {
/**
 * \brief Constructeur avec paramètre.
 *        Création d'un objet Employe à partir de valeurs passées en paramètres.
 * \param[in] p_nom est un string qui représente le nom de l'employé.
 * \param[in] p_prenom est un string qui représente le prénom de l'employé.
 * \param[in] p_dateNaissance est une date qui représente la date de naissance de l'employé.
 * \param[in] p_codeDepartement est un entier qui représente le code départemental de l'employé
 * \pre p_nom non vide
 * \pre p_prenom non vide
 * \pre p_codeDepartement supérieur à 0
 * \post m_nomFamille prend la valeur de p_nom
 * \post m_prenom prend la valeur de p_prenom
 * \post m_codeDepartement prend la valeur de p_codeDepartement
 * \post m_dateNaissance prend la valeur de p_dateNaissance
 */
Employe::Employe(const std::string& p_nom, const std::string& p_prenom, Date p_dateNaissance, int p_codeDepartement) :
		m_nomFamille(p_nom), m_prenom(p_prenom), m_codeDepartement(p_codeDepartement), m_dateNaissance(p_dateNaissance) {
	PRECONDITION(!p_nom.empty());
	PRECONDITION(!p_prenom.empty());
	PRECONDITION(p_codeDepartement > 0);
	POSTCONDITION(m_nomFamille == p_nom);
	POSTCONDITION(m_prenom == p_prenom);
	POSTCONDITION(m_codeDepartement == p_codeDepartement);
	POSTCONDITION(m_dateNaissance == p_dateNaissance);
	INVARIANTS();
}

/**
 * \brief Accesseur prénom de l'employé
 * \return le prénom
 */
std::string Employe::reqPrenom() const {
	return m_prenom;
}

/**
 * \brief Accesseur nom de l'employé
 * \return le nom de famille
 */
std::string Employe::reqNomFamille() const {
	return m_nomFamille;
}

/**
 * \brief Accesseur code département de l'employé
 * \return le code de département
 */
int Employe::reqCodeDepartement() const {
	return m_codeDepartement;
}

/**
 * \brief Accesseur date de naissance de l'employé
 * \return la date de naissance
 */
util::Date Employe::reqDateNaissance() const {
	return m_dateNaissance;
}

/**
 * \brief Lit la paie de l'employé.
 *         methode virtuelle
 * \return les gains de l'employé
 */
double Employe::gains() const {
	return 0;
}
/**
 * \brief Affichage du nom et prénom de l'employé.
 * \return Le nom et prénom de l'employé.
 */
std::string Employe::reqEmployeFormate() const {
	return m_prenom + " " + m_nomFamille;
}

void Employe::verifieInvariant() const {
	INVARIANT(!m_nomFamille.empty());
	INVARIANT(!m_prenom.empty());
	INVARIANT(m_codeDepartement > 0);
}

bool Employe::operator ==(const Employe& e) const {
	return m_nomFamille == e.m_nomFamille && m_prenom == e.m_prenom && m_codeDepartement == e.m_codeDepartement
			&& m_dateNaissance == e.m_dateNaissance;
}

}
