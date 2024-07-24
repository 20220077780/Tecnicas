/*
Construindo um menu, elabore um código que solicite ao usuário um número, de acordo
com as opções abaixo numeradas de I até VI, para que o usuário tenha opção de escolher, na
tela inicial, quais das operações abaixo será executada e ter uma opção de retornar à tela
inicial ou sair do programa (use a estrutura switch-case).

I. Solicite ao usuário duas letras do alfabeto (que podem ser tanto maiúsculas quanto minúsculas) e
mostre na tela a sequência completa de letras entre essas duas letras.
II. Mostre na tela o valor de y do somatório �� = σ��=��
��
(�� + 3), em que os valores de a e b inteiros sejam
dados pelo usuário.
III. Mostre na tela a raiz quadrada de todos os números inteiros situados no intervalo a e b, sendo a e b
dados pelo usuário.
IV. Mostre na tela o padrão numérico/asteriscos abaixo de acordo com o valor de n, dado pelo usuário (no
exemplo abaixo, n = 6):
▪ 123456
▪ 12345*
▪ 1234**
▪ 123***
▪ 12****
▪ 1*****
V. Mostre na tela os valores de f(x) no intervalo [xmin,..., xmax com passo δ] da função f(x) = ax
2 + bx + c, em
que os valores de xmin, xmax, δ, a, b e c sejam dados pelo usuário. Todos os valores envolvidos devem ser
em ponto flutuante.
VI. Solicite ao usuários os valores de a, b e c de uma equação de 2º grau na forma ax2+bx+c e mostre nas
tela os zeros reais e imaginários, caso tenham.
*/
#include <iostream>
using namespace std;

void one();
void two();
void three();
void four();
void five();
void six();

int main(){
    int c=1;
    while(c){
        cout << "Hello! There is an menu for your options in this code:\n";
        cout << "\t1) The letters between 2 letters.\n\t"<<
        "2) A finite sum of (x+3) from X=A to X=B.\n\t" <<
        "3) Squareroot of X from X=A to X=B.\n\t" <<
        "4) An numeric pattern.\n\t" <<
        "5) The result of f(x) in an determinated pace.\n\t" <<
        "6) The roots of a quadratic equation:\n" <<
        "Type 0 to exit!\n";
        int k;
        cin >> k;
        switch (k){
            case 0: c=0; break;
            case 1: one(); break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: break;
            case 6: break;
        
        default: cout << "Please, type an value beetween 0 and 6.\n"; break;
        }
    }
    cout << "See you latter!\n";
    return 0;
}

void one(){
    int a, b;
    cout << "Please, type two letters!\n";
    

}