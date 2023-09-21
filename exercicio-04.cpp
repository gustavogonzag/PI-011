#include <iostream>

using namespace std;

void calcula(int &x, int &y) {
    int soma = x + y;
    int subtracao = x - y;
    
    x = soma;
    y = subtracao;
}

int main() {
    int num1, num2;

    cout << "Digite dois números inteiros separados por espaços: ";
    cin >> num1 >> num2;

    calcula(num1, num2);

    cout << "A soma dos números é: " << num1 << endl;
    cout << "A subtração dos números é: " << num2 << endl;

    return 0;
}
