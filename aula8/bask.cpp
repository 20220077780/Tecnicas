#include <iostream>
#include <cmath>
using namespace std;

float delta(float, float, float);

void positivo(float, float, float);
void zero(float, float);
void negativo(float, float, float);

int main(){
	float a, b, c;
	while(1){
		cout << "Salve pcr, me de os coeficientes de um polinomo de segundo grau do tipo ax2+bx+c nessa ordem: ";
		cin >> a; cin >> b; cin >> c;
		float d = delta(a, b, c);
		if(d>0) positivo(a, b, d);
		else{
			if(d==0) zero(a, b);
			else negativo(a, b, d);
		}
	}
return 0;
}

float delta(float x, float y, float z){return y*y -(4*x*z);}

void positivo(float a, float b, float d){
	float r = (-b+sqrt(d))/(2*a);
	float R = (-b-sqrt(d))/(2*a);
	cout << "Suas raizes sao " << r << " e " << R << endl;
	return;
}

void zero(float a, float b){
	float r = -b/(2*a);
	cout << "Sua raíz é " << r << endl;
	return;
}

void negativo(float a, float b, float d){
	d = sqrt(-d);
	float im = d/(2*a);
	float re = -b/(2*a);
	cout << "Suas raizes sao os complexos conjulgados " << re << "+" << im << "i e " << re << "-" << im << "i\n" << endl;
	return;

}