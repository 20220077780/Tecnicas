//Os valores entre 1 e N, em que N é dado pelo usuário
#include <iostream>
int main(){
	int N, P, c; // tanto faz incializar  N, P e c com algum valor ou nao **
	std::cout << "Tell-me an aleatory value, please: "; //ingles eh chique e nao tem acento
	std::cin >> N; // ** pois aqui ele ira receber um valor inteiro arbitrario

	std::cout << "\nThe values between 1 and " << N << " are:\n";
	for(c=2; c<N; c++){	//novamente inicializando em 2. Valores ENTRE 1 e N
		std::cout << c << "\n";
	}
return 0;
}

