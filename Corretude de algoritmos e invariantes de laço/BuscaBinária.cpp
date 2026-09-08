/*
 * BuscaBinária.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <vector>
#include <algorithm>


using std::cout;
using std::cin;
using std::endl;
using std::vector;

int buscabinaria(const vector<int>& v, int n){
	int inicio = 0;
	int fim = v.size() - 1;
	
	while(inicio <= fim){
		int meio = inicio + (fim - inicio)/2;
		
		if(v[meio] == n){
			return meio;
		}
		else if(v[meio] < n){
			inicio = meio + 1;
		}
		else{
			fim = meio - 1;
		}
		
	}
	return -1;
}

int main(){
	vector<int> v = {2, 4, 1, 0, 5, 6};
	sort(v.begin(), v.end()); // ordena o vector
	
	for(int x : v){
		cout << x << " ";  // imprime o vector ordenado
	}
	cout << endl;
	
	cout << "Elemento na posição: " << buscabinaria(v, 5) << endl;

	return 0;
}

// complexidade: O(log n)

