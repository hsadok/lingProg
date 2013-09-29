/*
 * Pratica 3
 * 4 - Agenda
 * 4-agenda.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef AGENDAIV_H
#define AGENDAIV_H

#include <vector>

using namespace std;

class Cadastro{
public:
	void setNome(string nomeSet);
	string getNome();
	void setProfissao(string profissaoSet);
	string getProfissao();
private:
	const static unsigned tamanhoMaximoNome = 10;
	string nome;
	string profissao;

};

class Agenda{
public:
	void insertCad(Cadastro cadastro);//*Mudar
	void verAgenda();//*Mudar
private:
	const static unsigned numeroMaximoNomes = 1000;
	vector <Cadastro> nomes;
};

#endif
