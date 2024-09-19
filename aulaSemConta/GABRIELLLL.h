#include <iostream>
using namespace std;
class veiculo{
    int passageiros, rodas;
    public:
        void SETpass(int a){passageiros = a;};  int GETpass(){return passageiros;};
        void SETroda(int a){rodas = a;};        int GETroda(){return rodas;};
};

class caminhao : public veiculo{
    int carga;
    public:
        void SETcarga(int a){carga = a;};  int GETcarga(){return carga;};
        void show();
};

class automovel : public veiculo{
    int tipo;
    public:
        void SETtipo(int a){tipo = a;};  int GETtipo(){return tipo;};
        void show();
};
//////////////////////////////////////////////////////////////////////////////////////////
void caminhao::show(){
    cout << "Dados do seu CAMINHÃO vrummmm:\n"
    << "Numero de passageiros: " << GETpass() << endl
    << "Numero de rodas: " << GETroda() << endl
    << "Carga suportada : " << GETcarga() << " (Kg)\n" << endl;
}

void automovel::show(){
    cout << "Dados do seu AUTOMÓVOEL vrummmm:\n"
    << "Numero de passageiros: " << GETpass() << endl
    << "Numero de rodas: " << GETroda() << endl
    << "Tipo de automovel: ";
    switch (GETtipo()){
        case 0: cout << "motocicleta\n" << endl; break;
        case 1: cout << "picape\n" << endl; break;
        case 2: cout << "SUV\n" << endl; break;
        case 3: cout << "mini van da morte\n" << endl; break;
    }
}