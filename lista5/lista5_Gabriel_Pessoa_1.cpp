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

int cadastroI();
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

		pessoa(){idade=18; CPF=71530919479; renda = 0.11; altura=1.9; peso=87; nome="Rato Branco"; estado="Solteiro";}
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

pessoa people[10]; //cadastro como variavel global
int main(){
	int c; 
	cout << "Ola, qual opção tu queres fazer?\n"
		<< "\t[1] Cadastrar nova pessoa\n"
		<< "\t[2] Lista de um dado especifico\n"
		<< "\t[3] Lista de médias e desvios padraos\n"
		<< "\t[4] Lista de IMC\n"
		<< "\t[0] Sair do código\n";
	cin >> c;
	switch(c){
		case 0: break;
		case 1: c=cadastroI(); break;
		case 2: break;
		case 3: break;
		case 4: break;
		default: cout << "Por favor, digite uma opcao valida!\n"; break;
	}
return 0;
}

int cadastroI(){

	int idade, CPF;
	float renda, altura, peso;
	string nome, estado;

	cout << "Ola, vamos cadastrar uma pessoa?\nQuantas pessoas serao cadastradas dessa vez?\n";
	int c;
	cin >> c;
	if(c>10){cout << "Perdao, somente cadastramos 10 pessoas por vez, reinicie o programa apos o cadastramento das 10 primeiras.\n"; c=10;}
	for(int i=0; i<c; i++){
		cout << "Nome " << i+1 << ": ";
			getline(cin, nome);
			people[i].SETnome(nome);
		cout << "Idade de " << nome << ": ";
			cin >> idade;
			people[i].SETidade(idade);
		cout << "CPF de " << nome << ": ";
			cin >> CPF;
			people[i].SETCPF(CPF);
		cout << "Renda de " << nome << ": ";
			cin >> renda;
			people[i].SETrenda(renda);
		cout << "Altura de " << nome << ": ";
			cin >> altura;
			people[i].SETaltura(altura);
		cout << "Peso de " << nome << ": ";	
			cin >> peso;
			people[i].SETpeso(peso);
		cout << "Estado civil de " << nome << ": ";
			getline(cin, estado);
			people[i].SETestado(estado);
	}

	cout <<"Deseja retornar para a tela inicial?\n\t[0] NAO\n\t[Qualquer numero] SIM\n";
	cin >> idade;
	return idade;
}

//seria que foi?