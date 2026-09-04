/*
 * Implementação1.c
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


int soma(int n) {
    int resultado = 0;

    for (int i = 1; i <= n; i++) {
        resultado += i;
    }

    return resultado;
}

// pré-condição: n >= 1;
// pós-condição: A soma dos inteiros de 1 até n
