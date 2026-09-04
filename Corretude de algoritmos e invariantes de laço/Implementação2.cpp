/*
 * Implementa‡Æo2.cpp
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

// pr‚-condi‡Æo: v.size() > 0, ou seja, o vetor nÆo pode ser vazio
// p¢s-condi‡Æo: deve retornar o maior valor de vv -> maior = max(v).
