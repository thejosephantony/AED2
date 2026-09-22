/*
 * Indice do Menor Valor.cpp
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

int indiceMenor(const vector<int>& v){
	int menor = 0;
	for(int i = 1; i < (int)v.size(); i++){
		if(v[i] < v[menor]){
			menor = i;
		}
	}
	return menor;
	
}



int main(){
	vector<int> v = {0, 1, -1, 5, 6, 88, -11};
	cout << "O índice do menor valor é: " << indiceMenor(v) << endl;
	return 0;
}

/*
Pré-condição: O vetor v é um vector de inteiros com n elementos, em que n >=1.

Pós-condição: Retorna o índice do menor valor de v[0..n-1]

Invariante: No início de cada iteração i, menor é o indíce do menor valor de v[0..i-1]

Inicialização: Antes do laço, i = 1. O vetor[0..0] só tem um elemento, ou seja, esse é o menor elemento do vetor. 
			   A variável menor armazena o índice do primeiro elemento.

Manutenção: Suponha que no início da iteração i, menor é o índice do menor elemento de v[0.. i-1]. Comparamamos v[i] com v[menor]:
			Se v[i] < v[menor], então v[i] é o novo menor. Atualizando o índice, menor = i.
			Caso contrário, menor já é o índice do menor elemento de v[0..i-1].

Término: Se o laço chega ao fim (i = n), o invariante garante que menor é o índice do menor elemento de v[0..n-1]. 
			A função retorna o índice do menor elemento do vetor. A pós-condição é satisfeita.

Função variante: V = v.size() - i. Decresce estritamente a cada iteração
                 e atinge 0 quando i = n, garantindo o término.
*/

