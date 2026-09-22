/*
 * Quickselect.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */
 
#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::swap;

// implementação recursiva.
int particionar(vector<int>& v, int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (v[j] <= pivo) {
            i++;
            swap(v[i], v[j]);
        }
    }

    swap(v[i + 1], v[fim]);
    return i + 1;
}
// recursivo
int quickselect(vector<int>& v, int inicio, int fim, int k) {
    int p = particionar(v, inicio, fim);

    if (p == k) {
        return v[p];
    }

    if (k < p) {
        return quickselect(v, inicio, p - 1, k);
    }

    return quickselect(v, p + 1, fim, k);
}

// iterativo
int quickselect(vector<int>& v, int inicio, int fim, int k) {
    while (inicio <= fim) {
        int p = particionar(v, inicio, fim);

        if (p == k) {
            return v[p];
        }

        if (k < p) {
            fim = p - 1;
        } else {
            inicio = p + 1;
        }
    }

    throw invalid_argument("k invalido");
}
int main(int argc, char **argv)
{
	
	return 0;
}

