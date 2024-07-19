/*
Elabore um código em C++ que receba do usuário dois valores, um valor char a e um inteiro n.
→ Mostre na tela se o caractere a é letra ou número (0 à 9)
→ Mostre na tela o valor em binário do n-ésimo bit de a, dado que n esteja entre 1 e 8
→ Mostre na tela se n é par ou ímpar
→ Mostre na tela o valor de f(n) = n²+5n +2
→ Mostre na tela uma semi-pirâmide, como mostrada abaixo, em que sua
altura seja de acordo com o valor de n dado e o caractere da pirâmide
seja o valor de a.
*/
#include <iostream>
#include <bitset>
using namespace std;
int main(){
    char a;
    int n;
    cout << "Hello my friend! Please, type-me an character and, foward, an integer number:\n";
    cin >> a >> n;
    //////////////////////////////////////////////////////////////////////////
    if(a>=48 && a<=57){cout << "1) The character " << a << " is a number!\n";} //→ Mostre na tela se o caractere a é letra ou número (0 à 9)
    else{
        if(a>=65 && a<=90 || a>=97 && a<=122){cout << "1) The character " << a << " is a letter!\n";}
        else{cout << "1) The character " << a << " is neither a number nor a letter!\n";}
    }
    //////////////////////////////////////////////////////////////////////////
    if(n<=8 && n>0){
        int k=1;//l=1;
        k=k << (n-1);
        bitset<8> binario(k);
        cout << n << endl;
        cout << binario << endl;
        /*l<<=(n-1); // esse tipo de estrutura funciona para fazer deslocamento bit a bit. Correia eh bala! <3
        bitset<8> f(l);
        cout << n << endl;
        cout << f << endl;*/
    }



return 0;
}