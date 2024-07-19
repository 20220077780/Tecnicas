#include <iostream>
using namespace std;
int main(){
	int a, c, b=15;
	cout << "Suas variáveis são: (a,b) = (NULL, 15)\n";
	a = ++b;
	b = 15;
	c = b++;
	cout << "Quando voce usa o a = ++b, você recebe resultado " << a
		<< ", equanto usando a = b++, você recebe " << c << endl;
return 0;
}
