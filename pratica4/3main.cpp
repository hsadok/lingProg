/*
 * Pratica 4
 * 3main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "3.h"

using namespace std;

 int main(int argc, char const *argv[])
 {
 	Relogio relogio;
 	char opcao = '5';
 	while(opcao != '0'){
 		cout << endl << relogio.getHoras() << ":" << relogio.getMinutos() << ":" << relogio.getSegundos() << endl;
 		cout << "Menu:" << endl 
 		 << "1: Alterar horas" << endl 
 		 << "2: Alterar minutos" << endl 
 		 << "3: Alterar segundos" << endl 
 		 << "4: Reset Hora" << endl << endl
 		 << "0: Sair" << endl;
 		cin >> opcao;
 		switch(opcao){
 			case '1':
 				int horas;
 				cout << "Escolha a hora" << endl;
 				cin >> horas;
 				relogio.setHoras(horas);
 				break;
 			case '2':
 			 	int minutos;
 				cout << "Escolha os minutos" << endl;
 				cin >> minutos;
 				relogio.setMinutos(minutos);
 				break;
 			case '3':
 				int segundos;
 				cout << "Escolha os segundos" << endl;
 				cin >> segundos;
 				relogio.setSegundos(segundos);
 				break;
 			case '4':
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
