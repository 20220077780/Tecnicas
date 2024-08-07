/* Crie uma classe para representar uma pessoa que contenha variáveis privadas
para armazenar os seguintes dados: nome completo, idade, CPF, estado civil,
renda mensal, altura e peso. Crie as funções e/ou variáveis membros públicas
necessárias para realizar o que se pede abaixo.
a) Elabore um programa em que crie 10 objetos do tipo da classe criada acima e
que tenha opção, em uma tela inicial, ao usuário escolher uma das tarefas
abaixo:
I. Receba do usuário um valor n da quantidade de pessoas que ele deseja
cadastrar e entre com todos os valores de cada pessoa.
II. Receba do usuário o tipo de dado e imprima os valores de todos os usuários
cadastrados.
III. Imprima a média e o desvio-padrão das idades, da renda mensal, da altura e
peso de todos os usuários cadastrados.
IV. Imprima o IMC (índice de massa corporal) de todos os usuários cadastrados
juntamente com a informação se a pessoa está obesa ou não.
V. Tenha uma opção de retornar à tela inicial.*/
#include <iostream>
#include <string>
using namespace std;

class pessoa{
	int idade, CPF;
	float renda, altura, peso;
	string nome, estado;
	public:
		float IMC(float peso, float altura) {return peso/(altura*altura);}
		int obesidade = (IMC(peso, altura)>=30)? 1:0; //if(obesidade) cout << "OBESO!\n";

};

int main(){
	pessoa p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
	cout << "Ola, vamos cadastrar uma pessoa?\nQuantas pessoas serao cadastradas dessa vez?\n";
	int c;
	cin >> c;
	for(int i=1; i<=c; i++){
		switch(i){
		 case 1:
		 case 2:
		 case 3:
		 case 4:
		 case 5:
                 case 6:
                 case 7:
                 case 8:
                 case 9:
                 case 10:
		default: cout << "Seu numero de pessoas ultrapassa o limite que é 10, reinicie o programa!\n"; break; 
		
		
		}

	}


return 0;
}
