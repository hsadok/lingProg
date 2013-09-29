/*
 * Pratica 3
 * 1 - Agenda
 * 1-main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include "1-Agenda.h"

using namespace std;

int main(int argc, char const *argv[])
{
	unsigned numeroElementos;
	cout << "Digite control + C para sair" << endl;
	cout << "Digite o numero de elementos" << endl;
	cin >> numeroElementos;
	Agenda agenda(numeroElementos);
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
