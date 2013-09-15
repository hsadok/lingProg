/*
 * Pratica 2
 * 2 - Fibonacci
 * 2fibonacci.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include <iostream>

#include "2fibonacci.h"

Fibonacci::Fibonacci(){
	numero = resultado = 0;
}

void Fibonacci::setNumero(unsigned numeroSetado){
	numero = numeroSetado;
	calculaFibonacci();
}

unsigned Fibonacci::getResultado(){
	if(resultado == 0){
		cout << "O Numero calculado ainda nao foi definido\n";
	}

	return resultado;
}

//private
void Fibonacci::calculaFibonacci(){
	unsigned ultimoElemento = 1;
	unsigned penultimoElemento = 1;

	unsigned numElementos = numero;

	if (numElementos == 0){
		resultado = 0;
		return;
	}

	if(numElementos < 2){
		resultado = 1;
		return;
	}

	numElementos -= 2;
	while(numElementos > 0){
		unsigned aux = ultimoElemento;
		ultimoElemento = ultimoElemento + penultimoElemento;
		penultimoElemento = aux;
		numElementos--;
	}

	resultado = ultimoElemento;
}
