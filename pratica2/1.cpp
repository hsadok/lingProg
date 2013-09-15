/*
 * Pratica 2
 * 1 - Fibonacci
 * 1.cpp
 * Hugo F S Sadok Menna Barreto
 */


#include <iostream>

#include "fibonacci-sc.h"

using namespace std;

 int main(int argc, char const *argv[])
 {
 	unsigned i;

 	cout << "Fibonacci: escolha o termo que deseja encontrar da sequencia: ";
 	cin >> i;
 	cout << fibonacci(i) << endl;

 	return 0;
 }
