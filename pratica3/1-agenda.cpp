/*
 * Pratica 3
 * 1 - Agenda
 * 1-agenda.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include <vector>

#include "1-Agenda.h"

using namespace std;

Agenda::Agenda(unsigned numeroNomes){
	numeroMaximoNomes = numeroNomes;
}

void Agenda::inserirNome(string nome){
	//Caso o nome possua mais que 10 caracteres, uma mensagem deve ser exibida
	// ao usuário e o nome deve ser truncado para caber no limite máximo definido.
	if (nomes.size() < numeroMaximoNomes){
		if(nome.length() > TAMANHO_MAXIMO_NOME){
			cout << "Tamanho maior que o limite, o nome sera truncado" << endl;
			nomes.push_back(nome.substr(0,TAMANHO_MAXIMO_NOME));
		}
		else{
			nomes.push_back(nome);
		}
	}
	else {
		cout << "Esgotado o limite de nomes" << endl;
	}

}

void Agenda::verAgenda(){
	unsigned tamanho = nomes.size();
	cout << "Tamanho: " << tamanho << endl;
	for(unsigned i = 0; i < tamanho; i++){
		cout << nomes[i] << endl;
	}
}
