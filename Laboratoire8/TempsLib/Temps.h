/**
 * \file Temps.h
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-03-17
 */

#ifndef TEMPS_H_
#define TEMPS_H_

namespace labo8 {

typedef unsigned int uint;

class Temps {
public:
	Temps(int, int, int);
	~Temps();
	int reqHeure() const;
	void asgHeure(int heure);
	int reqMinute() const;
	void asgMinute(int minute);
	int reqSeconde() const;
	void asgSeconde(int seconde);

	static uint reqNombreInstance();
private:
	static uint nombreInstance;

	int m_heure;
	int m_minute;
	int m_seconde;
};

} /* namespace labo8 */

#endif /* TEMPS_H_ */
