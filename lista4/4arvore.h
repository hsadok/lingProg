/*
 * Lista 4
 * 4 - Arvore
 * 4arvore.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef ARVORE_H
#define ARVORE_H

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
		void print();
		void clean();

	private:
		nodeType *baseArvore;

		void addElementToTree(nodeType *node, nodeType *tree);
		void printTree(nodeType *node);
		void cleanTree(nodeType *node);
};

#endif
