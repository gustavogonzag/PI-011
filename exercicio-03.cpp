#include <iostream>

using namespace std;

void ordenar(float &a, float &b, float &c, float &d) {
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (a > d) {
        swap(a, d);
    }
    if (b > c) {
        swap(b, c);
    }
    if (b > d) {
        swap(b, d);
    }
    if (c > d) {
        swap(c, d);
    }
}

int main() {
    float num1, num2, num3, num4;

    cout << "Digite quatro números separados por espaços: ";
    cin >> num1 >> num2 >> num3 >> num4;

    ordenar(num1, num2, num3, num4);

    cout << "Os números em ordem crescente são: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}

