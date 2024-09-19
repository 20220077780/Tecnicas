/*
Faça um programa que possa receber, tanto em linha de
comando quanto em execução, dados de disciplinas (nome da
disciplina, nome completo do aluno matriculado na disciplina, 1ª,
2ª ou 3ª notas na disciplina e outras, se necessário) e manter
todos os dados cadastrados em uma base de dados em arquivo
de texto. Faça com que o programa tenha opção de:
a) Receber novos dados, salvando na base de dados;
b) Listar todas as disciplinas e os alunos matriculados em cada;
c) Ter opção de pesquisar se um dado aluno ou uma dada
disciplinas está cadastrada.
d) Listar as notas, parciais ou não, e a média dos alunos de uma
dada disciplina cadastrada e a média atual, indicando se
reprovado (média <7) ou aprovado (média >=7).
e) Listar as notas, parciais ou não, e média de um dado aluno
em todas as disciplinas matriculadas.
*/
//DISCIPLINA + ALUNO + NOTA + NOTA + NOTA 

#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    //string disciplina, nome;
    float Ni, Nii, Niii;
    fstream SIGAA("sigaa.txt", ios::app);
    if(!SIGAA){
        cout << "The file can't be open!\n";
        return 1;
    }
    if(argc == 6){
        char disciplina[30], nome[30];
        strcpy(disciplina, argv[1]);
        strcpy(nome, argv[2]);
        Ni = atof(argv[3]);
        Nii = atof(argv[4]);
        Niii = atof(argv[5]);

        SIGAA << disciplina << "|" << nome << endl
            << Ni << ' ' << Nii << ' ' << Niii << endl;
    }
    else{
        string disciplina, nome;
        cout << "Which subject?" << endl;                       cin.ignore(); SIGAA.getline(disciplina, 30);    //getline(cin, disciplina); // Nao pega a primeira letra!
        cout << "What is the name of the student?" << endl;     cin.ignore(); SIGAA.getline(nome, 30);          //getline(cin, nome);
        cout << "First note: ";                                 cin >> Ni;
        cout << "Second note: ";                                cin >> Nii;
        cout << "Thrird note: ";                                cin >> Niii;

        SIGAA << disciplina << "|" << nome << endl
            << Ni << ' ' << Nii << ' ' << Niii << endl;
    }
    

    SIGAA.close();
    return 0;
}