/*
Faça um código que tenha um menu de opções de usuários e que permita ao usuários
escolher uma das opções abaixo, considerando que o programa receba do usuário um
valor n e crie dinamicamente um vetor de n elementos float:

a) Inicialize os elementos do vetor com valores 
pseudo-aleatórios;
b) Inicialize os elementos do vetor com o seno(i) do seu 
i-ésimo elemento;
c) Inicialize os elementos do vetor com um valor 
constante dado pelo usuário;
d) Compute e imprima o valor médio dos valores do 
vetor e desaloque a memória alocada.
e) Compute e imprima o valor médio quadrático dos 
valores do vetor e desaloque a memória alocada.
f) Compute e imprima a valor da variância dos valores 
do vetor e desaloque a memória alocada.
*/
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void a();
void b();
void c();
void d();
void e();
void f();

int main(){
    srand(time(NULL));
    while(1){
        cout << "Hello! Wellcome to the menu. What do you want to do?: \n"
        << "[0] Leave" << endl
        << "[1] Create a pseudo-aleatory vector" << endl
        << "[2] Create a 'sine-vector'" << endl
        << "[3] Create a 'k-vector'" << endl
        << "[4] Average value of vector" << endl
        << "[5] Quadractic average value of vector" << endl
        << "[6] Variance values of vector" << endl;
        int q;  cin >> q;
        switch (q){
            case 0: break;
            case 1: srand(time(NULL)); a(); continue;
            case 2: b(); continue;
            case 3: c(); continue;
//            case 4: d();
//            case 5: e();
//            case 6: f();
        }
    }
}

void a(){
    cout << "What is the number of elements of the vector? ";
    int n;  cin >> n;
    float *vetor = new float[n];
    cout << "Your vector is: [";
    for(int c=0; c<n; c++){
        vetor[c] = rand()%100 +1;
        if(c<(n-1)) cout << vetor[c] << ", ";
        else cout << vetor[c];
    }
    cout << "]" << endl;
}

void b(){
    cout << "What is the number of elements of the vector? ";
    int n;  cin >> n;
    float *vetor = new float[n];
    cout << "Your vector is: [";
    for(int c=0; c<n; c++){
        vetor[c] = sin(c);
        if(c<(n-1)) cout << vetor[c] << ", ";
        else cout << vetor[c];
    }
    cout << "]" << endl;
}

void c(){
    cout << "What is the number of elements of the vector? ";
    int n;  cin >> n;
    float *vetor = new float[n];
    cout << "Which constant do you want to put in your vector? ";
    float k; cin >> k;
    cout << "Your vector is: [";
    for(int c=0; c<n; c++){
        vetor[c] = k;
        if(c<(n-1)) cout << vetor[c] << ", ";
        else cout << vetor[c];
    }
    cout << "]" << endl;
}