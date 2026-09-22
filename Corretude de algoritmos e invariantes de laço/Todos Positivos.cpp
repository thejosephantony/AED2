/*
 * Todos Positivos.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

bool TodosPositivos(const vector<int>& v){
	for(int i = 0; i < (int)v.size(); i++){
		if(v[i] <= 0){
			return false;
			break;
		}
	}
	return true;
	
}
/*
Pré-condição: O vetor v é um vetor de inteiros de n elementos, em que n>=0.

Pós-condição: Se todos os elementos forem positivos, retorna true; caso contrário, false.

Invariante: No início de cada iteração i, todos os elementos de v[0..i-1] são positivos.

Inicialização: Antes do laço, i = 0. O intervalo v[0..-1] é vazio, então a afirmação "todos os elementos de v[0..-1] são positivos" é verdadeira por vacuidade. O invariante é verdadeiro.

Manutenção: Suponha que no início de cada iteração i, todos os números do vetor v[0..i-1] são positivos.
			Se v[i] <= 0, o laço é interrompido e retorna false.
			Se v[i] > 0, então todos os elementos são positivos.

Término: Se o laço chega em i = n, o invariante nos diz que todos os numeros de v[0..n-1] são positivos.
		 A função retorna true, se todos forem positivos; caso contrário, false.
		 A pós-condição é satisfeita.

Função variante: V = v.size() - i. Descresce a cada iteração. Garante o término.

Complexidade:
- Tempo: O(n) (pior caso)
- Memória: O(1)
*/
int main(){
	vector<int> v = {0, 1, 5, 6, 88};
	cout << "Verificação: " << TodosPositivos(v) << endl;
	return 0;
}
