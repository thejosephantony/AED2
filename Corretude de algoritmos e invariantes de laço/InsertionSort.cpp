/*
 * InsertionSort.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

void insertionSort(vector<int>& v){
	for(int i = 1; i < (int)v.size(); i++){
		int chave = v[i];
		int j = i - 1;
		while(j >= 0 and chave < v[j]){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = chave;
	}
	
}

int main(){
	vector<int> v = {10, 5, 2, 6, 43, 1};
	insertionSort(v);
	
	for(int x : v){
		cout << x << " ";
	}
	
	cout << endl;
	
	return 0;
}

/* Invariante: no início de cada iteração i o subvetor v[0 .. i -1] está ordenado.
 * 
 * Inicialização: Na primeira iteração, i = 1 -> v[0], ou seja, o vetor contém somente um elemento que está ordenado
 * 
 * Manutenção: O while insere a chave na posição correta dentro do vetor ordenado. Após a inserção, o vetor já está ordenado.
 * 
 * Término: Quando i = v.size(), o invariante já diz que o vetor já está ordenado. -> v[0... v.size()-1]
 * 
 * Complexidade: O(n²)

*/
