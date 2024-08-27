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

#define TAM 10
using namespace std;

void ordem();
void aritimetica();
void soma(int, int);
void sub(int, int);
int dist(int, int);

// Cria uma funcao apenas para calcular a magnitude, tenta usar o strcmp para comparar as strings
class Vetor{
    int x, y, z;
    public:
        Vetor(){x=100; y=100; z=100;}
        void setx(int a){x = a;}    ; void sety(int a){y = a;}    ; void setz(int a){z = a;};
        int getx(){return x;}       ; int gety(){return y;}       ; int getz(){return z;};

        void pseudoaleatorios(int index);
        void show(int index);
        float magnitude();
        //void ordem();

};

Vetor aee[TAM];
int main(){
    srand(time(NULL));
    int c=1, i;
    cout << "Ola, o que desejas?\n";
    while(c){
        cout << "[1] Gerar vetores pseudoaleatorios\n"
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
                break;
                }

            case 2: {
                for(i=0; i<TAM; i++) cout << "Magnitude do vetor " << i+1 << ": " << aee[i].magnitude() << endl;
                cout << "Desejas voltar ao menu ou sair [0]? ";
                cin >> c;
                break;
                }

            case 3: {
                ordem();
                cout << "Desejas voltar ao menu ou sair [0]? ";
                cin >> c;
                break;
                }
            case 4: aritimetica(); break;
            default: cout << "Por favor, digite um valor valido!\n"; 
        }
    }
    cout << "Obrigado pelo seu tempo!\n";
    return 0;
}
void Vetor::pseudoaleatorios(int index){
    int k;
    cout << " Digite um numero inteiro para Setar valores [PAR] ou Gerar aleatoriamente[IMPAR] do vetor " << index+1 << " : ";
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
    cout << "\tVetor " << index+1 << ": [" << Vetor::getx() << "][" << Vetor::gety() << "][" << Vetor::getz() << "]\n";
}

float Vetor::magnitude(){return sqrt(x*x + y*y + z*z);}

void ordem(){//algoritimo da bolha!
    int ordem[TAM];
    int i, k;
    for(i=0; i<TAM; i++) ordem[i] = k;

//    for(k=TAM; k>0; k--)    
//        for(i=0; i<k-1; i++)
//            if(ordem[i]>ordem[i+1]){
//                float temp = ordem[i];
//                ordem [i] = ordem[i+1];
//                ordem[i+1] = temp;
//            }
    for(k=TAM; k>0; k--)    
        for(i=0; i<k-1; i++)
            if(aee[ordem[i]].magnitude() > aee[ordem[i+1]].magnitude()){
                int temp = ordem[i];
                ordem [i] = ordem[i+1];
                ordem[i+1] = temp;
            }
    cout <<"Ordem: ";
    for(i=0; i<TAM; i++) cout << ordem[i] << " "; //Não consegui resolver e não deu tempo
}
/*
III. Imprimir todos os vetores em ordem crescente de acordo com a 
magnitude deles, dado que foram inicializados pela operação 
anterior.
*/
void aritimetica(){
    cout << "Diga-me 2 vetores de 1 a " << TAM << " e eu mostrarei-te soma, subtração e distancia entre 2 vetores\n";
    int c, k;
    cin >> c;    cin >> k;
    cout << "Vetor soma: "; soma(c, k);
    cout << "Vetor subtracao: "; sub(c, k);
    cout << "Distancia entre os 2 vetores: " << dist(c, k) << endl;
}

void soma(int a, int b){
    int x = aee[a-1].getx() + aee[b-1].getx();
    int y = aee[a-1].gety() + aee[b-1].gety();
    int z = aee[a-1].getz() + aee[b-1].getz();
    float Mag = sqrt(x*x + y*y + z*z);
    cout << "[" << x << "][" << y << "][" << z << "]\tMagnitude = " << Mag << endl;
}
void sub(int a, int b){
    int x = aee[a-1].getx() - aee[b-1].getx();
    int y = aee[a-1].gety() - aee[b-1].gety();
    int z = aee[a-1].getz() - aee[b-1].getz();
    float Mag = sqrt(x*x + y*y + z*z);
    cout << "[" << x << "][" << y << "][" << z << "]\tMagnitude = " << Mag << endl;
}
int dist( int a, int b){
    if(a>b) return a-b;
    return b-a;
} /* No plano cartesiano, 2 vetores tem seu inicio no mesmo ponto: a origem.
Sendo assim, a resposta para a distancia entre 2 vetores mais literal seria 0 para quaisquer 2 vetores, o que nao
faria sentido ser perguntado. Há também a interpretação em que a distancia entre os 2 vetores seja a distancia
entre as extremidades desses 2 vetores, nesse caso, essa distancia seria justamente a magnitude da diferença, que
foi perguntado no mesmo topico pelo professor PRotásio, então novamente não serviria como resposta para a distância.
A unica resposta correta ao meu ver seria a distancia dos INDEX, o que é extremamente fácil, a-b, porém, o fato de ser
muito fácil me assusta: as coisas na vida de técnicas de programação não são tão triviais assim!
*/