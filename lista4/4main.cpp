/*
 * Lista 4
 * 4 - Arvore
 * 4main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "4arvore.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Arvore agenda;
	string nome;
	string telefone;
	int opcao = -1;
	
	while (opcao != 0){
		cout << "== Menu (Arvore Binaria) ==\n1: adicionar contato\n2: mostrar lista\n3: remover lista\n0: Sair\n\n";
		cout << "Escolha a opcao:\n";
		cin >> opcao;
		cout << endl << endl;
		switch(opcao){
			case 1:
				cout << "Escolha o nome:\n";
				cin >> nome;
				cout << "Escolha o Telefone\n";
				cin >> telefone;
				agenda.add(nome, telefone);
				break;
			case 2:
				agenda.print();
				break;
			case 3:
				agenda.clean();
				break;
		}
		cout << endl << endl;
	}
	agenda.clean();
	cout << "Saindo...\n";
	
	return 0;
}
