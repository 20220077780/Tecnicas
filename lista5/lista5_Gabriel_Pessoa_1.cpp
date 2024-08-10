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
#include <cmath>
using namespace std;

int cadastroI();
int listaII(int);
int medias(int);
int obesa(int);


class pessoa{
	int idade;
	float renda, altura, peso, CPF;
	string nome, estado;
	public:
		pessoa(){idade=18; CPF=71530914479; renda = 0.11; altura=1.9; peso=87; nome="Rato Branco"; estado="Solteiro";}
		float IMC(float peso, float altura) {return peso/(altura*altura);}
		int obesidade = (IMC(peso, altura)>=30)? 1:0; //if(obesidade) cout << "OBESO!\n";

		void SETidade(int a){idade = a;}		; int GETidade(){return idade;}
		void SETCPF(float a){CPF = a;}			; float GETCPF(){return CPF;}
		void SETrenda(float a){renda = a;}		; float GETrenda(){return renda;}
		void SETaltura(float a){altura = a;}	; float GETaltura(){return altura;}
		void SETpeso(float a){peso = a;}		; float GETpeso(){return peso;} 
		void SETnome(string a){nome = a;}		; string GETnome(){return nome;}
		void SETestado(string a){estado = a;}	; string GETestado(){return estado;}

		~pessoa(){
			if(nome!="Rato Branco")	cout << "O cadastro de " << nome << " foi DESTRUIDO!" << endl;
		}
};

pessoa people[10]; //cadastro como variavel global
int main(){
	cout << sizeof(people)/96 << " objetos foram criados agora. Seus valores padrao sao: "
		<< "Nome = " << people[0].GETnome()
		<< ", Idade = " << people[0].GETidade()
		<< ", CPF = " << people[0].GETCPF()
		<< ", Altura = " << people[0].GETaltura()
		<< ", Peso = " << people[0].GETpeso()
		<< ", Renda = " << people[0].GETrenda()
		<< ", Estado = " << people[0].GETestado() << endl;

	int c=1, k=0;
	while(c){
		cout << "Ola, qual opção tu queres fazer?\n"
			<< "\t[1] Cadastrar nova pessoa\n"
			<< "\t[2] Lista de um dado especifico\n"
			<< "\t[3] Lista de médias e desvios padraos\n"
			<< "\t[4] Lista de IMC\n"
			<< "\t[0] Sair do código\n";
		cin >> c;
		switch(c){
			case 0: break;
			case 1: k =cadastroI(); break;
			case 2: c=listaII(k); break;
			case 3: c=medias(k); break;
			case 4: c=obesa(k); break;
			default: cout << "Por favor, digite uma opcao valida!\n"; break;
		}
	}

	
	cout << "Por aqui nos despedimos. Até breve!\n";
return 0;
}

int cadastroI(){

	int idade;
	float renda, altura, peso, CPF;
	string nome="none"; string estado="None";

	cout << "Ola, vamos cadastrar uma pessoa?\nQuantas pessoas serao cadastradas dessa vez?\n";
	int c;
	cin >> c;
	if(c>10){cout << "Perdao, somente cadastramos 10 pessoas por vez, reinicie o programa apos o cadastramento das 10 primeiras.\n"; c=10;}
	for(int i=0; i<c; i++){
		cout << "Nome " << i+1 << ": ";
		    cin.ignore();
			getline(cin, nome);
			people[i].SETnome(nome);
		cout << "Idade de " << nome << ": ";
			cin >> idade;
			if(idade<=0){
				cout << "Somente aceitamos valores reais aqui!";
				break;
			}
//(em metros) 

			people[i].SETidade(idade);
		cout << "CPF de " << nome << ": ";
			cin >> CPF;
			int j = (CPF/pow(10,10));
			if(j<1 || j>9){
				cout << "Somente aceitamos valores reais aqui!";
				break;
			}
			people[i].SETCPF(CPF);
		cout << "Renda de " << nome << ": ";
			cin >> renda;
			if(renda<=0){
				cout << "Somente aceitamos valores reais aqui!";
				break;
			}
			people[i].SETrenda(renda);
		cout << "Altura de " << nome << " (em metros): ";
			cin >> altura;
			if(altura<=0){
				cout << "Somente aceitamos valores reais aqui!";
				break;
			}
			people[i].SETaltura(altura);
		cout << "Peso de " << nome << " (em kilogramas): ";	
			cin >> peso;
			if(renda<=0){
				cout << "Somente aceitamos valores reais aqui!";
				break;
			}
			people[i].SETpeso(peso);
		cout << "Estado civil de " << nome << ": ";
		    cin.ignore();
			cin.ignore();
			getline(cin, estado);
			people[i].SETestado(estado);
	}

    cout << "\nVoce foi redirecionado para a tela inicial!\n";
	return c;
}
// 4520/1000 = 4,52 → int (4520/1000) = 4
//71530914479 → 71.530.914.479 →→ 7,153 →→ 7

int listaII(int quantidade){
    int c, i;
    cout << "Qual das informacoes tu queres saber?:\n"
		<< "\t[1] Nome\n"
		<< "\t[2] Idade\n"
		<< "\t[3] CPF\n"
		<< "\t[4] Renda\n"
		<< "\t[5] Altura\n"
		<< "\t[6] Peso\n"
		<< "\t[7] Estado civil\n";
	cin >> c;
	switch(c){
	    case 1: for( i=0; i<quantidade; i++){cout << "Pessoa " << i+1 << " = " << people[i].GETnome() << endl;}; break;
	    case 2: for( i=0; i<quantidade; i++){cout << "Idade de " << people[i].GETnome() << " = " << people[i].GETidade() << endl;}; break;
	    case 3: for( i=0; i<quantidade; i++){cout << "CPF de " << people[i].GETnome() << " = " << people[i].GETCPF() << endl;}; break;
	    case 4: for( i=0; i<quantidade; i++){cout << "Renda de " << people[i].GETnome() << " = " << people[i].GETrenda() << endl;}; break;
	    case 5: for( i=0; i<quantidade; i++){cout << "Altura de " << people[i].GETnome() << " = " << people[i].GETaltura() << endl;}; break;
	    case 6: for( i=0; i<quantidade; i++){cout << "Peso de " << people[i].GETnome() << " = " << people[i].GETpeso() << endl;}; break;
	    case 7: for( i=0; i<quantidade; i++){cout << "Estado civil de " << people[i].GETnome() << " = " << people[i].GETestado() << endl;}; break;
	    default: cout << "Valor inválido. ";
	}

	cout <<"Deseja retornar para a tela inicial?\n\t[0] NAO\n\t[Qualquer numero] SIM\n";
    cin >> c;
	return c;   
}
//III. Imprima a média e o desvio-padrão das idades, da renda mensal, da altura e peso de todos os usuários cadastrados.
int medias(int quantidade){
	int c;
	float media[4]={0, 0, 0, 0};
	double dp[4]={0, 0, 0, 0};
	for(c=0; c<quantidade; c++){
		media[0] = media[0] + people[c].GETidade();
		media[1] = media[1] + people[c].GETrenda();
		media[2] = media[2] + people[c].GETaltura();
		media[3] = media[3] + people[c].GETpeso();
	}
	media[0] = media[0]/c; 
	media[1] = media[1]/c; 
	media[2] = media[2]/c; 
	media[3] = media[3]/c; 
	for(c=0; c<quantidade; c++){
		dp[0] = pow((people[c].GETidade() - media[0]), 2);
		dp[1] = pow((people[c].GETrenda() - media[1]), 2);
		dp[2] = pow((people[c].GETaltura() - media[2]), 2);
		dp[3] = pow((people[c].GETpeso() - media[3]), 2);
	}
	dp[0] = dp[0]/quantidade;		dp[0] = sqrt(dp[0]);
	dp[1] = dp[1]/quantidade;		dp[1] = sqrt(dp[1]);
	dp[2] = dp[2]/quantidade;		dp[2] = sqrt(dp[2]);
	dp[3] = dp[3]/quantidade;		dp[3] = sqrt(dp[3]);

	// 		3 3 4 2 4 5 →→ m=3,5 →→ v²*n = (3-3,5)² + (3-3,5)² + (4-3,5)² + (2-3,5)² + (4-3,5)² + (5-3,5)² = x →→ v² = x/n = k →→ v = sqrtK
	cout << "Média das idades: " << media[0] <<			"\tDesvio padrao das idades: " << dp[0] << endl << 
	"Média das rendas mensais: " << media[1] <<			"\tDesvio padrao das rendas mensais: " << dp[1] << endl << 
	"Média das alturas: " << media[2] <<			"\tDesvio padrao das alturas: " << dp[2] << endl << 
	"Média dos pesos: " << media[3] <<			"\tDesvio padrao dos pesos: " << dp[3] << endl ;

	cout <<"Deseja retornar para a tela inicial?\n\t[0] NAO\n\t[Qualquer numero] SIM\n";
    cin >> c;
	return c; 
}

//IV. Imprima o IMC (índice de massa corporal) de todos os usuários cadastrados juntamente com a informação se a pessoa está obesa ou não.
//float IMC(float peso, float altura) {return peso/(altura*altura);}
//int obesidade = (IMC(peso, altura)>=30)? 1:0; //if(obesidade) cout << "OBESO!\n";
int obesa(int quantidade){
    cout << "Segue o IMC de cada um dos usuarios cadastrados: \n";
    for(int i=0; i<quantidade; i++){
        float peso = people[i].GETpeso();
        float altura = people[i].GETaltura();
        cout << "O IMC de " << people[i].GETnome() << " é " << people[i].IMC( peso, altura) << endl;
        int obesidade = (people[i].IMC(peso, altura)>=30)? 1:0; if(obesidade) cout << "\tEssa pessoa sofre de Obesidade!\n";
    }
    
    
    int c;
	cout <<"Deseja retornar para a tela inicial?\n\t[0] NAO\n\t[Qualquer numero] SIM\n";
    cin >> c;
	return c;
}
