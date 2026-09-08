#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

// Função auxiliar recursiva (recebe os limites)
int buscaBinariaRecAux(const vector<int>& v, int alvo, int esq, int dir) {
    // Caso base: elemento não encontrado
    if (esq > dir) return -1;

    int meio = esq + (dir - esq) / 2;

    if (v[meio] == alvo)
        return meio;
    else if (v[meio] < alvo)
        return buscaBinariaRecAux(v, alvo, meio + 1, dir);  // busca à direita
    else
        return buscaBinariaRecAux(v, alvo, esq, meio - 1);  // busca à esquerda
}

// Função wrapper (interface amigável)
int buscaBinariaRec(const vector<int>& v, int alvo) {
    return buscaBinariaRecAux(v, alvo, 0, static_cast<int>(v.size()) - 1);
}

int main() {
    vector<int> v = {2, 4, 1, 0, 5, 6};
    std::sort(v.begin(), v.end());  // ordena: {0, 1, 2, 4, 5, 6}

    cout << "Vetor ordenado: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    int pos = buscaBinariaRec(v, 5);
    if (pos != -1)
        cout << "Elemento 5 encontrado na posição " << pos << endl;
    else
        cout << "Elemento 5 não encontrado" << endl;

    pos = buscaBinariaRec(v, 10);
    if (pos != -1)
        cout << "Elemento 10 encontrado na posição " << pos << endl;
    else
        cout << "Elemento 10 não encontrado" << endl;

    return 0;
}
