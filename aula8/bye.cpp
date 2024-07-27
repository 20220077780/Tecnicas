#include <iostream>
#include <string>
using namespace std;
int main(){
string caractere;
int a;
	do{
		cout << "Bom dia macho! Me diz uma frase bem bolada aí ou digite 'bye' para sair: ";
		getline(cin, caractere);
		for(a=0; a!='\0'; a++){
			if(caractere[a] == 'a'){caractere[a]='*';}
		}
		cout << "Tua nova palavra é: " << caractere << endl;
	}while(caractere != "bye");

return 0;
}
