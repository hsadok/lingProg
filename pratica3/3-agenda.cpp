/*
 * Pratica 3
 * 3 - Agenda
 * 3-agenda.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include <vector>

#include "3-Agenda.h"

using namespace std;

unsigned Agenda::numeroNomesInseridos = 0;

void Agenda::insertCad(Cadastro cadastro){
	if (numeroNomesInseridos < numeroMaximoNomes){
		nomes[numeroNomesInseridos++] = cadastro;
	}
	else {
		cout << "Esgotado o limite de nomes" << endl;
	}

}

void Agenda::verAgenda(){
	for(unsigned i = 0; i < numeroNomesInseridos; i++){
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

