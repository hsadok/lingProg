/*
 * Pratica 2
 * 3 - Agenda
 * 3.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include "3agenda.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Agenda agenda;
	int opcao = -1;

	while (opcao != 0){
		cout << "== Menu==\n1: mudar lista\n2: mostrar lista\n0: Sair\n\n";
		cout << "Escolha a opcao:\n";
		cin >> opcao;
		cout << endl << endl;
		switch(opcao){
			case 1:
				agenda.setNames();
				break;
			case 2:
				agenda.viewAgenda();
				break;
		}
		cout << endl << endl;
	}
	cout << "Saindo...\n";
	return 0;
}

