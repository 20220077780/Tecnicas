/*
→ Imprima a raiz quadrada de todos os números números pares de 1 até 100
→ Crie 2 variáveis (uma int e outra float) e receba do usuários um valor inteiro e de um 
valor float, e depois imprima a raiz quadrada de cada um deles e a raiz quadrada da 
soma dos quadrados dos valores
→ Imprima a hipotenusa de um triângulo retângulo cujos catetos sejam digitados pelo 
usuário.
→ Imprima o seno, cosseno e tangente dos ângulos de um triângulo retângulo cujos 
catetos sejam digitados pelo usuário.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
        float dois, tres, hip;
        int um, c=2;
        ////////////////////////////////////////////////////////////////
        cout << "A) In vetorial notation, follows the pairs numbers and their respectively square root:\n";
        while(c<=100){
                cout << "\t(" << c << " , " << sqrt(c) << ")\n";
                c = c+2;
        }
        ////////////////////////////////////////////////////////////////
        cout << "Ok, now, please, type-me 2 numbers: The first one is gonna be an integer, while the next one is gonna be an float:\n";
        cin >> um >> dois;
        cout << "B) The square root of " << um << " is " << sqrt(um) << ", while the square root of " << dois << " is " << sqrt(dois)
                << ".\nNow, you problably don't know, but the square root of the summerize of this 2 numbers squared is " << sqrt( (um*um) + (dois*dois) ) << ". Amazing, don't you think?!\n";
        ////////////////////////////////////////////////////////////////
        cout << "Great! Type me 2 numbers that represents the cathetus of an rectangule triangule:\n";
        cin >> dois >> tres;
        cout << "C) The supposed hipotenuse of that triangule is: " << sqrt( (tres*tres) + (dois*dois)) << '\n';
        ////////////////////////////////////////////////////////////////
        cout << "Finnaly, let's go to our last task! PLEASE, write here below 2 numbers:\n";
        cin >> dois >> tres;
        hip = sqrt( (tres*tres) + (dois*dois));
        cout << "D) There is know that a rectangule triangule that have this 2 numbers as cathetus have 2 angules.\nThe angule opposit to " << dois <<" have the following characteristcs:\n" 
                << "\tsine = " << dois/hip << ",\n\tcossine = " << tres/hip << ",\n\ttangent = " << dois/tres << '\n' << "Now, the angule opposit to " << tres <<" have the following characteristcs:\n" 
                << "\tsine = " << tres/hip << ",\n\tcossine = " << dois/hip << ",\n\ttangent = " << pow(dois/tres, -1) << '\n';
        ////////////////////////////////////////////////////////////////
        cout << "Goodbye bro, thanks for your time!\n";
return 0;
}
