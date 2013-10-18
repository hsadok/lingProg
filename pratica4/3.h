/*
 * Pratica 4
 * 3.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef TRES_H
#define TRES_H

#include <ctime>

using namespace std;

class Relogio{
public:
	Relogio();
	void resetHora();
	Relogio & setSegundos(int segundos);
	Relogio & setMinutos(int minutos);
	Relogio & setHoras(int horas);
	int getSegundos() const;
	int getMinutos() const;
	int getHoras() const;
private:
	time_t hora;
	struct tm *infoHora;
	int segundos;
	int minutos;
	int horas;

};

#endif
