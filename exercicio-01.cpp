#include <iostream>

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        std::cerr << "Erro: O vetor está vazio." << std::endl;
        return;
    }

    maximo = minimo = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int n;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Erro: Tamanho do vetor deve ser maior que zero." << std::endl;
        return 1; // Saída de erro
    }

    int vetor[n];
    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> vetor[i];
    }

    int maximo, minimo;
    maxmin(vetor, n, maximo, minimo);

    std::cout << "Máximo: " << maximo << std::endl;
    std::cout << "Mínimo: " << minimo << std::endl;

    return 0; // Saída bem-sucedida
}


//COESÃO FUNCIONAL