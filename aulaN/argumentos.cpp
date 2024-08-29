#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    if(argc!=4){
        cout << "Oia, deu erro!";
    }
    char nome[80];
    strcpy(nome, argv[1]);
    int p = atoi(argv[2]);
    float f = atof(argv[3]);
    cout << "Nome: " << nome << "\tVariavel P:" << p << "\tVariavel F: " << f << endl;
    return 0;

    ofstream saida("oia o teste.txt", ios::app);
    if(!saida){cout << "Errao!!"; return 1;}

    saida << nome << endl;
    saida << p << " " << f << endl;
    saida.close();
    return 0;
}