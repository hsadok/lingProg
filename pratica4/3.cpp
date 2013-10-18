/*
 * Pratica 4
 * 3.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "3.h"

using namespace std;



Relogio::Relogio(){
	resetHora();
}

void Relogio::resetHora(){
	time(&hora);
	infoHora = localtime(&hora);
	setHoras(infoHora->tm_hour).setMinutos(infoHora->tm_min).setSegundos(infoHora->tm_sec);//so para gastar haha
}

Relogio & Relogio::setSegundos(int segundos){
	if (segundos >= 0 && segundos < 60){
		Relogio::segundos = segundos;	
	}
	else{
		cout << "Usuario Idiota" << endl;
	}
	return *this;
}

Relogio & Relogio::setMinutos(int minutos){
	if (minutos >= 0 && minutos < 60){
		Relogio::minutos = minutos;	
	}
	else{
		cout << "Usuario Idiota" << endl;
	}
	return *this;
}

Relogio & Relogio::setHoras(int horas){
	if (horas >= 0 && horas <= 24){
		Relogio::horas = horas % 24;
	}
	else{
		cout << "Usuario Idiota" << endl;
	}
	return *this;
}

int Relogio::getSegundos() const{
	return segundos;
}

int Relogio::getMinutos() const{
	return minutos;
}

int Relogio::getHoras() const{
	return horas;
}
