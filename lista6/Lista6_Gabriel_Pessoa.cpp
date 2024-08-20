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
using namespace std;

// Cria uma funcao apenas para calcular a magnitude, tenta usar o strcmp para comparar as strings
class aee{
    int x, y, z;
    public:

    void setx(int a){x = a;}    ; void sety(int a){y = a;}    ; void setz(int a){z = a;};
    int getx(){return x;}       ; int gety(){return y;}       ; int getz(){return z;};
    float magnitude(int x, int y, int z);

};

int main(){



    return 0;
}


float magnitude(int x, int y, int z){
    float M = x*x + y*y + z*z;
    return sqrt(M);
}
