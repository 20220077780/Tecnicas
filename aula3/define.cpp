#include <iostream>
#define X 32

int soma(int,int);
int main(){
	std::cout << "Hey brother!! Wellcome to the game!\n";
	int Z = X + 5;
	int Y = soma(Z,3);
	std::cout << "That's your number: " << Y << "\n";
return 0;
}

int soma(int a,int b){
	std::cout << a << "+" << b << ":\n";
return a+b;
}
