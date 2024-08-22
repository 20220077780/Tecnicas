/*
Crie uma classe para representar um VETOR TRIDIMENSIONAL que 
contenha como variáveis privadas os valores de X, Y e Z do vetor. Crie 
funções e/ou variáveis membros públicas necessárias para realizar o que 
se pede abaixo.
a) Elabore um programa em que crie uma ARRAY de 10 objetos do tipo 
VETOR e que tenha opção, em uma tela inicial, para o usuário escolher 
uma das tarefas abaixo:
I. Gerar valores pseudoaleatórios entre -5 e 5 para os valores de X,Y 
e Z de todos os vetores criados OU receber do usuário esses 
valores.
II. Computar e imprimir, por meio de funções definidas pelo usuário, a 
magnitude de todos os vetores criados, dado que foram inicializados 
pela operação anterior.
III. Imprimir todos os vetores em ordem crescente de acordo com a 
magnitude deles, dado que foram inicializados pela operação 
anterior.
IV. Computar e imprimir, por meio de funções definidas pelo usuário, a 
soma, a subtração e a distância entre 2 vetores dos 10 criados, 
dado que foram inicializados pela operação anterior.
V. Tenha uma opção de retornar à tela inicial.
*/
#include <iostream>
#include <cmath>
#include <ctime>

#define TAM 5
using namespace std;

// Cria uma funcao apenas para calcular a magnitude, tenta usar o strcmp para comparar as strings
class Vetor{
    int x, y, z;
    public:
    Vetor(){x=100; y=100; z=100;}

    void setx(int a){x = a;}    ; void sety(int a){y = a;}    ; void setz(int a){z = a;};
    int getx(){return x;}       ; int gety(){return y;}       ; int getz(){return z;};
    void pseudoaleatorios(int index);                         void show(int index);
    
    float magnitude();
    //int ordem();
    //int aritimetica();

};

int main(){
    srand(time(NULL));
    Vetor aee[TAM];
    int c=1, i;
    while(c){
        cout << "Ola, o que desejas?\n"
        << "[1] Gerar vetores pseudoaleatorios\n"
        << "[2] Magnitude de vetores\n"
        << "[3] Ordenar vetores\n"
        << "[4] Aritimética vetorial\n"
        << "[0] Sair\n";

        cin >> c;
        switch(c){
            case 0: break;
            case 1: {
                for(i=0; i<TAM; i++) aee[i].pseudoaleatorios(i);
                for(i=0; i<TAM; i++) aee[i].show(i);
                cout << "Desejas voltar ao menu ou sair [0]? ";
                cin >> c;
                break;}
            case 2: {
                for(i=0; i<TAM; i++) cout << "Magnitude do vetor " << i << ": " << aee[i].magnitude() << endl;
                break;}
           // case 3: for(i=0; i<TAM; i++) c=aee[i].ordem(); break;
           // case 4: for(i=0; i<TAM; i++) c=aee[i].aritimetica(); break;
            default: cout << "Por favor, digite um valor valido!\n"; 
        }
    }


    return 0;
}
void Vetor::pseudoaleatorios(int index){
    int k;
    cout << " Digite um numero inteiro para Setar valores [PAR] ou Gerar aleatoriamente[IMPAR] do vetor " << index<< " : ";
    cin >> k;
    if(k%2==0){
        int x, y, z;
        cout << "Digite as coordenadas x y z desse seu vetor: ";
        cin >> x;           cin >> y;           cin >> z;
        setx(x);            sety(y);            setz(z);
    }
    else{ setx((rand()%11)-5);    sety((rand()%11)-5);    setz((rand()%11)-5); }
}

void Vetor::show(int index){
    if(index==0) cout << "Vetores criados: \n";
    cout << "\tVetor " << index << ": [" << Vetor::getx() << "][" << Vetor::gety() << "][" << Vetor::getz() << "]\n";
}

float Vetor::magnitude(){return sqrt(x*x + y*y + z*z);}
