/*
 * Implementa‡Æo5.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


bool todosPositivos(const vector<int>& v) {
    bool todos = true;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] <= 0) {
            todos = false;
        }
    }s

    return todos;
}

// pr‚-condi‡Æo:  o vetor (v) possui n£meros inteiros.
// p¢s-condi‡Æo: Se todos os elementos forem positivos, retorna true; caso contr rio, retorna false.
// invariante de la‡o: No inicio de cada itera‡Æo i, todos ‚ verdadeiro se e somente se todos os valores em v[0 ... i-1] forem positivos.
