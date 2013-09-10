/*
 * Lista 4
 * 3 - Lista
 * 3lista.cpp
 * Hugo F S Sadok Menna Barreto
 */

 #include <iostream>

 #include "3lista.h"

 using namespace std;

 Lista::Lista(){
 	listaFinal = NULL;
 	listaInicio = NULL;
 }

 void Lista::addElement(string nome, string telefone){
 	nodeType *node;

 	node = new nodeType;

 	node->name = nome;
 	node->phone = telefone;
 	node->next = NULL;

 	if(listaFinal == NULL){
 		listaInicio = listaFinal = node;
 		return;
 	}

 	listaFinal->next = node;
 	listaFinal = node;
 	
 	return;
 }

 void Lista::cleanList(){
 	nodeType *aux;
 	while(listaInicio != NULL){
 		aux = listaInicio->next;
 		delete listaInicio;
 		listaInicio = aux;
 	}
 	listaInicio = listaFinal = NULL;
 }

 void Lista::printList(){
 	if(!listaInicio){
 		cout << "Lista vazia!\n";
 		return;
 	}

 	for(nodeType *i = listaInicio; i != NULL; i = i->next){
 		cout << "Nome: " << i->name << "  Telefone: " << i->phone << endl;
 	}
 }
