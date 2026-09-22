/*
 * Implementação6.c
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 */

#include <stdio.h>
#include <assert.h>

/* Soma de A[0..n-1], com o invariante conferido a cada iteracao */
int soma(int A[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        /* invariante: s == A[0] + A[1] + ... + A[i-1] */
        int esperado = 0;                 /* recalcula a soma do prefixo */
        for (int k = 0; k < i; k++)
            esperado += A[k];
        assert(s == esperado);            /* confere o invariante        */
        printf("inicio da iteracao i=%d: s=%d (prefixo A[0..%d])\n", i, s, i - 1);

        s += A[i];
    }
    return s;
}

int main(void) {
    int A[] = {4, 7, 1, 3};
    printf("soma = %d\n", soma(A, 4));
    return 0;
}


