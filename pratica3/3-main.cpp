/*
 * Pratica 3
 * 3 - Agenda
 * 3-main.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>
#include <string>
#include "3-Agenda.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Digite control + C para sair" << endl;
	Agenda agenda;
	while (1){
		string nome, profissao;
		Cadastro cadastro;
		cout << "Entre com o nome:" << endl;
		cin >> nome;
		cadastro.setNome(nome);
		cout << "Entre com a profissao" << endl;
		cin >> profissao;
		cadastro.setProfissao(profissao);
		agenda.insertCad(cadastro);
		cout << "------------------------" << endl;
		agenda.verAgenda();
		cout << "------------------------" << endl;
	}

	return 0;
}
