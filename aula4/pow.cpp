#include <iostream>
#include <cmath>
int main(){
	int x;
	std::cout << "Hi brother! Tell me a number: ";
	std::cin >> x;
	std::cout << "Ok, " << x << " elevado a 10 é: " << std::pow(x, 10) << "\n"
		<< x << " elevado a 0.5, ou seja, sua raiz, é: " << std::pow(x, 0.5) << "\n"
		<< "-" << x << " elevado a -3 é: " << std::pow(-x, -3) << "\n";
	std::cout << " Agora vamos para alguns valores especiais:\n"
		<< "-" << x << " elevado a NAN é: " << std::pow(-x, NAN) << "\n"
		<< x << " elevado a NAN é: " << std::pow(x, NAN) << "\n"
		<< "INFINITY elevado a " << x << " é: " << std::pow(INFINITY, x) << "\n"
		<< x << " elevado a -INFINITY é: " << std::pow(x, -INFINITY) << "\n";
return 0;
}
