/*
 * Implementação1.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 * 
 */


#include <iostream>
#include <vector>

bool existe(const vector<int>& v, int x) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            return true;
        }
    }

    return false;
}

// força bruta
// complexidade: O(n)

int main(int argc, char **argv)
{
	
	return 0;
}

