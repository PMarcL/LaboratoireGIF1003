/**
 * \file TempsTest.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-03-17
 */

#include "Temps.h"
#include "ContratException.h"
#include <gtest/gtest.h>

using namespace labo8;

TEST(Temps, ConstructeurAvecParam_valides) {
	int heure = 5;
	int minute = 45;
	int seconde = 32;

	Temps test(heure, minute, seconde);

	ASSERT_EQ(heure, test.reqHeure());
	ASSERT_EQ(minute, test.reqMinute());
	ASSERT_EQ(seconde, test.reqSeconde());
}

//TEST(Temps, ConstructeurAvecParam_invalides) {
//	int heure = 25;
//	int minute = 45;
//	int seconde = 32;
//
//	ASSERT_THROW(Temps(heure, minute, seconde), PreconditionException);
//}

TEST(Temps, DevraitCompterLeNombreDInstance) {
	unsigned int nombreInstance = 1;
	Temps test(12, 34, 54);
	ASSERT_EQ(nombreInstance, Temps::reqNombreInstance());
}
