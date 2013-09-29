/*
 * Pratica 3
 * 4 - Agenda
 * 4-agenda.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include <vector>

#include "4-Agenda.h"

using namespace std;

void Agenda::insertCad(Cadastro cadastro){
	nomes.push_back(cadastro);
}

void Agenda::verAgenda(){
	unsigned tamanho = nomes.size();
	for(unsigned i = 0; i < tamanho; i++){
		cout << nomes[i].getNome() << "   " << nomes[i].getProfissao() << endl;
	}
}

void Cadastro::setNome(string nomeSet){
	if(nomeSet.length() > tamanhoMaximoNome){
		cout << "Tamanho maior que o limite, o nome sera truncado" << endl;
		nome = nomeSet.substr(0,tamanhoMaximoNome);
		return;
	}
	nome = nomeSet;
}

string Cadastro::getNome(){
	return nome;
}

void Cadastro::setProfissao(string profissaoSet){
	profissao = profissaoSet;
}

string Cadastro::getProfissao(){
	return profissao;
}

