//Imprima na tela seu nome completo e o valores entre 0 e sua idade em linhas separadas.
#include <iostream>
#include <string>
using namespace std;

int main(){
        int c=1;
        string nome("Gabriel Gomes Pessoa");
        cout << "Your name is " << nome << " and your age was already: \n";
        while(c<=20){
                cout << "\t" << c << "\n";
                c++;
        }
return 0;
}
