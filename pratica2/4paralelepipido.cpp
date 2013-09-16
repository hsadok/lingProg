/*
 * Pratica 2
 * 4 - Paralelepipido
 * 4paralelepipido.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include "4paralelepipido.h"

using namespace std;

Paralelepipido::Paralelepipido(unsigned x, unsigned y, unsigned z){
		setVolume(x, y, z);
}

void Paralelepipido::setVolume(unsigned x, unsigned y, unsigned z){
	dimensoes[0] = x;
	dimensoes[1] = y;
	dimensoes[2] = z;
	volume = 1;
	for(unsigned i=0; i < NUMERO_DIMENSOES; i++){
		volume *= dimensoes[i];
	}
}

unsigned Paralelepipido::getVolume(){
	return volume;
}
