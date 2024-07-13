#include <iostream>
#include <cmath>
int main(){
	int x, c = 1;
	std::cout << "Whats up brother! Here we are going so see some nice stuffs: \nFisrt of all, tell-me a number: ";
	std::cin >> x;
	std::cout << "The squareroot of 1 to 10 is:\n";
	while(c <=10){
		std::cout << "\tSquareroot of " << c << " = " << sqrt(c) << '\n';
		c++;
	}
	std::cout << "\nNow, the squareroot of your number is: " << sqrt(x) << "\n";
return 0;
}
