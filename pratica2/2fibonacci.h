/*
 * Pratica 2
 * 2 - Fibonacci
 * 2fibonacci.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef FIBONACCI_CLASS_H
#define FIBONACCI_CLASS_H

using namespace std;

class Fibonacci{
	public:
		Fibonacci();
		void setNumero(unsigned numeroSetado);
		unsigned getResultado();

	private:
		unsigned resultado, numero;
		void calculaFibonacci();
};

#endif
