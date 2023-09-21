#include <iostream>

using namespace std;

int insere_meio(int *vetor, int &qtde, int elemento) {
    if (qtde % 2 == 0) {
        // Se o tamanho do vetor for par, o elemento será inserido exatamente no meio.
        int posicao = qtde / 2;
        for (int i = qtde; i > posicao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[posicao] = elemento;
        qtde++;
    } else {
        // Se o tamanho do vetor for ímpar, o elemento será inserido na posição do meio arredondada para baixo.
        int posicao = qtde / 2;
        for (int i = qtde; i > posicao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[posicao] = elemento;
        qtde++;
    }

    return qtde;
}

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;

    cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int elemento = 100;
    qtde = insere_meio(vetor, qtde, elemento);

    cout << "Vetor após a inserção: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
