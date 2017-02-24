/**
 * \file main.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-02-24
 */

#include "TicTacToe.h"

using namespace std;
using namespace labo;

int main() {
	TicTacToe jeu;

	jeu.placerMarque(0, 0, 'X');
	jeu.placerMarque(1, 0, 'X');
	jeu.placerMarque(2, 0, 'X');

	cout << jeu << endl;
	cout << jeu.peutContinuerAJouer() << endl;

	return 0;
}

