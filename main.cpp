#include <iostream>
#include <string>
using namespace std;



int main () {

    //entrada - declaração das variáveis.
    string nomes[20];
    int qtdAlunos;

    //processamento
    cout << "=== SISTEMA DE NOTAS v4.0 ===" << endl;

    do {
        cout << "Quantidade de alunos (1 a 20): ";
        cin >> qtdAlunos;
    } while (qtdAlunos < 1 || qtdAlunos > 20);
    
     cin.ignore();

     for (int i = 0; i < qtdAlunos; i++) {
        cout << "Nome do aluno " << i + 1 << ": ";
        getline(cin, nomes[i]);
     }

    //saida
   cout << "\nAlunos cadrastados: " << endl;
    for (int i = 0; i < qtdAlunos; i++) {
        cout << "  " << i + 1 << ". " << nomes[i] << endl;
    }



    return 0;
}