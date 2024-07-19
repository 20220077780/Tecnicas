#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x, c, k;
	cout << "Salve meu parceiro! Me conta um número: ";
	cin >> x;
	cout << "Queres multiplicar por 2 quantas vezes? ";
	cin >> c;
	k = x<<c;
	cout << "Seu numero " << x << " vezes 2 elevado a " << c << " é: " << k << endl;

return 0;
}
