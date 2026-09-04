/*
 * Implementação2.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */

int maiorElemento(const vector<int>& v) {
    int maior = v[0];

    for (int i = 1; i < v.size(); i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    return maior;
}

// pré-condição: v.size() > 0, ou seja, o vetor não pode ser vazio
// pós-condição: deve retornar o maior valor de v -> maior = max(v).
