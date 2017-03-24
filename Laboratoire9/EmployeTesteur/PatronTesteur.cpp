/**
 * \file PatronTesteur.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-03-24
 */

#include "Patron.h"
#include <gtest/gtest.h>

using namespace labo10;
using namespace std;
using namespace util;

TEST(Patron, Constructeur) {
	Patron p("nom", "prenom", Date(24, 2, 1990), 13, 800.0);
}

