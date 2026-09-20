/*
 * Verifica Ordenacão.cpp
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

bool verificaOrdenado(const vector<int>& v){
	for(int i = 1; i < (int)v.size(); i++){
		if(v[i] < v[i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	vector<int> v = {0, 1, 2, 3, 4, 11, 6, 7, 8, 9, 10};
	
	cout << "Vetor ordenado: " << verificaOrdenado(v) << endl;
	
	return 0;
}

/*
Pré-condição: v é um vetor de inteiros com n elementos (n ≥ 0).

Pós-condição: Retorna true se v está ordenado em ordem não decrescente,
              false caso contrário.

Invariante: No início de cada iteração i, o prefixo v[0..i-1] está ordenado
            em ordem não decrescente.

Inicialização: Antes do laço, i = 1. O prefixo v[0..0] tem um único elemento,
               logo está trivialmente ordenado. O invariante é verdadeiro.

Manutenção: Suponha que no início da iteração i, v[0..i-1] está ordenado.
            Se v[i] < v[i-1], a ordem é violada → retornamos false.
            Caso contrário (v[i] >= v[i-1]), o prefixo v[0..i] permanece
            ordenado, e o laço continua. O invariante vale para i+1.

Término: Se o laço chega ao fim (i = n), nenhum par violou a ordem.
         Pelo invariante, v[0..n-1] está ordenado → retornamos true.
         Se houve violação, retornamos false antes. A pós-condição é satisfeita.

Função variante: V = v.size() - i. Decresce estritamente a cada iteração
                 e atinge 0 quando i = n, garantindo o término.
*/

