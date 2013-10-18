/*
 * Pratica 4
 * 2main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include "2.h"

using namespace std;

int main(int argc, char const *argv[])
{
	const MeuNome meuNome1("Hugo");
	MeuNome meuNome2("Antonio");

	cout << "Nome 1: " << meuNome1.getNome() << endl;
	cout << "Nome 2: " << meuNome2.getNome() << endl;
	return 0;
}
