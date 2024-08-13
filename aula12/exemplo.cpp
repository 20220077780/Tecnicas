#include <iostream>
using namespace std;
#define TAM 100
void SETarray(double[], int&);
void GETarray(const double[], const int);

int main(){
    int n;
    double A[TAM];
    SETarray(A, n);
    cout << "A array tem " << n << " elementos!\n";
    GETarray(A, n);
    return 0;
}

void SETarray(double x[], int&n){ // & é uma referencia, ou seja, um apelido, a nickname!
    cout <<"Digite os valores e [0] para finalizar! \n";
    for(n=0; n<TAM; n++){
        cout << n << ": ";
        cin >> x[n];
        if(x[n]==0) break;
    }
}
void GETarray(const double y[], const int n){
    for(int i=0; i<TAM; i++)
        cout << i << ":\t" << y[i] << endl;
 }