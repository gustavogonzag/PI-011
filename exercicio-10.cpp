#include <iostream>
#include <string>

using namespace std;

// Função para codificar uma letra
char codificarLetra(char letra) {
    if (isalpha(letra)) {
        if (letra == 'Z' || letra == 'z') {
            return letra - 25;
        } else {
            return letra + 1;
        }
    }
    return letra; // Não faz nada se não for uma letra
}

// Função para codificar uma string
string codificarString(const string& texto) {
    string resultado = texto;

    for (int i = 0; i < resultado.length(); i++) {
        resultado[i] = codificarLetra(resultado[i]);
    }

    return resultado;
}

int main() {
    string texto;
    cout << "Digite uma string: ";
    getline(cin, texto);

    string textoCodificado = codificarString(texto);

    cout << "String codificada: " << textoCodificado << endl;

    return 0;
}
