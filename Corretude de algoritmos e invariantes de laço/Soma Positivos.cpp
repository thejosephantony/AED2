/*
 * Soma Positivos.cpp
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

int somaPositivos(const vector<int>& v){
	int soma = 0;
	for(int i = 0; i < (int)v.size(); i++){
		if(v[i] > 0){
			soma = soma + v[i];
		}
	}
	return soma;
	
}

int main(){
	vector<int> v = {1, 2, 0, 4, 5};
	
	somaPositivos(v);
	cout << "Soma = " << somaPositivos(v) << endl;
	return 0;
}
/*
Pré-condição: v é um vetor de inteiros com n elementos (n ≥ 0).

Pós-condição: Retorna a soma de todos os elementos positivos de v.

Invariante: No início de cada iteração i, soma = Σ dos elementos positivos de v[0..i-1].

Inicialização: Antes do laço, i = 0 e soma = 0. Como v[0..-1] é vazio,
a soma dos positivos nesse intervalo é 0. Logo, o invariante é verdadeiro.

Manutenção: Suponha que no início da iteração i, soma = Σ positivos de v[0..i-1].
Se v[i] > 0, soma += v[i]; caso contrário, nada. Após a iteração,
soma = Σ positivos de v[0..i], que é o invariante para i+1.

Término: Quando i = n, o invariante garante que soma = Σ positivos de v[0..n-1],
ou seja, a soma de todos os positivos do vetor. A pós-condição é satisfeita.

Função variante: V = n - i. Decresce estritamente a cada iteração e atinge 0
quando i = n, garantindo o término.
*/




