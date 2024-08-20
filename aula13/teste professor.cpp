#include <iostream>
using namespace std;

void imprimir(float [], const int);
void intercambio(float& x, float& y);
void ordenar (float [], const int);

int main(){
    float a[10] = {25.5, 34.1, 27.6, 15.24, 3.27, 5.14, 6.21, 7.57, 4.61, 5.4};
    imprimir(a, 10);
    ordenar(a, 10);
    imprimir(a, 10);
    return 0;
}

void imprimir(float a[], const int n){
    for(int i = 0; i < n; i++)
    cout << a[i] << " ";
    cout << endl; 
}

void intercambio(float& x, float& y){
    float temp = x;
    x = y;
    y = temp; 
}

void ordenar(float a[], const int n){
    for(int i = n; i > 0; i--)
        for(int j = 0; j < i-1 ; j++)
            if(a[j] > a[j+1]) intercambio(a[j], a[j+1]);
}