/*
 * Lista 4
 * 2 - Combination
 * 2combination.cpp
 * Hugo F S Sadok Menna Barreto
 */

#include "2combination.h"

unsigned products(unsigned max, unsigned min);

double combination(unsigned n, unsigned s){
	double total;
	if((n-s) > s){
		total = ((double) products(n,n-s))/products(s,0);
	}
	else{
		total = ((double) products(n,s))/products(n-s,0);
	}
	return total;
}

unsigned products(unsigned max, unsigned min){
	unsigned total = 1;
	for(; max > min ; max--){
		total *= max;
	}
	return total;
}
