/*
 * Soma dos elementos.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <vector>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int soma(const vector<int>& v, int n){
	int soma = 0;
	for(int i = 0; i < n; i++){
		int esperado = 0;
		for(int j = 0; j < i; j++){
			esperado+=v[j];
		}
		assert(esperado == soma);
		cout << "Início de cada iteração i = " << i << " s = " << soma <<  " (prefixo A[0.." << (i-1) << "])" << endl; 
		soma = soma + v[i];
	}
	return soma;
}

int main(){
	vector<int> v = {4, 7, 1, 3};
	
	cout << "Soma: " << soma(v, 4) << endl;
	
	return 0;
}

