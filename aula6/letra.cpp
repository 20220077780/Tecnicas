#include <iostream>
using namespace std;
int main(){
	char letra;
	cout << "Salve meu parceiro! Me digite uma letra: ";
	cin >> letra;
	if(letra>='a' && letra <='z' || letra>='A' && letra <='Z'){cout << "É letra!\n";}
	else{
		if(letra>='0' && letra<='9'){cout << "É number\n";}
		else{cout << "É bomba!!! FOGE\n";}
	}
return 0;
}
