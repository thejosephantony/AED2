/*
 * Implementa‡Æo3.cpp
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

// pr‚-condi‡Æo:  o vetor (v) de inteiros.
// p¢s-condi‡Æo: quantidade de elementos positivos de v
// invariante de la‡o: No inicio de cada itera‡Æo i, contador ‚ igual … quantidade de n£meros positivos existentes em v[0 ... i-1]
