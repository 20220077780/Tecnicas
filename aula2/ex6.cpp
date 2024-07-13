//criar um codigo que va de -x a x 
#include <iostream>
int main(){
	int x;
	std::cout << "Digai macho, diz um numero brabo assim que tu gosta bem muito \t";
	std::cin >> x;
	int c = -x;
	while (c<=x){
		std::cout << "linha - " << c << "\n";
		c++;
	}


	return 0;
}
