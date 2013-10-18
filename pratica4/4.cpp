/*
 * Pratica 4
 * 4.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "4.h"

using namespace std;



Relogio::Relogio(): segundos("segundos"), minutos("minutos"), horas("horas"){
}

void Relogio::resetHora(){
	segundos.resetHora();
	minutos.resetHora();
	horas.resetHora();
}

int Relogio::getSegundos() const{
	return segundos.getHora();
}

int Relogio::getMinutos() const{
	return minutos.getHora();
}

int Relogio::getHoras() const{
	return horas.getHora();
}

PonteiroDeRelogio::PonteiroDeRelogio(const string tipo){
	PonteiroDeRelogio::tipo	= tipo;
	resetHora();
}

void PonteiroDeRelogio::resetHora(){
	time(&hora);
	infoHora = localtime(&hora);
}

int PonteiroDeRelogio::getHora() const{
	if(tipo == "segundos"){
		return infoHora->tm_sec;		
	}
	else if(tipo == "minutos"){
		return infoHora->tm_min;
	}
	else if(tipo == "horas"){
		return infoHora->tm_hour;
	}
	cout << "Tipo de hora invalido!" << endl;
	return -1;
}
