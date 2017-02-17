/**
 * \file main.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-02-12
 */

#include <iostream>
#include "Temps.h"
#include <unistd.h>

using namespace std;
using namespace labo;

int main() {
	Temps temps1(23, 59, 15);

	temps1.tic();
	cout << temps1 << endl;

	return 0;
}

