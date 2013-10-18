/*
 * Pratica 4
 * 2.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

#include "2.h"

using namespace std;

MeuNome::MeuNome(const char *nome){
	MeuNome::nome = (char*) malloc(strlen(nome));
	if(MeuNome::nome == NULL){
		cout << "Erro de alocacao de memoria" << endl;
	}

	strcpy(MeuNome::nome, nome);
}

char* MeuNome::getNome(){
	cout << "not const: ";
	return nome;
}

char* MeuNome::getNome() const{
	cout << "const: ";
	return nome;
}

MeuNome::~MeuNome(){
	if (nome){
		free(nome);
	}
}
