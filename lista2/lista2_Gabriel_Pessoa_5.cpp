/*
Mostre na tela os valores dos senos e cossenos dos ângulos 0° até 90° com passo de 5°
*/
#include <iostream>
#include <cmath>
#define pi acos(-1)
using namespace std;

float radiano(int);

int main(){
    int ang = 0, p = 5;
    float rad, sen, coss;
    cout << "The sine and cossine of the angules beetween 0 and 90 degrees are:\n";
    while(ang <= 90){
        rad = radiano(ang);
        sen = sin(rad);
        coss = cos(rad);

        cout << "\tangule = " << ang << "  |  sine = " << sen << "  |  cossine = " << coss << "\n";
        ang = ang + p;
    }

    return 0;
}

float radiano(int a){ return a*pi/180; }