#include <iostream>
float media(float, float);
int main(){
	float a, b;
	int loop = 1;
	while(loop == 1){
		std::cout << "Hi! Type-me 2 aleatroy real numbers: \n";
		std::cin >> a >> b;
		float M = media(a, b);
		std::cout << "The middle name between this 2 is: " << M << "\n";
		std::cout << "Do you want to make it again? \n\t 0 to quit.\n\t 1 to stay.\n";
		std::cin >> loop;
	}
return 0;
}

float media(float a, float b){
	return (a+b)/2;
}
