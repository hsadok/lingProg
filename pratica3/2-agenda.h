/*
 * Pratica 3
 * 2 - Agenda
 * 2-agenda.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef AGENDAII_H
#define AGENDAII_H

using namespace std;

class Agenda{
public:
	void inserirNome(string nome);
	void verAgenda();
private:
	const static unsigned numeroMaximoNomes = 1000;
	const static unsigned tamanhoMaximoNome = 10;
	static unsigned numeroNomesInseridos;
	string nomes[tamanhoMaximoNome];
};

#endif
