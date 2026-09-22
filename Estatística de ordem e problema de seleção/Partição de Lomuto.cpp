/*
 * Partição de Lomuto.cpp
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

int particiona(vector<int>& v, int inicio, int fim){
	int pivo = v[fim];
	int i = inicio - 1;
	for(int j = inicio; j < fim; j++){
		if(v[j] <= pivo){
			i++;
			swap(v[i], v[j]);
		}
	}
	swap(v[i+1], v[fim]);
	return i+1;
	
}

int main()
{
	
	return 0;
}

