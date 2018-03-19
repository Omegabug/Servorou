/*
 * Serveur.cpp
 *
 *  Created on: 28 févr. 2018
 *      Author: vialj
 */

#include "Serveur.h"

Serveur::Serveur() {
	srand(time(NULL));
	int nbCPU,nbGPU,nbIO;
	int j;

	//On tire un nombre de cpu, gpu, et I/O aléatoire avec des valeurs aléatoires
	nbCPU=randomise::rand_a_b(1,98);
	for(j=0;j<nbCPU;j++){
		CPU.push_back(randomise::rand_a_b(5,100));

	}

	nbGPU=randomise::rand_a_b(1,99-nbCPU);
	for(j=0;j<nbGPU;j++){
		GPU.push_back(randomise::rand_a_b(5,50));
	}

	nbIO=randomise::rand_a_b(1,100-(nbCPU+nbGPU));
	for(j=0;j<nbIO;j++){
		IO.push_back(randomise::rand_a_b(1,5));
	}
	//cout <<nbIO+nbGPU+nbCPU<<endl;
}
string Serveur::printArray(vector<int> ar){
	unsigned int i;
	string s;
	//On traverse le tableau et on met à la suite ses éléments
	for(i=0;i<ar.size();i++){
		s+=to_string(ar[i]);
		//Tant que ce n'est pas le dernier membre on rajoute la virgule
		if (i!=ar.size()-1){
			s+=", ";
		}
	}

	return s;
}

string Serveur::printCPU(){

	return "CPU = ["+printArray(CPU)+"]";

}

string Serveur::printGPU(){

	return "GPU = ["+printArray(GPU)+"]";

}

string Serveur::printIO(){

	return "I/O = ["+printArray(IO)+"]";

}

string Serveur::printServeur(){
	return ""+printCPU()+"\n"+printGPU()+"\n"+printIO();
}


