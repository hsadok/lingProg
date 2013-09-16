/*
 * Pratica 2
 * 4 - Paralelepipido
 * 4paralelepipido.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef PARALELEPIPIDO_H
#define PARALELEPIPIDO_H

#define NUMERO_DIMENSOES 3

class Paralelepipido{
	public:
		Paralelepipido(unsigned x, unsigned y, unsigned z);
		void setVolume(unsigned x, unsigned y, unsigned z);
		unsigned getVolume();
	private:
		unsigned dimensoes[NUMERO_DIMENSOES];
		unsigned volume;
};

#endif
