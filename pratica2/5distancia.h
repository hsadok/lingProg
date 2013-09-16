/*
 * Pratica 2
 * 5 - Distancia
 * 5distancia.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef DISTANCIA_H
#define DISTANCIA_H

using namespace std;

 class Ponto{
 	public:
 		Ponto();
 		Ponto(double valorX, double valorY, double valorZ);
 		
 		void setX(double valorX);
 		void setY(double valorY);
 		void setZ(double valorZ);

 		double getX();
 		double getY();
 		double getZ();

 		void set(double valorX, double valorY, double valorZ);

 	private:
 		double x, y, z;
 };


 class Distancia{
 	public:
 		Distancia(Ponto pt1, Ponto pt2);
 		void setPontos(Ponto pt1, Ponto pt2);
 		Ponto getPonto1();
 		Ponto getPonto2();
 		double getDistancia();
 	private:
 		Ponto ponto1;
 		Ponto ponto2;
 		double distancia;

 		void setDistancia();
 };

#endif
