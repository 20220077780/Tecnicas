/*
Faça um programa que dê entrada a uma senha de 8 caracteres do usuário e 
verifique se contem somente letra minúsculas
*/
#include <iostream>
using namespace std;

int main(){
    char senha[8];
    cout << "Digite uma senha de 8 caracteres: ";
    for(int c; c<8; c++) {
        cin >> senha[c];
    }
    int k=0;
    for(int c; c<8; c++) if(senha[c]<=90 && senha[c]>=65) k++;

    if(k==8) cout << "Sua senha contém apenas caraceres MAIÚSCULOS!\n";
    else cout << "Sua senha NÃO contém apenas caraceres maiúsculos!\n";

    return 0;
}
//foi