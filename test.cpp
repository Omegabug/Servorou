/*
 * test.cpp
 *
 *  Created on: 28 févr. 2018
 *      Author: vialj
 */

#include <stdio.h>
#include <iostream>
#include "tache.h"
#include "Serveur.h"
using namespace std;

int main(){
	tache t("T1");
	cout << t.printTache()<<endl;
	Serveur s;
	cout <<s.printServeur()<<endl;
}

