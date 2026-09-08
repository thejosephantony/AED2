/*
 * BuscaBinária recursiva.cp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <algorithm>
#include <vector>


using std::cout;
using std::cin;
using std::endl;
using std::vector;

int buscaBinariaRec(const vector<int>& v, int alvo) {
	int esq = 0;
	int dir = v.size() - 1;
    int meio = esq + (dir - esq) / 2;
    if (v[meio] == alvo){
		return meio;
	}
    if (v[meio] < alvo){
		esq = meio + 1;
        return buscaBinariaRec(v, alvo);}
    else{
		dir = meio - 1;
        return buscaBinariaRec(v, alvo);
	}
}

int main(){
	vector<int> v = {2, 4, 1, 0, 5, 6};
	sort(v.begin(), v.end()); // ordena o vector
	
	for(int x : v){
		cout << x << " ";  // imprime o vector ordenado
	}
	cout << endl;
	
	cout << "Elemento na posição: " << buscaBinariaRec(v, 5) << endl;

	return 0;
}
