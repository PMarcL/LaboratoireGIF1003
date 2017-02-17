/**
 * \file Temps.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-02-12
 */

#include "Temps.h"
#include <ctime>
#include <sstream>
#include <iostream>

using namespace std;

namespace labo {

int Temps::nombreInstances = 0;

Temps::Temps() {
	nombreInstances++;

	time_t timer;
	struct tm *tempsLocal;

	time(&timer);
	tempsLocal = localtime(&timer);

	m_heure = tempsLocal->tm_hour;
	m_minute = tempsLocal->tm_min;
	m_seconde = tempsLocal->tm_sec;
}

Temps::Temps(int heure, int minute, int seconde) {
	nombreInstances++;

	asgHeure(heure);
	asgMinute(minute);
	asgSeconde(seconde);
}

std::string Temps::reqTempsFormate() const {
	ostringstream os;

	if (m_heure < 10) {
		os << "0" << m_heure;
	} else {
		os << m_heure;
	}
	os << ":";

	if (m_minute < 10) {
		os << "0" << m_minute;
	} else {
		os << m_minute;
	}
	os << ":";

	if (m_seconde < 10) {
		os << "0" << m_seconde;
	} else {
		os << m_seconde;
	}

	return os.str();
}

int Temps::reqHeure() const {
	return m_heure;
}

void Temps::asgHeure(int heure) {
	if (heure < 0 || heure > 23) {
		m_heure = 12;
	} else {
		m_heure = heure;
	}
}

int Temps::reqMinute() const {
	return m_minute;
}

void Temps::asgMinute(int minute) {
	if (minute < 0 || minute > 59) {
		m_minute = 59;
	} else {
		m_minute = minute;
	}
}

int Temps::reqSeconde() const {
	return m_seconde;
}

void Temps::asgSeconde(int seconde) {
	if (seconde < 0 || seconde > 59) {
		m_seconde = 59;
	} else {
		m_seconde = seconde;
	}
}

Temps::~Temps() {
	nombreInstances--;
}

int Temps::reqNombreInstances() {
	return nombreInstances;
}

void Temps::tic() {
	m_seconde++;

	if (m_seconde > 59) {
		m_seconde = 0;
		m_minute++;
		if (m_minute > 59) {
			m_minute = 0;
			m_heure++;
			if (m_heure > 23) {
				m_heure = 0;
			}
		}
	}
}

std::ostream& operator<<(std::ostream& os, Temps& t) {
	os << t.reqTempsFormate();
	return os;
}

} /* namespace labo */
