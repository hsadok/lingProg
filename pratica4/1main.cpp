/*
 * Pratica 4
 * 1main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "1.h"

using namespace std;

int main(int argc, char const *argv[])
{
	string nome1, nome2;
	cout << "Digite o primeiro nome" << endl;
	cin >> nome1;
	cout << "Digite o segundo nome" << endl;
	cin >> nome2;

	const MeuNome meuNome1(nome1);
	MeuNome meuNome2(nome2);

	cout << "Nome 1: " << meuNome1.getNome() << endl;
	cout << "Nome 2: " << meuNome2.getNome() << endl;
	return 0;
}
