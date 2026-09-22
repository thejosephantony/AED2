/*
 * Implementação2.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <vector>


bool existePar(const vector<int>& v, int alvo) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == alvo) {
                return true;
            }
        }
    }

    return false;
}

// busca exaustiva
// complexidade: o(n²)

int main(int argc, char **argv)
{
	
	return 0;
}

