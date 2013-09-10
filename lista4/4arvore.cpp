/*
 * Lista 4
 * 4 - Arvore
 * 4arvore.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "4arvore.h"

using namespace std;

Arvore::Arvore(){
	baseArvore = NULL;
}

void Arvore::add(string nome, string telefone){
	nodeType *node;
	
	node = new nodeType;

	node->name = nome;
	node->phone = telefone;
	node->left = node->right = NULL;

	if(baseArvore == NULL){
		baseArvore = node;
	}
	else{
		addElementToTree(node, baseArvore);
	}
}

void Arvore::print(){
	if (!baseArvore){
		cout << "Lista vazia!\n";
 		return;
	}
	printTree(baseArvore);	
}

void Arvore::clean(){
	cleanTree(baseArvore);
	baseArvore = NULL;
}

//Private
void Arvore::addElementToTree(nodeType *node, nodeType *tree){
	if(node->name >= tree->name){
		if(tree->right == NULL){
			tree->right = node;
		}
		else{
			addElementToTree(node, tree->right);
		}
	}
	else{
		if(tree->left == NULL){
			tree->left = node;
		}
		else{
			addElementToTree(node, tree->left);
		}
	}
}

void Arvore::printTree(nodeType *node){
	if(node == NULL){
		return;
	}
	printTree(node->left);
	cout << node->name << "  " << node->phone << endl;
	printTree(node->right);
}

void Arvore::cleanTree(nodeType *node){
	if(node == NULL){
		return;
	}
	cleanTree(node->left);
	cleanTree(node->right);
	delete node;
}
