/*
 * Implementação3.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


int contarPositivos(const vector<int>& v) {
    int contador = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] > 0) {
            contador++;
        }
    }

    return contador;
}

// pré-condição:  o vetor (v) de inteiros.
// pós-condição: quantidade de elementos positivos de v
// invariante de laço: No início de cada iteração i, contador é igual à quantidade de números positivos existentes em v[0 ... i-1]
