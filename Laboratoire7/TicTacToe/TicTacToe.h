/**
 * \file TicTacToe.h
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-02-24
 */

#ifndef TICTACTOE_H_
#define TICTACTOE_H_

#include <iostream>
#include <string>

namespace labo {

class TicTacToe {
public:
	TicTacToe();

	void placerMarque(int, int, char);
	bool peutContinuerAJouer() const;

	friend std::ostream& operator<<(std::ostream&, const TicTacToe&);
private:
	std::string reqPlateauFormate() const;
	const static int TAILLE_PLATEAU = 3;

	char m_plateau[TAILLE_PLATEAU][TAILLE_PLATEAU];
};

} /* namespace labo */

#endif /* TICTACTOE_H_ */