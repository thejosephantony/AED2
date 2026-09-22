/*
 * Contar elementos maiores que um X.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int contarElementos(const vector<int>& v, int x){
	int quantidade = 0;
	for(int i = 0; i < (int)v.size(); i++){
		if(v[i] > x){
			quantidade++;
		}	
	}
	return quantidade;
}
/*
Pré-condição: O vetor v é um vetor de inteiros com n elementos, em que n>=0. E x é um número inteiro.

Pós-condição: Retorna a quantidade de elementos maiores que x do vetor v[0..n-1].

Invariante: No início de cada iteração i, quantidade é a quantidade de elementos maiores que x de v[0..i-1]

Inicialização: Antes do laço, em i = 0, o vetor não possui elementos. Logo, a quantidade de elementos maiores que x é igual à zero.

Manutenção: Suponha que no início de cada iteração i, quantidade é a quantidade de elementos maiores que X de v[0..i-1]
			Se v[i] > x, a variável quantidade é incrementada.
			Caso contrário, permance inalterada.

Término: Se o laço chega em n=i, o invariante garante que quantidade é a quantidade de elementos maiores que x de v[0..n-1]
		 A função retorna, portanto, a quantidade de elementos maiores que x. A pós-condição é garantida.

Função variante: V = v.size() - i. Decresce a cada iteração. Garantindo o término.

Complexidade:
- Tempo: O(n)
- Memória: O(1)
*/

int main(){
	vector<int> v = {0, 1, -1, 5, 6, 88, -11};
	cout << "A quantidade de elementos maiores: " << contarElementos(v, 4) << endl;
	return 0;
}
