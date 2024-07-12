//Os valores entre 1 e 100 e em seguida de 100 a 1.
#include <iostream>
int main(){
	int c=1; // C inicializa com 1 pois estou em busca justamente dos numeros entre 1 e 100
	std::cout << "Values between 1 and 100 on growing order:\n";//"Valores entre 1 e 100 na ordem crescente\n";
	while(c<=100){ // Note que aqui C=100 nao e escrito em tela, mas e usado posteriormente no "Valores de 100 a 1"
		std::cout << c << "\n";
                c++;
	}
	std::cout << "Values from 100 to 1:\n";//"Valores de 100 a 1\n";
	while(c>1){
		c = c-1;
		std::cout << c << "\n";
	}
return 0;
}
