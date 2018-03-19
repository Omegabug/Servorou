/*
 * tache.cpp
 *
 *  Created on: 28 f�vr. 2018
 *      Author: vialj
 */


#include "tache.h"
//Constructeur de base
tache::tache(string nom,string type,int ef) {
	nomTache=nom;
	typeEffort=type;
	effort=ef;
}

tache::tache(string nom){
	srand(time(NULL));
	nomTache=nom;
	int r;
	r=randomise::rand_a_b(1,3);
	//On tire al�atoirement le type de tache et l'effort n�cessaire pour le
	//r�aliser

	switch(r){
		case 1:
			typeEffort="CPU";
			effort=randomise::rand_a_b(1,1000);
			break;
		case 2:
			typeEffort="GPU";
			effort=randomise::rand_a_b(1,1000);
			break;
		case 3:
			typeEffort="I/O";
			effort=randomise::rand_a_b(1,10);
			break;
	}
	dependance=vector::empty;
}

//On renvoit la tache sous format string
string tache::printTache(){

	return (nomTache + " " + typeEffort +" "+to_string(effort));
}
