/*
Construindo um menu, elabore um código que solicite ao usuário um número, de acordo
com as opções abaixo numeradas de I até VI, para que o usuário tenha opção de escolher, na
tela inicial, quais das operações abaixo será executada e ter uma opção de retornar à tela
inicial ou sair do programa (use a estrutura switch-case).
*/
#include <iostream>
#include <cmath>
using namespace std;

void one();        
void two();        
void three();        
void four();        
void five();        
void six();

float f(float, float, float, float);        

int main(){
    int c=1;
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
            case 1: one(); break;
            case 2: two(); break;
            case 3: three(); break;
            case 4: four(); break;
            case 5: five(); break;
            case 6: six(); break;
        
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
void one(){
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
    cout << "Task over!\n";
    return;
}
////////////////////////////////////////////////////////////////////////////////
/*
II. Mostre na tela o valor de y do somatório y = som(a>>b){x+b},
em que os valores de a e b inteiros sejam dados pelo usuário.
*/
void two(){
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
    cout << "The sum is " << s << "\nTask over!\n";
    return;
}
////////////////////////////////////////////////////////////////////////////////
/*
III. Mostre na tela a raiz quadrada de todos os números inteiros situados no intervalo a e b, sendo a e b
dados pelo usuário.
*/
void three(){
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
    cout << "Task over!\n";
    return;
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
void four(){
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
    cout << "Task over!\n";
    return;
}
////////////////////////////////////////////////////////////////////////////////
/*
V. Mostre na tela os valores de f(x) no intervalo [xmin,..., xmax com passo δ] da função
f(x) = ax2 + bx + c, em que os valores de xmin, xmax, δ, a, b e c sejam dados pelo usuário.
Todos os valores envolvidos devem ser em ponto flutuante.
*/
void five(){
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
    cout << "Task over!\n";
    return;
}

float f(float a, float b, float c, float x){ return (a*x*x) + (b*x) + c;}
////////////////////////////////////////////////////////////////////////////////
/*
VI. Solicite ao usuários os valores de a, b e c de uma equação de 2º grau na forma ax2+bx+c e mostre nas
tela os zeros reais e imaginários, caso tenham.
*/
void six(){

    return;
}