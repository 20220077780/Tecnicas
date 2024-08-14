//Faça um programa que retorne a posição de um dado caractere dentro de uma string dada pelo usuário.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string palavra;
    cout << "Opa, digite uma string por favor: ";
    cin >> palavra;
    char caractere;
    cout << "Qual caractere tu queres que eu encontre? ";
    cin >> caractere;

    cout << "O caractere '" << caractere << "' está nas posições ";
    for(int c=0; palavra[c]!='\0'; c++)
        if(palavra[c] == caractere) cout << c+1 << " ";
    cout << endl;

    return 0;
}
//foi