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

void cadastroI(int);
//void cadastroII(int);
//void cadastroIII(int);
//void cadastroIV(int);
//void cadastroV(int);
//void cadastroVI(int);
//void cadastroVII(int);
//void cadastroVIII(int);
//void cadastroIX(int);
//void cadastroX(int);

class pessoa{
	int idade, CPF;
	float renda, altura, peso;
	string nome, estado;
	public:

		pessoa(){idade=18; CPF=71530919479; renda= 0.11; altura=1.9; peso=87; nome="Rato Branco"; estado="Solteiro";}
		float IMC(float peso, float altura) {return peso/(altura*altura);}
		int obesidade = (IMC(peso, altura)>=30)? 1:0; //if(obesidade) cout << "OBESO!\n";

		void SETidade(int a){idade = a;}		; int GETidade(){return idade;}
		void SETCPF(int a){CPF = a;}			; int GETCPF(){return CPF;}
		void SETrenda(float a){renda = a;}		; float GETrenda(){return renda;}
		void SETaltura(float a){altura = a;}	; float GETaltura(){return altura;}
		void SETpeso(float a){peso = a;}		; float GETpeso(){return peso;} 
		void SETnome(string a){nome = a;}		; string GETnome(){return nome;}
		void SETestado(string a){estado = a;}	; string GETestado(){return estado;}
};

int main(){
	pessoa people[10];
	int idade, CPF;
	float renda, altura, peso;
	string nome, estado;

	cout << "Ola, vamos cadastrar uma pessoa?\nQuantas pessoas serao cadastradas dessa vez?\n";
	int c;
	cin >> c;

	for(int i=0; i<c; i++){
		cout << "Idade " << i+1 << ": "; cin >> idade; people[i].SETidade(idade);  
	}
	for(int i=0; i<c; i++){
		cout << "Idade " << i+1 << " = " << people[i].GETidade() << "\t";  
	} //FUNCIONAAAAAAAAAAAAAAAAA

return 0;
}

void cadastroI(int index){
	string nome;
	cout << "AAAAAAAA para o cadastro da " << index << "° pessoa!\nDigite seu nome completo: ";
	getline(cin, nome, '\n');
	cout << "teu nome " << nome << endl;
	return;
}

