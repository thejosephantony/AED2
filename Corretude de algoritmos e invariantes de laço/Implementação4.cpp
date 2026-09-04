/*
 * Implementa‡Æo4.cpp
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

// pr‚-condi‡Æo:  o vetor (v) de inteiros.
// p¢s-condi‡Æo: a soma de todos os elementos de v
// invariante de la‡o: No inicio de cada itera‡Æo i, soma ‚ igual … soma de todos os valores existentes em v[0 ... i-1]
