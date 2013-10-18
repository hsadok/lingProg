/*
 * Pratica 4
 * 1.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>

#include "1.h"

using namespace std;

MeuNome::MeuNome(string nome) : nome(nome){
}

string MeuNome::getNome(){
	cout << "not const: ";
	return nome;
}

string MeuNome::getNome() const{
	cout << "const: ";
	return nome;
}
