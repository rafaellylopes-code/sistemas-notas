#include <iostream>
#include <string>
using namespace std;



int main () {

    //entrada - declaração das variáveis.
    string nomes[20];
    int qtdAlunos;
    float notas [20][5];
    float media[20];
    int qtdDisciplinas;

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
    
     do {
        cout << "\nQuantidades de disciplinas (1 a 5): " << endl;
        cin >> qtdDisciplinas;
     } while (qtdDisciplinas < 1 || qtdDisciplinas > 5);
     for (int i = 0; i < qtdAlunos; i++) {
        cout << "\nNotas de " << nomes[i] << ":" << endl;
        float soma = 0;
        for (int j = 0; j < qtdDisciplinas; j++) {
            do {
                cout << "Disciplina " << j + 1 << " (1 a 5): ";
                cin >> notas[i] [j]; 
            } while (notas [i] [j] < 1 || notas [i] [j] > 10);
            soma += notas [i] [j];
        }
        media [i] = soma / qtdDisciplinas;
     }

    //saida
   cout << "\nAlunos cadrastados: " << endl;
    for (int i = 0; i < qtdAlunos; i++) {
        cout << "  " << i + 1 << ". " << nomes[i] << endl;
    }

    cout << "\n=== RELATORIO ===" << endl;
    int aprovados = 0, recuperacao = 0, reprovados = 0;

    for ( int i = 0; i <qtdAlunos; i++) {
        cout << nomes [i] << "- Media: " << media[i] << " - ";
        if (media[i] >= 7) {
            cout << " Aprovado " << endl;
            aprovados++;
        } else if (media[i] >= 7)
         {
            cout << " Recuperação " << endl;
            recuperacao++;
        } else {
            cout << " Reprovados " << endl;
            reprovados++;
        }
    }

    cout << "\nResumo: " << aprovados << " aprovados, " << recuperacao << " em recuperacao, " << reprovados << " reprovados." << endl;

    return 0;
}