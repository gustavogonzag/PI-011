#include <iostream>
#include <string>

using namespace std;

string caracteresComuns(const string& A, const string& B) {
    string C;

    for (char letraA : A) {
        for (char letraB : B) {
            if (letraA == letraB) {
                if (C.find(letraA) == string::npos) {
                    C += letraA;
                }
            }
        }
    }

    return C;
}

int main() {
    string A, B;
    cout << "Digite a primeira string: ";
    getline(cin, A);

    cout << "Digite a segunda string: ";
    getline(cin, B);

    string resultado = caracteresComuns(A, B);

    cout << "Caracteres comuns: " << resultado << endl;

    return 0;
}
