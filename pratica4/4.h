/*
 * Pratica 4
 * 4.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef QUATRO_H
#define QUATRO_H

#include <ctime>

using namespace std;

class PonteiroDeRelogio{
public:
	PonteiroDeRelogio(const string tipo);
	void resetHora();
	int getHora() const;
private:
	time_t hora;
	struct tm *infoHora;
	string tipo;
};

class Relogio{
public:
	Relogio();
	void resetHora();
	int getSegundos() const;
	int getMinutos() const;
	int getHoras() const;
private:
	PonteiroDeRelogio segundos;
	PonteiroDeRelogio minutos;
	PonteiroDeRelogio horas;
};

#endif
