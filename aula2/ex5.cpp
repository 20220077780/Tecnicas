//Faça um programa que recebe do usuario o valor maximo a ser impresso
#include <iostream>

int main(){
	int verstappen=0;
	int c=0;
	std::cout << "Diz um valor ai macho";
	std::cin >> verstappen;
	while(c<2*verstappen){
		std::cout << "linha - " << c << "\n";
		c++;
	}
	std::cout << "Max Verstappen wins again!!!\n";
return 0;

}
