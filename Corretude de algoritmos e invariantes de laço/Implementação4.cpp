/*
 * Implementação4.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


int somarVetor(const vector<int>& v) {
    int soma = 0;

    for (int i = 0; i < v.size(); i++) {
        soma += v[i];
    }

    return soma;
}

// pré-condição:  o vetor (v) de inteiros.
// pós-condição: a soma de todos os elementos de v
// invariante de laço: No início de cada iteração i, soma é igual à soma de todos os valores existentes em v[0 ... i-1]
