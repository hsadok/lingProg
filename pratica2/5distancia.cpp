/*
 * Pratica 2
 * 5 - Distancia
 * 5distancia.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <cmath>
#include "5distancia.h"

using namespace std;

Ponto::Ponto(){
	set(0,0,0);
}

Ponto::Ponto(double valorX, double valorY, double valorZ){
 	set(valorX, valorY, valorZ);
}

void Ponto::setX(double valorX){
	x = valorX;
}

void Ponto::setY(double valorY){
	y = valorY;
}

void Ponto::setZ(double valorZ){
	z = valorZ;
}

double Ponto::getX(){
	return x;
}

double Ponto::getY(){
	return y;
}

double Ponto::getZ(){
	return z;
}

void Ponto::set(double valorX, double valorY, double valorZ){
	setX(valorX);
	setY(valorY);
	setZ(valorZ);
}



Distancia::Distancia(Ponto pt1, Ponto pt2){
	setPontos(pt1, pt2);
}

void Distancia::setPontos(Ponto pt1, Ponto pt2){
	ponto1 = pt1;
	ponto2 = pt2;
}

Ponto Distancia::getPonto1(){
	return ponto1;
}

Ponto Distancia::getPonto2(){
	return ponto2;
}

double Distancia::getDistancia(){
	setDistancia();
	return distancia;
}

void Distancia::setDistancia(){
	double x = ponto1.getX() - ponto2.getX();
	double y = ponto1.getY() - ponto2.getY();
	double z = ponto1.getZ() - ponto2.getZ();

	x *= x;
	y *= y;
	z *= z;

	distancia = sqrt(x+y+z);
}
