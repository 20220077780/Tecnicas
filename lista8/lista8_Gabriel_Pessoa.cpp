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

void a(float *vetor, int n);
void b(float *vetor, int n);
void c(float *vetor, int n);
void d(float *vetor, int n);
void e();
void f();

int n=0;

int main(){
    srand(time(NULL));
    float *vetor = new float[n];
    while(1){
        if(!n){
            cout << "Hello! Wellcome to the menu. We are going to create a vector!\nWhat is the number of elements of the vector? ";
            cin >> n;
            cout << "Great! You have created a vector with " << n << " elements." << endl;
            float *vetor = new float[n];
        }
        
        cout << "What do you want to do now?: \n"
        << "[0] Leave" << endl
        << "[1] Pseudo-aleatory vector" << endl
        << "[2] 'Sine-vector'" << endl
        << "[3] 'K-vector'" << endl
        << "[4] Average value of vector" << endl
        << "[5] Quadractic average value of vector" << endl
        << "[6] Variance values of vector" << endl;
        int q;  cin >> q;
        switch (q){
            case 0: break;
            case 1: srand(time(NULL)); a(vetor, n); continue; //vetor já é o ponteiro do vetor!
            case 2: b(vetor, n); continue;
            case 3: c(vetor, n); continue;
            case 4: d(vetor, n); continue;
//            case 5: e();
//            case 6: f();
        }
        if(!q) break;
    }
    cout << "\nYOU HAVE LEAVED LEAVED!!!" << endl;
}

void a(float *vetor, int n){
    cout << "Your vector is: [";
    for(int c=0; c<n; c++){
        vetor[c] = rand()%100 +1;
        if(c<(n-1)) cout << vetor[c] << ", ";
        else cout << vetor[c];
    }
    cout << "]" << endl;
}

void b(float *vetor, int n){
    cout << "Your vector is: [";
    for(int c=0; c<n; c++){
        vetor[c] = sin(c);
        if(c<(n-1)) cout << vetor[c] << ", ";
        else cout << vetor[c];
    }
    cout << "]" << endl;
}

void c(float *vetor, int n){
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

void d(float *vetor, int n){
    float media = 0;
    for(int c=0; c<n; c++)
        media += vetor[c]; 
    media = media/n;
    cout << "The average value of the vector is: " << media << endl;
    delete[] vetor; // ok funcionou!
}