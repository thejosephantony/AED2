/*
 * Potencia.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;


int potencia(int base, int expoente){
	int resultado = 1;
	int i = 0;
	while(i < expoente){
		resultado = resultado * base;
		i++;
	}
	return resultado;
}
/*
Pré-condição: base é um inteiro e expoente é um inteiro não negativo (expoente ≥ 0).

Pós-condição: Retorna base^expoente (potência inteira).

Invariante: No início de cada iteração i, resultado = base^i.

Inicialização: Antes do laço, i = 0 e resultado = 1. Como base^0 = 1,
               temos resultado = base^i. O invariante é verdadeiro.

Manutenção: Suponha que no início da iteração i, resultado = base^i.
            O corpo do laço executa:
              - resultado = resultado * base → resultado = base^i * base = base^(i+1).
              - i++ → i = i+1.
            Ao final da iteração, resultado = base^i (com o novo i),
            que é o invariante para a próxima iteração.

Término: Quando o laço termina (i = expoente), o invariante garante que
         resultado = base^expoente. A função retorna resultado,
         satisfazendo a pós-condição.

Função variante: V = expoente - i. Decresce estritamente a cada iteração
                 e atinge 0 quando i = expoente, garantindo o término.
*/
int main(){
	
	
	return 0;
}

