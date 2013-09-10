/*
 * Lista 4
 * 1 - Fibonacci
 * 1main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "1fibonacci.h"

using namespace std;

 int main(int argc, char const *argv[])
 {
 	for(unsigned i = 1; i < 100; i++){
 		cout << fibonacci(i) << " ";
 	}

 	cout << "\n";
 	return 0;
 }
