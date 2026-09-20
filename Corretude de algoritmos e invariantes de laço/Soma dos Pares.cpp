/*
 * Soma dos Pares.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int somaPares(const vector<int>& v){
	int soma = 0;
	for(int i = 0; i < (int)v.size(); i++){
		if(v[i] % 2 == 0){
			soma+=v[i];
		}
	}
	return soma;
}

/*
Pré-condição: O vector v é um vetor de inteiro com n elementos, em que n>=0

Pós-condição: Retorna a soma dos pares do vetor v[0..n-1].

Invariante: No início de cada iteração i, soma é a soma dos números pares de v[0..i-1]

Inicialização: Antes do laço, em i = 0, o vetor não possui nenhum elemento. Então a soma é igual à zero.

Manutenção: Suponha que no ínicio de cada iteração i, soma é a soma dos números pares de v[0..i-1].
			Se v[i] % 2 == 0, a variável soma é atualizada com o valor de v[i] somado.
			Caso contrário, soma permanece inalterada.

Término: Se o laço chega em n=i, o invariante garante que a soma é a soma dos números pares de v[0..n-1].
		 A função retorna a soma dos números pares de vetor. A pós-condição é satisfeita.

Função variante: V = v.size() - i. Decresce a cada iteração. Garantido o término.

Complexidade:
- Tempo: O(n)
- Memória: O(1)
*/

int main(){
	vector<int> v = {1, 2, 3, 4, 5, 6};
	
	cout << "Soma dos pares do vector:  " << somaPares(v) << endl;
	return 0;
}

