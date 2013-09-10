/*
 * Lista 4
 * 1 - Fibonacci
 * 1fibonacci.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include "1fibonacci.h"

unsigned fibonacci(unsigned numElementos){
	unsigned ultimoElemento = 1;
	unsigned penultimoElemento = 1;

	if (numElementos == 0){
		return 0;
	}

	if(numElementos < 2){
		return 1;
	}

	numElementos -= 2;
	while(numElementos > 0){
		unsigned aux = ultimoElemento;
		ultimoElemento = ultimoElemento + penultimoElemento;
		penultimoElemento = aux;
		numElementos--;
	}

	return ultimoElemento;
}
