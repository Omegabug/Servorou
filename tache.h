/*
 * tache.h
 *
 *  Created on: 28 f�vr. 2018
 *      Author: vialj
 */

#ifndef TACHE_H_
#define TACHE_H_
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include "randomise.h"
using namespace std;

class tache {
	public:
		tache(string nom,string type,int ef);
		tache(string nom);
		string printTache();
	private:

		//Nom de la tache
		string nomTache;
		//Quel type de service il faut pour pouvoir la r�aliser
		string typeEffort;
		//La quantite de ressources n�cessaires pour pouvoir la faire
		int effort;
		//Tableau des d�pendances
		vector<tache> dependance;
};


#endif /* TACHE_H_ */
