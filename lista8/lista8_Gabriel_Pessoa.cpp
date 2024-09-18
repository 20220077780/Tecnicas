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
void e(float *vetor, int n);
void f(float *vetor, int n);

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
        << "[4] Average of vector values" << endl
        << "[5] Root mean square of vector values" << endl
        << "[6] Variance of vector values" << endl;
        int q;  cin >> q;
        switch (q){
            case 0: break;
            case 1: srand(time(NULL)); a(vetor, n); continue; //vetor já é o ponteiro do vetor!
            case 2: b(vetor, n); continue;
            case 3: c(vetor, n); continue;
            case 4: d(vetor, n); continue;
            case 5: e(vetor, n); continue;
            case 6: f(vetor, n); continue;
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
    cout << "The average of vector values is: " << media << endl;
    delete[] vetor; // ok funcionou!
}

void e(float *vetor, int n){
    float RMS = 0;
    for(int c=0; c<n; c++)
        RMS += pow(vetor[c], 2); 
    RMS = RMS/n;
    RMS = sqrt(RMS);
    cout << "The RMS value of the vector is: " << RMS << endl;
    delete[] vetor; // ok funcionou!
}

void f(float *vetor, int n){
    float media = 0;
    for(int c=0; c<n; c++)
        media += vetor[c]; 
    media = media/n;

    float var=0;
    for(int c=0; c<n; c++)
        var += pow((media - vetor[c]), 2);
    var = var/n; // Cuidado quando for comparar os results com uma calculadora online
//pelo fato de eu estar calculando a variancia de todo o vetor, considero uma
//variancia populacional, e nao uma amostral, como é standard nas calculadoras online

    cout << "The variance of vector values is: " << var << endl; 
    delete[] vetor; // ok funcionou!
}