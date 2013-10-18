/*
 * Pratica 4
 * 4main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "4.h"

using namespace std;

 int main(int argc, char const *argv[])
 {
 	Relogio relogio;
 	char opcao = '5';
 	while(opcao != '0'){
 		cout << endl << relogio.getHoras() << ":" << relogio.getMinutos() << ":" << relogio.getSegundos() << endl;
 		cout << "Menu:" << endl 
 		 << "1: Reset Hora" << endl
 		 << "0: Sair" << endl;
 		cin >> opcao;
 		switch(opcao){
 			case '1':
 				relogio.resetHora();
 				break;
 			case '0':
 				break;
 			default:
 				cout << "Opcao invalida" << endl;
 		}
 	}
 	return 0;
 }
