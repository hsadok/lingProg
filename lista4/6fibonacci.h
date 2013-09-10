/*
 * Lista 4
 * 6 - Fibonacci
 * 6fibonacci.h
 * Hugo F S Sadok Menna Barreto
 */

#ifndef FIBONACCI_CLASS_CONSTRUTOR_H
#define FIBONACCI_CLASS_CONSTRUTOR_H

using namespace std;

class Fibonacci{
	public:
		Fibonacci(unsigned numeroSetado);
		unsigned getResultado();

	private:
		unsigned resultado, numero;
		void calculaFibonacci();
};

#endif
