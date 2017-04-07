/**
 * \file Entreprise.h
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-03-29
 */

#ifndef ENTREPRISE_H_
#define ENTREPRISE_H_

#include <vector>
#include "Employe.h"

namespace labo10 {

class Entreprise {
public:
	Entreprise();
	virtual ~Entreprise();

	bool employeEstDejaPresent(const Employe& employe) const;

	void ajouterEmploye(Employe* employe);
	std::string reqEntrepriseFormate() const;

	void supprimerEmploye(const std::string& nom, const std::string& prenom);

private:
	Entreprise(const Entreprise&);
	Entreprise& operator=(const Entreprise&);

	std::vector<Employe*> m_employes;
};

} /* namespace labo10 */

#endif /* ENTREPRISE_H_ */
