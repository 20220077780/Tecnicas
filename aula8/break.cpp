#include <iostream>
using namespace std;
int main() {
	int contador = 0;
	while(true) {
		contador ++;
		if(contador%10 == 00)continue;
		cout<< contador << endl;

	}
	cout << "Adeus!!\n";
}
