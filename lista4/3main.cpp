/*
 * Lista 4
 * 3 - Lista
 * 3main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>

#include "3lista.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Lista agenda;
	string nome;
	string telefone;
	int opcao = -1;
	
	while (opcao != 0){
		cout << "== Menu ==\n1: adicionar contato\n2: mostrar lista\n3: remover lista\n0: Sair\n\n";
		cout << "Escolha a opcao:\n";
		cin >> opcao;
		cout << endl << endl;
		switch(opcao){
			case 1:
				cout << "Escolha o nome:\n";
				cin >> nome;
				cout << "Escolha o Telefone\n";
				cin >> telefone;
				if (!agenda.addElement(nome, telefone)){
					cout << "Erro ao adicionar o contato\n";
				}
				break;
			case 2:
				agenda.printList();
				break;
			case 3:
				agenda.cleanList();
				break;
		}
		cout << endl << endl;
	}
	agenda.cleanList();
	cout << "Saindo...\n";
	
	return 0;
}
