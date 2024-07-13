/*
Imprima o diâmetro, o perímetro e a área de um círculo cujo raio seja dado pelo 
usuário. Utilize o operador #define para definir o valor de pi.
*/
#include <iostream>
#include <cmath>
#define pi acos(-1)
using namespace std;

int main(){
  float r, DPA[3];
  int c=0;
  cout << "Hey brother! Type here bellow the radius of a circle: \n";
  cin >> r;
  //cout << "Pi = " << pi << '\n';  
  cout << "Respectvaly, the diameter, perimeter and area of a circle with radius " << r << " are: "
    << 2*r << ", " << 2*pi*r << ", " << pi*r*r << '\n' ;
return 0;
}



