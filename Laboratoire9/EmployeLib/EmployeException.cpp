/**
 * \file EmployeException.cpp
 * \brief 
 * \author Pierre-Marc Levasseur
 * \date 2017-04-07
 */

#include "EmployeException.h"

using namespace std;

namespace labo10 {

EmployeException::EmployeException(string message) :
		runtime_error(message) {
}

EmployeAbsentException::EmployeAbsentException(string message) :
		EmployeException(message) {
}

} /* namespace labo10 */
