/**
 * \file NombreRationnel.h
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-02-17
 */

#ifndef NOMBRERATIONNEL_H_
#define NOMBRERATIONNEL_H_

#include <string>

namespace labo {

class NombreRationnel {
public:
	NombreRationnel(int, int);

	std::string reqFormate() const;
	NombreRationnel operator*(const NombreRationnel& fractionDroite) const;
	NombreRationnel operator/(const NombreRationnel& fractionDroite) const;
	bool operator==(const NombreRationnel& fractionDroite) const;

private:
	int PGCD(int, int);

	int m_num;
	int m_denom;
};

} /* namespace labo */

#endif /* NOMBRERATIONNEL_H_ */
