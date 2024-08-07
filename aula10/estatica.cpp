#include <iostream>
#include <cmath>
#define pi acos(-1)
using namespace std;

class Retangulo{
	int x, y;
	public:
	static int n;
	Retangulo(){n++;}
	~Retangulo(){n--;}
	int area() {return x*y;}
};

int Retangulo::n = 0;

int main(){
	Retangulo A, B, C;
	cout << "n = " << A.n << endl;
	Retangulo D;
	cout << "n = " << Retangulo::n << endl;

	for(int i=0; i<10; i++){
		Retangulo ret;
		cout << "Area = " << ret.area() << endl;
	}
	cout << "n = " << Retangulo::n << endl;

return 0;
}
