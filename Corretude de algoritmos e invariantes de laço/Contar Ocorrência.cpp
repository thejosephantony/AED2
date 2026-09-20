/*
 * Contar Ocorrência.cpp
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

int contarOcorrencia(const vector<int>& v, int x){
	int contador = 0;
	for(int i = 0; i < (int)v.size(); i++){
		if(v[i] == x){
			contador++;
		}
	}
	return contador;
}



int main(){
	vector<int> vetor = {5, 2, 3, 4, 5, 5, 7, 8, 5, 10};
	
	cout << "Quantidade de ocorrências: " << contarOcorrencia(vetor, 5) << endl;
	
	return 0;
}

/*
Pré-condição: v é um vetor de inteiros com n elementos (n ≥ 0), e x é um inteiro.

Pós-condição: Retorna a quantidade de ocorrências do inteiro x em v.

Invariante: No início de cada iteração i, contador é igual à quantidade do valor x
em v[0..i-1].

Inicialização: Antes do laço, i = 0 e contador = 0. Como v[0..-1] é vazio,
contador = 0. Logo, o invariante é verdadeiro.

Manutenção: Suponha que no início da iteração i, contador é a quantidade de x
em v[0..i-1]. Se v[i] == x, incrementamos contador em 1 (contador++); caso
contrário, nada. Após a iteração, contador é a quantidade de x em v[0..i],
que é o invariante para i+1.

Término: Quando i = n, o invariante garante que contador é a quantidade de x
em v[0..n-1], ou seja, a quantidade de vezes que x aparece no vetor.
A pós-condição é satisfeita.

Função variante: V = v.size() - i. Decresce estritamente a cada iteração e
atinge 0 quando i = n, garantindo o término.
*/


