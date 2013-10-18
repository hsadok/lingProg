/*
 * Pratica 4
 * 2.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef DOIS_H
#define DOIS_H

#include <iostream>

using namespace std;

class MeuNome{
public:
	MeuNome(const char *nome);
	~MeuNome();
	char* getNome();
	char* getNome() const;
private:
	char* nome;
};

#endif
