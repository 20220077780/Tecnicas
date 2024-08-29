#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int p, c=0;
    char nome[80];
    float CRA;
    ifstream entry("oia o teste.txt");
    if(!entry){cout << "Teu arquivo nao vai ser aberto!!\n"; return 1;}
    while(c<10){
        entry >> nome >> p >> CRA;

        cout << "Nome: " << nome << "\t";
        cout << "Idade: " << p << "\t";
        cout << "CRA: " << CRA << endl;
        c++;
    }
    entry.close();
    return 0;

}