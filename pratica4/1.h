/*
 * Pratica 4
 * 1.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef UM_H
#define UM_H

#include <iostream>
#include <string>

using namespace std;

class MeuNome{
public:
	MeuNome(string nome);
	string getNome();
	string getNome() const;
private:
	string nome;
};

#endif
