/*
 * Pratica 3
 * 3 - Agenda
 * 3-agenda.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef AGENDAIII_H
#define AGENDAIII_H

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
	static unsigned numeroNomesInseridos;
	Cadastro nomes[numeroMaximoNomes];
};

#endif
