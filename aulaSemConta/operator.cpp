#include <iostream>
#include <cmath>
using namespace std;

class Retangulo{
    int x, y;
    public:
        Retangulo(){x=0; y=0;}
        Retangulo operator + (Retangulo);
        Retangulo operator - (Retangulo);
        Retangulo operator * (float);
        void operator ++ ();
        void operator ++ (int);

        void set(int a, int b){x=a; y=b;}
        void show(){cout << "(x,y) = (" << x << "," << y << ")" << endl;}
        int area(){return x*y;}
};

Retangulo Retangulo::operator + (Retangulo Temp){
    Retangulo Temp2;
    Temp2.x = x+ Temp.x;
    Temp2.y = y + Temp.y;
    return Temp2;
}

Retangulo Retangulo::operator - (Retangulo Temp){
    Retangulo W;
    W.x = x + Temp.x;
    W.y = y*pow(Temp.y, 2);
    return W;
}

Retangulo Retangulo::operator * (float F){
    Retangulo W;
    W.x = x*F;
    W.y = y*F;
    return W;
}

void Retangulo::operator++(){
            x++; y++;
}

void Retangulo::operator++(int){
            x++; y++;
}

int main(){
    Retangulo A, B, C;
    A.set(1, 2);    cout << "A"; A.show();
    B.set(3, 4);    cout << "B"; B.show(); cout << endl;

    C = A + B;  C.show();
    C = A - B;  C.show();
    C = A*14;   C.show();
    ++C;        C.show();
    C++;        C.show();
    return 0;
}