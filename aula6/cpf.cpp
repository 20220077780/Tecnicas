#include <iostream>
#include <string>
using namespace std;
int main(){
	char x;
	string letra;
	int c=0;
	cout << "Fala meu colega, digita teu CPF aí no formato XXX.XXX.XXX-XX: ";
// 0 1 2 tres 4 5 6 sete 8 9 10 onze 12 13
	cin >> letra;
	while(letra[c] != '\0'){
//		cout << "\t" << letra[c];
		if(c%4 == 3){
			if(c>8 && letra[c] != 45){cout << "Erro no CPF: LOG 1\n"; return 0;}
			else{
				if(c<8 && letra[c] != 46){cout << "Erro no CPF: LOG 2\n"; return 0;}
			}
		}
		else{
			if(letra[c]<48 || letra[c] >57){cout << "Erro no CPF: LOG 3\n"; return 0;}
		}
	//cout << "\t" << letra[c];
	c++;
	}
	cout << "Tudo certo colega! seu CPF " << letra << " foi devidamente validado.\n";

return 0;
}
