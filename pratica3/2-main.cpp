/*
 * Pratica 3
 * 2 - Agenda
 * 2-main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include "2-Agenda.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Digite control + C para sair" << endl;
	Agenda agenda;
	while (1){
		string nome;
		cout << "Entre com o nome:" << endl;
		cin >> nome;
		agenda.inserirNome(nome);
		cout << "------------------------" << endl;
		agenda.verAgenda();
		cout << "------------------------" << endl;
	}

	return 0;
}
