/*
 * Pratica 3
 * 2 - Agenda
 * 2-agenda.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include <vector>

#include "2-Agenda.h"

using namespace std;

unsigned Agenda::numeroNomesInseridos = 0;

void Agenda::inserirNome(string nome){
	//Caso o nome possua mais que 10 caracteres, uma mensagem deve ser exibida
	// ao usuário e o nome deve ser truncado para caber no limite máximo definido.
	if (numeroNomesInseridos < numeroMaximoNomes){
		if(nome.length() > tamanhoMaximoNome){
			cout << "Tamanho maior que o limite, o nome sera truncado" << endl;
			nomes[numeroNomesInseridos++] = nome.substr(0,tamanhoMaximoNome);
		}
		else{
			nomes[numeroNomesInseridos++] = nome;
		}
	}
	else {
		cout << "Esgotado o limite de nomes" << endl;
	}

}

void Agenda::verAgenda(){
	for(unsigned i = 0; i < numeroNomesInseridos; i++){
		cout << nomes[i] << endl;
	}
}
