/*
 * Pratica 2
 * 5 - Distancia
 * 5.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "5distancia.h"

using namespace std;

 int main(int argc, char const *argv[])
 {
 	double x, y, z;
 	cout << "Escolha o primeiro ponto:" << endl;
 	cin >> x >> y >> z;
 	Ponto ponto1(x,y,z);
 	
 	cout << "Escolha o segundo ponto" << endl;
 	cin >> x >> y >> z;

 	Distancia distancia(ponto1, ponto2);

 	cout << "A distancia entre esses 2 pontos eh: " << distancia.getDistancia() << endl;
 	return 0;
 }
