# 🎓 Sistema de Notas v4.0

Um programa em **C++** feito para gerenciar notas de alunos, calcular médias, exibir resultados e salvar tudo em um arquivo de texto.

---

## 🚀 Funcionalidades

* **Cadastro:** Cadastra alunos e notas por disciplina.
* **Médias:** Calculates a média de cada aluno automaticamente.
* **Classificação:** Mostra se o aluno está **Aprovado** (nota $\ge$ 7), **Recuperação** (nota entre 5 e 6.9) ou **Reprovado** (nota < 5).
* **Destaque de Notas (Opcional B):** Identifica e exibe automaticamente qual aluno teve a **maior média** e qual teve a **menor média** da turma.
* **Salvar Relatório:** Grava o relatório final em um arquivo `.txt` com a **data e hora** do momento em que foi feito.
* **Ler Relatório:** Lê e mostra na tela o último relatório que foi salvo.
* **Menu "Sobre o Sistema":** Uma opção no menu que explica o objetivo do programa e quem o desenvolveu.

---

## 📁 Histórico de Criação (Commits)

O projeto foi construído passo a passo seguindo a evolução dos requisitos:
* **Commit 1:** Cadastro dos nomes dos alunos.
* **Commit 2:** Entrada de notas e cálculo das médias.
* **Commit 3:** Classificação dos alunos em tela.
* **Commit 4:** Função de salvar o relatório em arquivo com data/hora.
* **Commit 5:** Função de ler o arquivo salvo pelo menu inicial.
* **Commit 6:** Criação do menu "Sobre o sistema".
* **Commit 7 (Bônus A):** `feat: adiciona validacao de nome em branco` — Uso de `do-while` para impedir nomes vazios.
* **Commit 8 (Bônus B):** `feat: adiciona destaque maior e menor media` — Guarda os índices das médias extremas para exibir os destaques.

---

## 💻 Como Rodar o Programa

### Pré-requisitos
* Sistema Operacional **Windows**
* Um compilador de C++ instalado (como o `g++`)

### Passo a Passo

1. Abra o terminal na pasta do projeto.
2. Compile o código com o comando:
   ```bash
   g++ main.cpp -o SistemaNotas.exe
Carlos Silva - Média: 8.5 - Aprovado
Ana Souza - Média: 6.2 - Recuperação
Lucas Lima - Média: 4.5 - Reprovado

Resumo: 1 aprovados, 1 em recuperação, 1 reprovados.
