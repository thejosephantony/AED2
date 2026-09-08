/*
 * SelectionSort.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::swap;

void selectionSort(vector<int>& v){
	for(int i = 0; i < ((int)v.size() - 1); i++){
		int menor = i;
		for(int j = i+ 1; j < (int)v.size(); j++){
			if(v[j] < v[menor]){
				menor = j;
			}
		}
        swap(v[i], v[menor]);


	}
	
}

int main(){
	vector<int> v = {10, 5, 2, 6, 43, 1};
	selectionSort(v);
	
	for(int x : v){
		cout << x << " ";
	}
	
	cout << endl;
	
	return 0;
}

/* Invariante: no início de cada iteração i, os elementos do vector v[0 .. i -1] são os i menores elementos do vector em ordem crescente.
 * 
 * Inicialização: Na primeira iteração, i = 0, o subvetor vazio não contém nenhum elemento.
 * 
 * Manutenção: O loop interno encontra o menor elemento em v[i.. n-1] e o coloca em v[i]
 * 
 * Término: Quando i = v.size(), o vetor está ordenado.
 * 
 * Complexidade: O(n²)

*/
