/*
 * Serveur.h
 *
 *  Created on: 28 févr. 2018
 *      Author: vialj
 */

#ifndef SERVEUR_H_
#define SERVEUR_H_
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string>
#include <vector>
#include "randomise.h"
using namespace std;

class Serveur {
	public:
		Serveur();
		string printCPU();
		string printGPU();
		string printIO();
		string printServeur();

	private:
		vector<int> CPU;
		vector<int> GPU;
		vector<int> IO;
		//Imprimera une suite de nombres séparé par des virgules
		string printArray(vector<int> ar);
};

#endif /* SERVEUR_H_ */
