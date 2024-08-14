//Faça um programa que dê entrada a 3 nomes de pessoas e os envie para a tela em ordem alfabética
#include <iostream>
#include <string>
using namespace std;

int main(){
    string A, B, C;
    string alfa[3];
    char maior='A';
    cout << "Digite o primeiro nome: ";                     getline(cin, A);
    cout << "Digite o segundo nome: ";     cin.ignore();    getline(cin, B);
    cout << "Digite o terceiro nome: ";    cin.ignore();    getline(cin, C);
    cout << "Os nomes foram; " << A << ", " << B << " e " << C << endl;
    for(int c=0; (A[c]!=B[c]) && (B[c]!=C[c]) && (C[c]!=A[c]); c++){
        if(A[c] >= B[c] && A[c] >= C[c]) {
            alfa[0] = A;
            if(B[c])}
        else{

        }
   }
//      Combinações possiveis:
    //  ABC, ACB

//     G A B R I E L
//     A F O N S 0
//     G U I L H E R M E
//     P A D I L H A   
    
    

    return 0;
}