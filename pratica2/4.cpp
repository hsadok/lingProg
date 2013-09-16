/*
 * Pratica 2
 * 4 - Paralelepipido
 * 4.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include "4paralelepipido.h"

using namespace std;

 int main(int argc, char const *argv[])
 {
 	unsigned x, y, z;
 	x = y = z = 0;
 	while(!(x && y && z)){
 		cout << "Escolha as dimensoes do Paralelepipido X Y Z (Valores positivos diferentes de zero): " << endl;
 		cin >> x >> y >> z;
 	}

	Paralelepipido forma(x,y,z);
	cout << "Volume: " << forma.getVolume() << endl;
 	return 0;
 }
