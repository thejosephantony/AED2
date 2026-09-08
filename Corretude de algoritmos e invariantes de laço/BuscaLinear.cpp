/*
 * BuscaLinear.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int buscalinear(const vector<int>& v, int n){
	for(size_t i = 0; i < v.size(); i++){
		if(v[i] == n){
			return i;
		}
	}
	return -1;
}

int main(){
	vector<int> lista = {1, 10, 100, 1000};
	
	cout << "Elemento na posição: " << buscalinear(lista, 10) << endl;
	
	return 0;
}

