//Imprima o diâmetro, o perímetro e a área de um círculo cujo raio seja dado pelo usuário. Utilize o operador #define para definir o valor de pi.

#include <iostream>
#include <cmath>
#define pi acos(-1)
using namespace std;
float circulo(float);

int main(){
  float r, DPA[3];
  int c=0;
  cout << "Hey brother! Type here bellow the radius of a circle: \n";
  cin >> r;
  cout << "Pi = " << pi < '\n';
  DPA[3] = circulo(r);
  cout << "Respectvaly, the diameter, perimeter and area of a circle with radius " << r << "are: ";
  while(c<3){
    cout << DPA[c] << " ";
    c++;
  }
  cout << '\n';
return 0;
}

float circulo(float R){
  float diameter, perimeter, area, dpa[3];
  diameter = 2*R;
  perimeter = 2*pi*R;
  area = pi*pow(R, 2);
  dpa[3] = [diameter, perimeter, area];
  return dpa[3];
}



