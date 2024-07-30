#include <iostream>
#include <cmath>
using namespace std;

class circulo{
    int r;
    float pi=acos(-1);
    public:
        void values(int);
        float area();
        float perimetro();
};

void circulo::values(int a){
    if(a<0) {
        a = -a;
        cout << "Teu raio foi alterado\n";
    }
    r = a;
}

float circulo::area(void){return (pi*r*r);}
float circulo::perimetro(void){return (2*pi*r);}

int main(){
    circulo c;
    int raio;
    cout << "Salve brother! Me diz um raio aí: ";
    cin >> raio;
    
    c.values(raio);
    cout << "Com o raio que me destes, te calculei a área e o perimetro de um circulo: ( " << c.area() << " , " << c.perimetro() << " )\n";
    return 0;
}
