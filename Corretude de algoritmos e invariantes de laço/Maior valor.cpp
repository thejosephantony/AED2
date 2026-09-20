/*
 * Maior valor.cpp
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

int maiorValor(const vector<int>& v){
	int maior = v[0];
	for(int i = 1; i < (int)v.size();i++){
		if(v[i] > maior){
			maior = v[i];
		}
	}
	return maior;
}
int main(){
	vector<int> v = {1, 2, 3, 4, 5, 22, 7, 8, 9, 10};
	
	cout << "O maior valor é: " << maiorValor(v) << endl;
	return 0;
}


/*
Pré-condição: v é um vetor de inteiros com n elementos, sendo n ≥ 1 (vetor não vazio).

Pós-condição: Retorna o maior valor presente em v[0..n-1].

Invariante: No início de cada iteração i, a variável maior é o maior valor
            em v[0..i-1].

Inicialização: Antes do laço, i = 1 e maior = v[0]. O prefixo v[0..0] tem
               um único elemento, logo o maior é o próprio v[0]. O invariante
               é verdadeiro.

Manutenção: Suponha que no início da iteração i, maior é o maior valor de
            v[0..i-1]. Comparamos v[i] com maior:
              - Se v[i] > maior, então v[i] é o novo maior de v[0..i]
                → maior = v[i].
              - Caso contrário, maior já é o maior de v[0..i].
            Em ambos os casos, ao final da iteração, maior é o maior de
            v[0..i], que é o invariante para i+1.

Término: Quando o laço termina (i = n), o invariante garante que maior é
         o maior valor de v[0..n-1], ou seja, o maior do vetor inteiro.
         A pós-condição é satisfeita.

Função variante: V = v.size() - i. Decresce estritamente a cada iteração
                 e atinge 0 quando i = n, garantindo o término.
*/
