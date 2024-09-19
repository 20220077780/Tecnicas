#include <iostream>
#include <cstring>
using namespace std;

class People{
    string nome;
    public:
        People(){nome = "Xamps Pessoa";}

        void setNome(string x){nome = x;}
        string getNome(){return nome;}

        void compare(People Y){
            if(nome == Y.nome) cout << "Nomes Iguais!!" << endl;
            else cout << "Nomes Diferentíssimos!!" << endl;
        }
};

int main(){
    People A, B;
    A.setNome("Rato Mega Rato");    B.setNome("Rato Little Rato");
    cout << A.getNome() << '\t' <<  B.getNome() << endl;
    A.compare(B);

    B.setNome(A.getNome());
    B.compare(A);
    return 0;
}