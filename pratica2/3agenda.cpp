/*
 * Pratica 2
 * 3 - Agenda
 * 3agenda.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include "3agenda.h"

using namespace std;

Agenda::Agenda(){
	setNames();
}

void Agenda::setNames(){
	for(unsigned i = 0; i < NUMERO_CONTATOS; i++){
		string name;
		cout << "Digite o nome do contato (" << i+1 << "/" << NUMERO_CONTATOS << ")\n";
		cin >> name;
		contatos[i] = checkName(name);
	}
}

void Agenda::viewAgenda(){
	for(unsigned i = 0; i < NUMERO_CONTATOS; i++){
		cout << i+1 << ": " << contatos[i] << endl;
	}
}

string Agenda::checkName(string name){
	if (name.length() > LIMITE_NOME){
		cout << "Nome maior que o limite determinado (" << LIMITE_NOME << ") o nome sera truncado\n";
		name = name.substr(0, LIMITE_NOME);
	}

	return name;
}
