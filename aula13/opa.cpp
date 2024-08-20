#include <iostream>
#define W 10
using namespace std;

void print(float [], const int);
void intercambio(float& x, float& y);
void ordenar(float [], const int);

int main(){
    srand(time(NULL));
    float a[W];
    for(int k=0; k<W; k++){
        a[k] = rand()%100;
    }
    print(a, W);
    ordenar(a, W);
    print(a, W);
    return 0;
}

void print(float array[], const int n){
    cout << "Sua array principal é: ";
    for(int i =0; i<n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void intercambio(float& x, float& y){
    float temp = x;
    x = y;
    y = temp;
}

void ordenar(float a[], const int n){
    for(int i=n; i>0; i--)
        for(int j=0; j<i-1; j++)
            if(a[j]>a[j+1]) intercambio(a[j], a[j+1]);
}