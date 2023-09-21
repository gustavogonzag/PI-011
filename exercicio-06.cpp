#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tamResultado = tam1 + tam2;
    int *resultado = new int[tamResultado];

    int indice1 = 0, indice2 = 0;

    for (int i = 0; i < tamResultado; i++) {
        if (indice1 < tam1) {
            resultado[i] = vet1[indice1];
            indice1++;
        } else {
            resultado[i] = vet2[indice2];
            indice2++;
        }
    }

    return resultado;
}

int main() {
    int vetor1[] = {1, 3, 5};
    int tam1 = 3;

    int vetor2[] = {2, 4, 6, 8};
    int tam2 = 4;

    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    int tamResultado = tam1 + tam2;

    cout << "Vetor intercalado: ";
    for (int i = 0; i < tamResultado; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    // Lembre-se de liberar a memória alocada dinamicamente.
    delete[] resultado;

    return 0;
}
