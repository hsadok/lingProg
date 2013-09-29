/*
 * Pratica 3
 * 1 - Agenda
 * 1-agenda.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef AGENDA_H
#define AGENDA_H

#include <vector>

using namespace std;

#define TAMANHO_MAXIMO_NOME		10

class Agenda{
public:
	Agenda(unsigned numeroNomes);
	void inserirNome(string nome);
	void verAgenda();
private:
	vector <string> nomes;
	unsigned numeroMaximoNomes;
};

#endif
