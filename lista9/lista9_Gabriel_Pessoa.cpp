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
#include <iomanip>
using namespace std;

void receber();
void listar();
void search();
void notas();
void aluno();

int main(int argc, char *argv[]){
    //string disciplina, nome;
    int x=0;
    fstream SIGAA("sigaa.txt", ios::app);
    if(!SIGAA){
        cout << "The file can't be open!\n";
        return 1;
    }
    if(argc == 6){
        float Ni, Nii, Niii;
        char disciplina[30], nome[30];
        strcpy(disciplina, argv[1]);    
        strcpy(nome, argv[2]);          
        Ni = atof(argv[3]);             
        Nii = atof(argv[4]);
        Niii = atof(argv[5]);

        SIGAA << left << setw(30) << disciplina << setw(30) << nome << setw(5) << Ni << setw(5) << Nii << setw(5) << Niii << endl;
        
    }
    else{
        int c;
        while(1){
            if(!(x++)) cout << "Hello, welcome! What would you like to do?\n";
            else cout << "And now?\n"; // deu certooo
            cout << "[0] Leave" << endl
                 << "[1] New register " << endl
                 << "[2] Subject list " << endl
                 << "[3] Research " << endl
                 << "[4] Note list " << endl
                 << "[5] Student profile " << endl;
            cin >> c;
            switch(c){
                case 0: break;
                case 1: {
                        float Ni, Nii, Niii;
                        string disciplina, nome;
                        cout << "Which subject?" << endl;                       cin.ignore(); getline(cin, disciplina); disciplina.resize(39, ' ');
                        cout << "What is the name of the student?" << endl;     getline(cin, nome);                     nome.resize(39, ' ');
                        cout << "First note: ";                                 cin >> Ni;
                        cout << "Second note: ";                                cin >> Nii;
                        cout << "Thrird note: ";                                cin >> Niii;
                
                        SIGAA << left << setw(40) << disciplina << '|' << setw(39) << nome << '|' << setw(4) << Ni << '|' << setw(4) << Nii << '|' << setw(4) << Niii<< endl; // tamanho da linha = 40+39+4+4+4+(4)+(2)= 97 
                        continue;
                }
                case 2:{
                        int i=0;
                        char c;
                        SIGAA.seekg(0);
                        while(c!='|'){
                            SIGAA >> c;
                            cout << c;
                        }
                        continue;
                }
                case 3: search(); continue;
                case 4: notas(); continue;
                case 5: aluno(); continue;
                default: cout << "Put an valid number!\n"; continue;
            }
            break;
        }
        cout << "Thanks for your time!" << endl;
    }
    
    SIGAA.close();
    return 0;
}

void receber(){
//a) Receber novos dados, salvando na base de dados;
    float Ni, Nii, Niii;
    string disciplina, nome;
        cout << "Which subject?" << endl;                       getline(cin, disciplina); // Nao pega a primeira letra!
        cout << "What is the name of the student?" << endl;     getline(cin, nome);
        cout << "First note: ";                                 cin >> Ni;
        cout << "Second note: ";                                cin >> Nii;
        cout << "Thrird note: ";                                cin >> Niii;

        //SIGAA << disciplina << "|" << nome << endl
        //    << Ni << ' ' << Nii << ' ' << Niii << endl;
}

void listar(){
//b) Listar todas as disciplinas e os alunos matriculados em cada;
    
}

void search(){
//c) Ter opção de pesquisar se um dado aluno ou uma dada disciplinas está cadastrada.
    
}

void notas(){
//d) Listar as notas, parciais ou não, e a média dos alunos de uma dada disciplina cadastrada e a média atual, indicando se reprovado (média <7) ou aprovado (média >=7).  

}

void aluno(){
//e) Listar as notas, parciais ou não, e média de um dado aluno em todas as disciplinas matriculadas.    

}
