/**
 * \file Sphere.h
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-03-17
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include <string>

namespace labo8 {

class Sphere {
public:
	Sphere();
	Sphere(double rayon);
	virtual ~Sphere();
	double reqRayon() const;
	void asgRayon(double rayon);
	double reqVolume() const;
	std::string reqSphereFormate() const;
private:
	void verifieInvariant() const;

	double m_rayon;
};

} /* namespace labo8 */

#endif /* SPHERE_H_ */