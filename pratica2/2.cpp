/*
 * Pratica 2
 * 2 - Fibonacci
 * 2.cpp
 * Hugo F S Sadok Menna Barreto
 */
#include <iostream>

#include "2fibonacci.h"

using namespace std;

 int main(int argc, char const *argv[])
 {
 	Fibonacci serie;
 	unsigned i;

 	cout << "Fibonacci: escolha o termo que deseja encontrar da sequencia: ";
 	cin >> i;
 	serie.setNumero(i);

 	cout << serie.getResultado() << endl;

 	return 0;
 }
