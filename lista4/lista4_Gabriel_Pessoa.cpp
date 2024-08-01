/*
Construindo um menu, elabore um código que solicite ao usuário um número, de acordo
com as opções abaixo numeradas de I até VI, para que o usuário tenha opção de escolher, na
tela inicial, quais das operações abaixo será executada e ter uma opção de retornar à tela
inicial ou sair do programa (use a estrutura switch-case).
*/
#include <iostream>
#include <cmath>
using namespace std;

int one(int);        
int two(int);        
int three(int);        
int four(int);        
int five(int);        
int six(int);

float f(float, float, float, float);        

int main(){
    int c=1;
    int x;
    while(c){
        cout << "Hello! There is an menu for your options in this code:\n";
        cout << "\t1) The letters between 2 letters.\n\t"<<
        "2) A finite sum of (x+3) from X=A to X=B.\n\t" <<
        "3) Squareroot of X from X=A to X=B.\n\t" <<
        "4) An numeric pattern.\n\t" <<
        "5) The result of f(x) in an determinated pace.\n\t" <<
        "6) The roots of a quadratic equation:\n" <<
        "Type 0 to exit!\n";
        int k; 
        cin >> k;
        switch (k){
            case 0: c=0; break;
            case 1: c = one(x); break;
            case 2: c = two(x); break;
            case 3: c = three(x); break;
            case 4: c = four(x); break;
            case 5: c = five(x); break;
            case 6: c = six(x); break;
        
        default: cout << "Please, type an value beetween 0 and 6.\n"; break;
        }
    }
    cout << "See you latter!\n";
    return 0;
}

/*
I. Solicite ao usuário duas letras do alfabeto (que podem ser tanto maiúsculas quanto minúsculas) e
mostre na tela a sequência completa de letras entre essas duas letras.
*/
int one(int w){
    char a, b, c;
    cout << "Please, type two letters: \n";
    cin >> a; 
    cin >> b;
    if(a>b){
        c = b;
        b = a;
        a = c;
    }
    if((a>=65 && a<=90) || (a>=97 && a<=122)){
        if((b>=65 && b<=90) || (b>=97 && b<=122)){
            while(a<=b){
                if(a>=91 && a<=96) a++;
                else{
                    cout << "\t" << a << endl;
                    a++;
                } 
            }
        }
        else cout << "One of the character is not a letter!\n";
    }
    else cout << "One of the character is not a letter!\n";
    
    
    cout << "Do you want leave the algorithm [TYPE 0] or back to menu [TYPE ANY DIGIT]?";
    cin >> w;
    return w;
}
////////////////////////////////////////////////////////////////////////////////
/*
II. Mostre na tela o valor de y do somatório y = som(a>>b){x+b},
em que os valores de a e b inteiros sejam dados pelo usuário.
*/
int two(int w){
    int a;
    int b;
    int s=0;
    cout << "Please, type me two intenger numbers: \n";
    cin >> a;
    cin >> b;
    if(a>b){
        s = b;
        b = a;
        a = s;
        s = 0;
    }
    while(a<=b){ s = s + a+3; a++;}
    cout << "The sum is " << s << "\n";


    cout << "Do you want leave the algorithm [TYPE 0] or back to menu [TYPE ANY DIGIT]?";
    cin >> w;
    return w;
}
////////////////////////////////////////////////////////////////////////////////
/*
III. Mostre na tela a raiz quadrada de todos os números inteiros situados no intervalo a e b, sendo a e b
dados pelo usuário.
*/
int three(int w){
    int a;
    int b;
    int s;
    cout << "Please, type me two intenger numbers: \n";
    cin >> a;
    cin >> b;
    if(a>b){
        s = b;
        b = a;
        a = s;
    }
    cout << "The squareroot of the intenger numbers between " << a << " and " << b << " are:\n";
    while(a<=b){ 
        cout << "\tsqrt(" << a << ") = " << sqrt(a) << endl;
        a++;
    }


    cout << "Do you want leave the algorithm [TYPE 0] or back to menu [TYPE ANY DIGIT]?";
    cin >> w;
    return w;
}
////////////////////////////////////////////////////////////////////////////////
/*
IV. Mostre na tela o padrão numérico/asteriscos abaixo de acordo com o valor de n, dado pelo usuário (no
exemplo abaixo, n = 6):
→ 123456
→ 12345*
→ 1234**
→ 123***
→ 12****
→ 1*****
*/
int four(int w){
    int n, c, i;
    cout << "Please, type an intenger number: ";
    cin >> n;
    char k[n];
    i = n+1;
    for(c=1; c<=n; c++) k[c] = c+48;
    while(i>1){
        k[i] = '*';
        for(c=1; c<=n; c++) cout << k[c];
        cout << endl;
        i--;
    }    


    cout << "Do you want leave the algorithm [TYPE 0] or back to menu [TYPE ANY DIGIT]?";
    cin >> w;
    return w;
}
////////////////////////////////////////////////////////////////////////////////
/*
V. Mostre na tela os valores de f(x) no intervalo [xmin,..., xmax com passo δ] da função
f(x) = ax2 + bx + c, em que os valores de xmin, xmax, δ, a, b e c sejam dados pelo usuário.
Todos os valores envolvidos devem ser em ponto flutuante.
*/
int five(int w){
    float xmax, xmim, a, b, c, p;
    cout << "Please, type-me the coefficients a, b and c of the pollinome f(x) = ax2 + bx + c:\n";
    cin >> a;    cin >> b;    cin >> c;
    cout << "Now, type-me a range and a pace:\n";
    cin >> xmim;    cin >> xmax;    cin >> p;
    
    if(xmim > xmax){
        int k = xmax;
        xmax = xmim;
        xmim = k;
    }
    cout << "In the range " << xmim << " → " << xmax << ", the values of f(x) is:\n";
    while(xmim <= xmax){
        cout << "\tf(" << xmim << ") = " << f(a, b, c, xmim) << endl;
        xmim += p;
    }


    cout << "Do you want leave the algorithm [TYPE 0] or back to menu [TYPE ANY DIGIT]?";
    cin >> w;
    return w;
}

float f(float a, float b, float c, float x){ return (a*x*x) + (b*x) + c;}
////////////////////////////////////////////////////////////////////////////////
/*
VI. Solicite ao usuários os valores de a, b e c de uma equação de 2º grau na forma ax2+bx+c e mostre nas
tela os zeros reais e imaginários, caso tenham.
*/
int delta(float x, float y, float z){return y*y -(4*x*z);}

void positivo(float a, float b, float d){
	float r = (-b+sqrt(d))/(2*a);
	float R = (-b-sqrt(d))/(2*a);
	cout << "Your roots is " << r<< " and " << R << endl;
	return;
}

void zero(float a, float b){
	float r = -b/(2*a);
	cout << "Your root is " << r << endl;
	return;
}

void negativo(float a, float b, float d){
	d = sqrt(-d);
	float im = d/(2*a);
	float re = -b/(2*a);
	cout << "Your roots is conjugate complexes " << re << " + " << im << "i and " << re << " - " << im << "i\n" << endl;
	return;

}

int six(int w){
    float a, b, c;
    cout << "Please, type-me the coefficientes of an second degree polinome as f(x) = ax2+bx+c, in this order: ";
    cin >> a; cin >> b; cin >> c;
    int d = delta(a, b, c);
    if(d>0) positivo(a, b, d);
    else{
        if(d==0) zero(a, b);
        else negativo(a, b, d);
    }
	
     cout << "Do you want leave the algorithm [TYPE 0] or back to menu [TYPE ANY DIGIT]?";
    cin >> w;
    return w;

    return w;
}