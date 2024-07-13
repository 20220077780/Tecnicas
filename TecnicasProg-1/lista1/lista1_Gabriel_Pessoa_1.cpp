//esccrever seu nome completo e os números entre 0 e a sua idade
#include <iostream>
int main(){
	std::cout << "Gabriel Gomes Pessôa \n";
	int c=0; // C esta inicializando em 0 pois queremos os numeros ENTRE 0 e a idade
	while(c<20){ //hoje é 04/07, a data de entrega é 11/07, meu aniversário é 08/07, então já to colocando 20 aninhos
		std::cout << c << ", ";
		c++;
	}
	std::cout << c << "\n";
return 0;
}
