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
using namespace std;

int f(int a){    return a*a + 5*a + 2;  }

int main(){
    char a;
    int n;
    cout << "Hello my friend! Please, type-me an character and, foward, an integer number:\n";
    cin >> a >> n;
    //////////////////////////////////////////////////////////////////////////
    if(a>=48 && a<=57){cout << "1) The character " << a << " is a number!\n";} //→ Mostre na tela se o caractere a é letra ou número (0 à 9)
    else{
        if((a>=65 && a<=90) || (a>=97 && a<=122)){cout << "1) The character " << a << " is a letter!\n";}
        else{cout << "1) The character " << a << " is neither a number nor a letter!\n";}
    }
    //////////////////////////////////////////////////////////////////////////
    if(n<=8 && n>0){
    int k = 0b1;
        k = k << (n-1);
        if(k & a){cout << "2) The " << n <<"° bit of " << a << " is 1!\n";}
        else{cout << "2) The " << n <<"° bit of " << a << " is 0!\n";}
    }
    else{cout << "2) Your number is not between 1 and 8!\n";}
    //////////////////////////////////////////////////////////////////////////
    if(n & 0b1){cout << "3) The number " << n << " is odd!\n";}
    else{cout << "3) The number " << n << " is pair!\n";}
    //////////////////////////////////////////////////////////////////////////
    cout << "4) f(" << n << ") = " << f(n) << endl;
    //////////////////////////////////////////////////////////////////////////
    int c=1;
    cout << "5) \n";
    while(c<=n){
        int l=1;
        while(l<=c){cout << a; l++;}
        cout << "\n";
        ++c;
    }
    //////////////////////////////////////////////////////////////////////////
    cout << "Thanks for your time, see you later!\n";
return 0;
}