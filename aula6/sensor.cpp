#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int temp;
	string feedback;
	cout << "Digite a temperatura aí (Em Celsius): ";
	cin >> temp;
	feedback = (temp > 212)? "FOGE QUE É FOGO\n":"Tudo tranquilo meu chapa\n";
	cout << "Seu status é: " << feedback;
return 0;
}
