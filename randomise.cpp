/*
 * randomise.cpp
 *
 *  Created on: 28 févr. 2018
 *      Author: vialj
 */

#include "randomise.h"

//Retourne un chiffre aléatoire entre a et b
//Cette fonction a été tirée d'OpenClassroom
int randomise::rand_a_b(int a, int b) {

	return (rand()%b) +a;

}

