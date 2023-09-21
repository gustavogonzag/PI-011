#include <iostream>

using namespace std;

bool eh_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int conta_primos(int *vet, int qtde) {
    int count = 0;
    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int vetor[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);

    int quantidade_primos = conta_primos(vetor, qtde);

    cout << "Quantidade de números primos no vetor: " << quantidade_primos << endl;

    return 0;
}
