/*
 * randomise.cpp
 *
 *  Created on: 28 f�vr. 2018
 *      Author: vialj
 */

#include "randomise.h"

//Retourne un chiffre al�atoire entre a et b
//Cette fonction a �t� tir�e d'OpenClassroom
int randomise::rand_a_b(int a, int b) {

	return (rand()%b) +a;

}

