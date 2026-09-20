/*
 * BubbleSort.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::swap;

void bubbleSort(vector<int>& v){
	for(int i = 0; i < (int)v.size() - 1; i++){
		bool trocou = false;
		for(int j = 0; j < (int)(v.size() - i - 1); j++){
			if(v[j] > v[j+1]){
				swap(v[j], v[j+1]);
				trocou = true;
			}
		}
			if(!trocou){
				break;
			}
			
        cout << "Passo " << i + 1 << ": ";
        for (int x : v) cout << x << " ";
        cout << endl;
    }
	
}
int main(){
	vector<int> v = {10, 5, 2, 6, 43, 1};
	bubbleSort(v);
	
	
	cout << endl;
	
	return 0;
}

/* Invariante: no início de cada iteração i, os últimos i elementos em v[0.. v.size()-1] já estão nas posições finais e ordenados.
 * 
 * Inicialização: Na primeira iteração, i = 0, nenhum elemento está fixo
 * 
 * Manutenção: A cada passagem o maior elemento vai para o final, tornando-se o próximo fixo.
 * 
 * Término: Quando i = v.size() - 1, o vetor está ordenado.
 * 
 * Complexidade: O(n²)

*/
