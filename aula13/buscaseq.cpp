#include <iostream>
#define W 10
using namespace std;

int buscape(int [], int , int);

int main(){
    int b, r[W];    int a[W];
    srand(time(NULL));

    for(b=0; b<W; b++) a[b] = rand()%10;       cout << "Sua array é: ";
    for(b=0; b<W; b++) cout << a[b] << " ";     cout << endl;

    cout << "Digite um valor a ser buscado em sua lista: ";     cin >> b;
    r[W] = buscape(a, b, W);
    for(b=0; b<W; b++){
        if(r[b] == -1) cout << "Valor nao encontrado, baby!\n";
        else cout << "Indice = " << b << " e valor " << a[r[b]] << endl;
    }


    return 0;
}

int buscape(int array[], int b, int Tam){
    enum{fake, TRUE};
    int finded = fake;
    int i=0, achei[Tam];
    for(int k=0; k<Tam; k++) achei[k] = -1;
    while(i<Tam){
        if(array[i] == b) {finded = TRUE; achei[i] = b;}
        else i++;
    }
    return achei[];
}