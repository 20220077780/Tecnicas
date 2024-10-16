#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    fstream arquivo("lista.csv", ios::in | ios::out | ios ::app);

    string Pers, G,I,O,D,Q,F,S,IMC,P,B,passos,Di;
    if(!arquivo){
        std::cout<<"erro ao abrir o arquivo" <<std::endl;
    }
    int c=0 ,c2=0;
    int m=0;
    double media1=0,soma=0;
    while(!arquivo.eof()){
    getline(arquivo,Pers,',');//1
    getline(arquivo,G,',');//2
    getline(arquivo,I,',');//3
    getline(arquivo,O,',');//4
    getline(arquivo,D,',');//5
    getline(arquivo,Q,',');
    getline(arquivo,F,',');
    getline(arquivo,S,',');
    getline(arquivo,IMC,',');
    getline(arquivo,P,',');
    getline(arquivo,B,',');
    getline(arquivo,passos,',');
    getline(arquivo,Di);
    
    /*cout <<"coluna 1 "<<Pers<<endl
          <<"coluna 2 "  <<G<<endl
          <<"coluna 3 "<<I<<endl
          <<"coluna 4 "<<O<<endl
          <<"coluna 5 "<<D<<endl
          <<"coluna 6 "<<Q<<endl
          <<"coluna 7 "<<F<<endl
          <<"coluna 8 "<<S<<endl
          <<"coluna 9 "<<IMC<<endl
          <<"coluna 10 "<<P<<endl
          <<"coluna 11 "<<B<<endl
          <<"coluna 12 "<<passos<<endl
          <<"coluna 13 "<<Di<<endl;*/
    
    c++;
   
    if(c>=2) {
        //media1
        float d = stof(D);
        m++;
        media1+=d;
        }
    }
    cout<<"a soma foi de "<<media1<<" o numero de termos somados foi de "<<m<<" e a media final de horas dormidas foi de "<<media1/m<<endl;
    media1=media1/m;
    c=0;
    arquivo.seekg(0);
    while(!arquivo.eof()){
    getline(arquivo,Pers,',');//1
    getline(arquivo,G,',');//2
    getline(arquivo,I,',');//3
    getline(arquivo,O,',');//4
    getline(arquivo,D,',');//5
    getline(arquivo,Q,',');
    getline(arquivo,F,',');
    getline(arquivo,S,',');
    getline(arquivo,IMC,',');
    getline(arquivo,P,',');
    getline(arquivo,B,',');
    getline(arquivo,passos,',');
    getline(arquivo,Di);
    
    c++;
    if(c>=2){
    float i = stof(D);
    soma+=pow((i - media1),2);
    c2++;}
    }
    cout<<"o somatorio é de "<<soma<<" e o numero de termos somados eh de "<<c2;
    double mi = sqrt(soma/c2);
    cout<<" o desvio padrao das horas dormidas eh de "<<mi<<";"<<endl;
    
    
    return 0;
}
