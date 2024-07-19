#include <iostream>
#include <string>
using namespace std;
int main(){
	string x;
	int c=0, k=0;
	cout << "Salve mano, digite uma palavra aqui: ";
	cin >> x;
	while(x[c] != '\0'){
		if(!(x[c] >= 'a' && x[c] <= 'z' || x[c] >= 'A' && x[c] <= 'Z')){ cout << "É bomba!\n"; return 0;}
		k++;
	}
	cout << "A palavra '" << x << "' é formada apenas por letras!\n";
return 0;
}
