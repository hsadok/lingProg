/*
 * Lista 4
 * 5 - Fibonacci
 * 5main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "5fibonacci.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Fibonacci fibonacci;

	cout << "testando...\n\n";
	for(unsigned i = 1; i < 100; i++){
		fibonacci.setNumero(i);
		cout << fibonacci.getResultado() << " ";
	}

	cout << "\n";
	return 0;
}
