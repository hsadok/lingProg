/*
 * Lista 4
 * 6 - Fibonacci
 * 6main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "6fibonacci.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "testando... (vesao com setando o numero com o construtor)\n\n";
	for(unsigned i = 1; i < 100; i++){
		Fibonacci fibonacci(i);
		cout << fibonacci.getResultado() << " ";
	}

	cout << "\n";
	return 0;
}
