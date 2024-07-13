#include <iostream>
#include <cmath>
float radius(float, float);
float angle(float, float);
int main(){
	float x, y, r, a;
	std::cout << "Hello again brother! Tell me a cartasian coordenade that I'll transform that in polar coordenade: \n";
	std::cin >> x >> y;
	r = radius(x, y);
	a = angle(x, y);
	std::cout << "The coordenade (" << x << "," << y << ") in polar is (" << x << "," << y << ")\n";
return 0;
}
float radius(float a, float b){return sqrt(a*a + b*b);}
float angle(float a, float b){return atan(a/b);}
