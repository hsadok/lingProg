/*
 * Lista 4
 * 7 - Arvore
 * 7arvore.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef ARVORE_LIB_H
#define ARVORE_LIB_H

using namespace std;

typedef struct nodeStruct{
	string name;
	string phone;
	struct nodeStruct *left, *right;
} nodeType;

class Arvore{
	public:
		Arvore();
		void add(string nome, string telefone);
		string search(string nome);//retorna o telefone
		void print();
		void clean();

	private:
		nodeType *baseArvore;

		void addElementToTree(nodeType *node, nodeType *tree);
		void printTree(nodeType *node);
		void cleanTree(nodeType *node);
		nodeType* searchTree(string nome, nodeType *subTree);
};

#endif
