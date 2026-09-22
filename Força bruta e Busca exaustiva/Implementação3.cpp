/*
 * Implementação3.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <vector>
int maiorDiferenca(const vector<int>& v) {
    int melhor = v[1] - v[0];

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            melhor = max(melhor, v[j] - v[i]);
        }
    }

    return melhor;
}

// complexidade: o(n²)

int main(int argc, char **argv)
{
	
	return 0;
}

