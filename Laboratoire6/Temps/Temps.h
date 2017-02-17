/**
 * \file Temps.h
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-02-12
 */

#ifndef TEMPS_H_
#define TEMPS_H_

#include <string>
#include <iostream>

namespace labo {

class Temps {
public:
	Temps();
	Temps(int, int, int);
	~Temps();

	void tic();

	int reqHeure() const;
	void asgHeure(int heure);
	int reqMinute() const;
	void asgMinute(int minute);
	int reqSeconde() const;
	void asgSeconde(int seconde);

	friend std::ostream& operator<<(std::ostream&, Temps&);

	static int reqNombreInstances();
private:
	std::string reqTempsFormate() const;
	int m_heure;
	int m_minute;
	int m_seconde;

	static int nombreInstances;
};

} /* namespace labo */

#endif /* TEMPS_H_ */
