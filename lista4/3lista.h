/*
 * Lista 4
 * 3 - Lista
 * 3lista.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef LISTA_H
#define LISTA_H

using namespace std;

typedef struct nodeStruct{
	string name;
	string phone;
	struct nodeStruct *next;

} nodeType;

class Lista{
	public:
		Lista();
		void addElement(string nome, string telefone);
		void cleanList();
		void printList();
	private:
		nodeType *listaFinal;
		nodeType *listaInicio; 
};

#endif
