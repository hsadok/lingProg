/*
 * Pratica 2
 * 3 - Agenda
 * 3agenda.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>

#define NUMERO_CONTATOS 3
#define LIMITE_NOME		10

using namespace std;

class Agenda{
	public:
		Agenda();
		void setNames();
		void viewAgenda();
	private:
		string contatos[NUMERO_CONTATOS];

		string checkName(string name);
};



#endif
