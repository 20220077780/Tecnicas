#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    fstream arquivo("Sleep_health_and_lifestyle_dataset.csv", ios::in | ios::out | ios ::app);

    string Person, Gender, Age, Occupation, Duration, Quality, Physical, Stress, IMC, Pressure, Heart, Passos, Disorder;
    if(!arquivo){
        std::cout<<"erro ao abrir o arquivo" <<std::endl;
    }
    int c=0 ,c2=0;
    int m=0;
    double media1=0,soma=0;
    while(!arquivo.eof()){
        getline(arquivo,Person,',');//1 
        cout << Person << " ";
        getline(arquivo,Gender,',');//2
        cout << Gender << " ";
        getline(arquivo,Age,',');//3
        cout << Age << " ";
        getline(arquivo,Occupation,',');//4
        cout << Occupation << " ";
        getline(arquivo,Duration,',');//5
        cout << Duration << " ";
        getline(arquivo,Quality,',');
        cout << Quality << " ";
        getline(arquivo,Physical,',');
        cout << Physical << " ";
        getline(arquivo,Stress,',');
        cout << Stress << " ";
        getline(arquivo,IMC,',');
        cout << IMC << " ";
        getline(arquivo,Pressure,',');
        cout << Pressure << " ";
        getline(arquivo,Heart,',');
        cout << Heart << " ";
        getline(arquivo,Passos,',');
        cout << Passos << " ";
        getline(arquivo,Disorder);
        cout << Disorder << " ";
        /*cout <<"coluna 1 "<<Person<<endl
            <<"coluna 2 " <<Gender<<endl
            <<"coluna 3 " <<Age<<endl
            <<"coluna 4 " <<Occupation<<endl 
            <<"coluna 5 " <<Duration<<endl
            <<"coluna 6 " <<Quality<<endl
            <<"coluna 7 " <<Physical<<endl
            <<"coluna 8 " <<Stress<<endl
            <<"coluna 9 " <<IMC<<endl
            <<"coluna 10 "<<Pressure<<endl
            <<"coluna 11 "<<Heart<<endl
            <<"coluna 12 "<<Passos<<endl
            <<"coluna 13 "<<Disorder<<endl;*/
        
        c++;
    
        if(c>=2) {
            //media1
            cout << "Cheguei no if\n";
            float d = stof(Duration);
            cout << "Cheguei no float\n";
            m++;
            media1+=d;
            }
    }
    cout<<"a soma foi de "<<media1<<" o numero de termos somados foi de "<<m<<" e a media final de horas dormidas foi de "<<media1/m<<endl;
    media1=media1/m;
    c=0;
    arquivo.seekg(0);
    while(!arquivo.eof()){
        getline(arquivo,Person,',');//1
        getline(arquivo,Gender,',');//2
        getline(arquivo,Age,',');//3
        getline(arquivo,Occupation,',');//4
        getline(arquivo,Duration,',');//5
        getline(arquivo,Quality,',');
        getline(arquivo,Physical,',');
        getline(arquivo,Stress,',');
        getline(arquivo,IMC,',');
        getline(arquivo,Pressure,',');
        getline(arquivo,Heart,',');
        getline(arquivo,Passos,',');
        getline(arquivo,Disorder);
        
        c++;
        if(c>=2){
            float i = stof(Duration);
            soma+=pow((i - media1),2);
            c2++;
        }
    }
    cout<<"o somatorio é de "<<soma<<" e o numero de termos somados eh de "<<c2;
    double mi = sqrt(soma/c2);
    cout<<" o desvio padrao das horas dormidas eh de "<<mi<<";"<<endl;
    
    
    return 0;
}
