/*
 * Lista 4
 * 2 - Combination
 * 2main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "2combination.h"

using namespace std;

 int main(int argc, char const *argv[])
 {
 	unsigned n, s;
 	cout << " ___ n!___\n (n-s)! s!\nEntre com o n:\n";
 	cin >> n;
 	cout << "Entre com o s:\n";
 	cin >> s;
 	cout << "Resultado: " << combination(n, s) << "\n";	
 	return 0;
 }
