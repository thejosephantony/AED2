/*
 * Implementação5.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


bool todosPositivos(const vector<int>& v) {
    bool todos = true;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] <= 0) {
            todos = false;
        }
    }

    return todos;
}

// pré-condição:  o vetor (v) possui números inteiros.
// pós-condição: Se todos os elementos forem positivos, retorna true; caso contrário, retorna false.
// invariante de laço: No início de cada iteração i, todos é verdadeiro se e somente se todos os valores em v[0 ... i-1] forem positivos.
