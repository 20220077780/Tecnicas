/*
Imprima o diâmetro, o perímetro e a área de um círculo cujo raio seja dado pelo 
usuário. Utilize o operador #define para definir o valor de pi.
*/
#include <iostream>
#include <cmath>
#include <array>
#define pi acos(-1)
using namespace std;

array<float, 3> circulo(float R){
  array<float, 3> peregrino;
  peregrino[0] = 2*R;
  peregrino[1] = 2*pi*R;
  peregrino[2] = pi*R*R;
  return peregrino;
}

int main(){
  array<float, 3> DPA;
  float r;
  int c=0;
  cout << "Hey brother! Type here bellow the radius of a circle: \n";
  cin >> r;
  //cout << "Pi = " << pi << '\n';
  DPA = circulo(r);
  cout << "Respectvaly, the diameter, perimeter and area of a circle with radius " << r << " are: ";
  while(c<3){
    cout << DPA[c] << " ";
    c++;
  }
  cout << '\n';
return 0;
}