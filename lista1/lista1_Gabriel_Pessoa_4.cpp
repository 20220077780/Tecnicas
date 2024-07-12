//O padrão ao lado em que N é dado pelo usuário.
#include <iostream>
int main(){
	int N, c, k; // tanto faz incializar o N, o C e o k com algum valor ou nao **
	std::cout << "Print an aleatory value, please: "; //ingles eh chique e nao tem acento
	std::cin >> N; // ** pois aqui ele ira receber um valor inteiro arbitrario

	for(c=1; c<=N; c++){
		for(k=1; k<=c; k++){
			std::cout << k;
		}
		std::cout << "\n";
	}
//deu certo de primeira.
return 0;
}

