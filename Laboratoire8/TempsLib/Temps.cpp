/**
 * \file Temps.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-03-17
 */

#include "Temps.h"
#include "ContratException.h"

namespace labo8 {

unsigned int Temps::nombreInstance = 0;

Temps::Temps(int heure, int minute, int seconde) :
		m_heure(heure), m_minute(minute), m_seconde(seconde) {
	nombreInstance++;
	PRECONDITION(heure >= 0 && heure < 24);
}

Temps::~Temps() {
	nombreInstance--;
}

int Temps::reqHeure() const {
	return m_heure;
}

void Temps::asgHeure(int heure) {
	m_heure = heure;
}

int Temps::reqMinute() const {
	return m_minute;
}

void Temps::asgMinute(int minute) {
	m_minute = minute;
}

int Temps::reqSeconde() const {
	return m_seconde;
}

void Temps::asgSeconde(int seconde) {
	m_seconde = seconde;
}

uint Temps::reqNombreInstance() {
	return nombreInstance;
}
} /* namespace labo8 */

