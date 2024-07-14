#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int numLinhas;
    cout << "Digite a quantidade de linhas da matriz: ";
    cin >> numLinhas;

    vector<int> elementos;

    // Preenchendo o vetor com os números fornecidos pelo usuário
    for (int i = 0; i < numLinhas; i++) {
        int numElementos;
        cout << "Digite a quantidade de números para a linha " << (i + 1) << ": ";
        cin >> numElementos;

        for (int j = 0; j < numElementos; j++) {
            int numero;
            cout << "Digite o número " << (j + 1) << " da linha " << (i + 1) << ": ";
            cin >> numero;
            elementos.push_back(numero);
        }
    }

    // Ordenando todos os elementos em ordem crescente
    sort(elementos.begin(), elementos.end());

    // Exibindo os elementos ordenados
    cout << "Matriz organizada em formato crescente:" << endl;
    for (int num : elementos) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
