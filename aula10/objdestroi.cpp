#include <iostream>
#include <cmath>
#define pi acos(-1)
using namespace std;

class circulo{
        float r, h;
        public:
                circulo(float a, float b){r=a; h=b;}
                circulo(float a){r=a; h=10;}
                circulo(){r=100; h=10;}
//              void setar(float a) {r=a;}
                ~circulo(){cout << "Objeto destruido!!\n";}
                float area(){ return pi*r*r;}
                float perimetro(){ return 2*pi*r;}
                float volume(){ return pi*r*r*h;}
};

int main(){
        float r, h;
        cout << "Me diga ai um valor de raio e altura: ";
        cin >> r; cin >> h;
        //circulo c3(r,h);
        for(int i=0; i<10; i++){
		circulo c3(r/(i+1), h);
        	cout << i << " - Area = " << c3.area() << " Perimetro = " << c3.perimetro() << " Volume = " << c3.volume() << endl;        //cout << "Destrutora: " << c4 << endl;
	}
return 0;
}
