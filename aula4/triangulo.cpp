#include <iostream>
#include <cmath>
const double pi = acos(-1);
int main(){
	 float x,y,h;
	 std::cout << "Fala moral, me diz aí 2 catetos por favor:\n";
	std::cin >> x >> y;
	 h = hypot(x,y);
	 std::cout << "Hipotenusa igual a " << h << '\n';
	 std::cout << "Primeiramente, seu angulo Theta é: " << asin(y/h)*180/pi << "\n";
	 std::cout << "\tSeno de Theta igual a " << sin(y/h) << '\n';
	 std::cout << "\tCosseno de Theta igual a " << cos(x/h) << '\n';
	 std::cout << "\tTangente de Theta igual a " << tan(y/x) << '\n';
	 std::cout << "\tsin(pi/6) = " << sin(pi/6) 
		 << " sin(pi/2) = " << sin(pi/2) 
		 << " sin(-3*pi/4) = " << sin(-3*pi/4) << '\n';
	 std::cout << "\tcos(pi/3) = " << cos(pi/3) 
		 << " cos(pi/2) = " << cos(pi/2) 
		 << " cos(-3*pi/4) = " << cos(-3*pi/4) << '\n';
	 std::cout << "\ttan (pi/4) = " << tan( pi/4)  // 45 deg.
		 << " tan(3*pi/4) = " << tan(3*pi/4)  // 135 deg
		 << " tan(5*pi/4) = " << tan(5*pi/4)  // -135 deg
		 << " tan(7*pi/4) = " << tan(7*pi/4) << '\n'; // -45 deg
 return 0;
}
