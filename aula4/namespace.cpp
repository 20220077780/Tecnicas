#include <iostream>
namespace gabriel{
	int idade = 20;
	float cra = 9.01;
	void icid() { idade++; std::cout << "\n\tFELIZ ANIVERSÁRIO!!!\n";}
}
int main(){
	std::cout << gabriel::idade << "\n";
	gabriel::icid();
	std::cout << gabriel::idade << "\n";
return 0;
}
