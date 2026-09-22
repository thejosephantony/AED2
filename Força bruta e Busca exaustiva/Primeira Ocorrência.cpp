/*
 * Primeira Ocorrência.cpp
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

int primeiraPosicao(const vector<int>& v, int x) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            return i;
        }
    }

    return -1;
}

/*Responda:

Qual é o espaço de busca? 
			- {0, 1, 2, ... , n-1}
			
Quantos candidatos existem?
			-  n candidatos
Qual é o melhor caso?
			- V[0]. O candidato está na primeira posição do vetor. Theta(1)
Qual é o pior caso?
			- V[i], em que i é o último elemento do vetor. Theta(n)
Qual é a complexidade no pior caso?
			- O(n)
Por que, ao retornar um índice i, podemos afirmar que ele é a primeira ocorrência de x?
			- todos os índices anteriores já foram descartados
Por que return -1 é correto quando o laço termina?
			- todos os candidatos foram examinados sem sucesso


 */
int main(int argc, char **argv)
{
	
	return 0;
}

