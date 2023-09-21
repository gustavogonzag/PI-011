#include <iostream>
#include <vector>

using namespace std;

vector<int> encontraLetra(const string& str, char letra) {
    vector<int> indices;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letra) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    string texto;
    char letra;

    cout << "Digite uma string de caracteres: ";
    cin >> texto;

    cout << "Digite uma letra: ";
    cin >> letra;

    vector<int> resultado = encontraLetra(texto, letra);

    if (resultado.size() > 0) {
        cout << "A letra '" << letra << "' foi encontrada nas seguintes posicoes:" << endl;
        for (int i = 0; i < resultado.size(); i++) {
            cout << resultado[i] << " ";
        }
        cout << endl;
    } else {
        cout << "A letra '" << letra << "' nao foi encontrada na string." << endl;
    }

    return 0;
}
