/*
          Projeto de Análise de Dados - C++
      Análise de Saúde do Sono e Estilo de Vida
           Técnicas de Programação, 2024.1
    Gabriel Gomes Pessôa            - 20220077780
    Lucas Farias Rodolfo            - 20230050332
    Mattheus Correia de Medeiros    - 20220077889
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

void dois(double, double[]); // passa m1 e passa a array qdois[2]

int main(){
    fstream arquivo("Sleep_health_and_lifestyle_dataset.csv", ios::in | ios::out | ios ::app);
    string Person, Gender, Age, Occupation, Duration, Quality, Physical, Stress, IMC, Pressure, Heart, Passos, Disorder;
    if(!arquivo){
        std::cout<<"Erro ao abrir o arquivo" <<std::endl;
    }

    int c=0;
/* Questao 1 */    int m=0;                 double media1=0;
/* Questao 2 */    double qdois[2];
/* Questao 3 */    int menorq6=0;           double somastress=0;
/* Questao 4 */    int ndisturbioalt=0;
/* Questao 5 */    int Ndist=0;             float npassos,somapassosd=0;
/* Questao 6 */    int none=0, doente=0, upboa=0, downboa=0, upruim=0, downruim=0;    string PressureUP, PressureDOWN;
/* Questao 7 */    int Nob=0,Nn=0,Nov=0;    float squalidadeNormal=0,squalidadeOver=0,squalidadeObese=0;
/* Questao 8 */    int Bo=0, Ni1=0 , Ni2=0, Ni3=0, Ni4=0, Ndi1=0, Ndi2=0, Ndi3=0, Ndi4=0;
arquivo.seekg(0);
    while(!arquivo.eof()){
        if(!c){
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
        }
        else{
            getline(arquivo,Person,',');//1 
            getline(arquivo,Gender,',');//2
            getline(arquivo,Age,',');//3
            getline(arquivo,Occupation,',');//4
            getline(arquivo,Duration,',');//5
            getline(arquivo,Quality,',');
            getline(arquivo,Physical,',');
            getline(arquivo,Stress,',');
            getline(arquivo,IMC,',');
            getline(arquivo,PressureUP,'/');
            getline(arquivo,PressureDOWN,',');
            getline(arquivo,Heart,',');
            getline(arquivo,Passos,',');
            getline(arquivo,Disorder);
        }
        

        c++;
        if(c>=2) {
            //media1
            float d = stof(Duration);
            m++;
            media1+=d;
////////////////////////////////////////////////////////////////////////
//questao 2
////////////////////////////////////////////////////////////////////////
            float i = stof(Duration);
            if(i<6){
                menorq6++;
                float stresslevel = stof(Stress);
                somastress+= stresslevel;
            }
////////////////////////////////////////////////////////////////////////
            float stresslevel = stof(Stress);
            if(stresslevel>7){
                if(Disorder!="None")
                ndisturbioalt++;
            }
////////////////////////////////////////////////////////////////////////
            npassos = stof(Passos);
                if(Disorder!="None"){
                    Ndist++;
                somapassosd+=npassos;
                }
///////////////////////////////////////////////////////////////////////
            if(Disorder=="None"){
                none++;
                upboa+= stoi(PressureUP);
                downboa+= stoi(PressureDOWN);
            }
            else{
                doente++;
                upruim+= stoi(PressureUP);
                downruim+= stoi(PressureDOWN);
            }
////////////////////////////////////////////////////////////////////////
            if(IMC=="Overweight"){
                Nov++;
                squalidadeOver+= stof(Quality);
            }
            if(IMC=="Obese"){
                Nob++;
                squalidadeObese+= stof(Quality);
            }
            if(IMC=="Normal" || IMC == "Normal Weight"){
                Nn++;
                squalidadeNormal+= stof(Quality);
            }
////////////////////////////////////////////////////////////////////////
            float idade = stof(Age);
        
            if( idade >=27 &&  idade <=35 ){
                    Ni1++;
                    if(Disorder!="None") Ndi1++;
            }
            if( idade >=36 &&  idade <=44 ){
                    Ni2++;
                    if(Disorder!="None") Ndi2++;
            }
            if( idade >=45 &&  idade <= 52 ){
                    Ni3++;
                    if(Disorder!="None") Ndi3++;
            }
            if( idade >= 53 &&  idade <= 59 ){
                    Ni4++;
                    if(Disorder!="None") Ndi4++;
            }
////////////////////////////////////////////////////////////////////////
            }
    }
    cout << "3.1\tA soma foi de " << media1 << ".\n\tO numero de termos somados foi de " << m
         << ".\n\tA media final de horas dormidas foi de " << media1/m << endl;

    //qdois = 
    dois(media1, qdois);
    cout << "\n3.2\tO somatorio é de " << qdois[0] << "\n\tO numero de termos somados eh de " << qdois[1]
         << "\n\tO desvio padrao das horas dormidas eh de " << sqrt(qdois[0] / qdois[1]) << "."<<endl; 

    cout << "\n3.3\tO numero de pessoas foi " << menorq6 << ".\n\tO numero da soma de stress level eh "
         << somastress << ".\n\tA media foi de " << somastress/menorq6 << "." << endl;

    cout << "\n3.4\tO numero de pacientes com alto estresse e disturbio foi de " << ndisturbioalt << "." << endl; 

    cout << "\n3.5\tO numero de pessoas com disturbio eh de " << Ndist << ".\n\tO numero de passos somado foi de " << somapassosd
         << ".\n\tLogo, a media de passos foi de " << somapassosd/Ndist << "." << endl;

    cout << "\n3.6\tDessa forma, o numero de pessoas sem disturbio de sono foi de " << none << ".\n\tA media de pressao arterial foi de " << upboa/none << "/" << downboa/none << " mmHg." << endl
         << "\tO numero de pessoas com disturbio de sono foi de " << doente << "\n\tA media de pressao arterial foi de " << upruim/doente << "/" << downruim/doente << " mmHg." << endl
         << "\tAssim, percebe uma diferença notoria entre as pressoes arteriais entre aqueles que possuem ou não disturbios de sono. Infere-se, portanto, que a presença de algum disturbio de sono pode ser uma das causas para o aumento da pressao arterial, sendo necessario analisar as demais caracteristicas de cada paciente para obeter uma conclusao concreta."<<endl;

    cout << "\n3.7\tDessa forma, o numero de pessoas com peso normal foi de " << Nn << ".\n\tA soma de suas qualidades foi de "
         << squalidadeNormal << ". \n\tLogo, a media de qualidade foi de " << squalidadeNormal/Nn << "." << endl
         << "\tO numero de pessoas com peso Over Weight foi de " << Nov << "\n\tA soma de suas qualidades foi de "
         << squalidadeOver << ". Logo, a media de qualidade foi de " << squalidadeOver/Nov << "." << endl
         << "\tO numero de pessoas com peso normal foi de " << Nob << "\n\tA soma de suas qualidades foi de "
         << squalidadeObese << ". Logo, a media de qualidade foi de " << squalidadeObese/Nob << "." << endl;
    cout << "\tCom isso, fazemos uma comparacao das medias de qualidade de sono da Normal com as demais: " << endl
         << "\tA difereca entre a qualidade do peso Normal com Over foi de " << (squalidadeNormal/Nn - squalidadeOver/Nov) << endl
         << "\tA difereca entre a qualidade do peso Normal com Obeso foi de " << (squalidadeNormal/Nn - squalidadeObese/Nob) << endl;
    cout << "\tAssim, percebe uma diferença de mais de 0.5 ponto de qualidade media de sono, o que ja pode ser algo considerável, e sendo superiro a 1,2 para obesos o que demonstra uma diferença ainda mais significativa."<<endl;

    cout << "\n3.8\tO numero de pessoas na faixa 1 foi de " << Ni1 << " e o numero de pessoas com disturbio foi de " << Ndi1
         << "\n\tAssim, a porcentagem foi de " << 100*Ndi1/Ni1 << "%;" << endl
         << "\tO numero de pessoas na faixa 2 foi de " << Ni2 << " e o numero de pessoas com disturbio foi de " << Ndi2
         << "\n\tAssim, a porcentagem foi de " << 100*Ndi2/Ni2 << "%;" << endl
         << "\tO numero de pessoas na faixa 1 foi de " << Ni3 << " e o numero de pessoas com disturbio foi de " << Ndi3
         << "\n\tAssim, a porcentagem foi de " << 100*Ndi3/Ni3 << "%;" << endl
         << "\tO numero de pessoas na faixa 1 foi de " << Ni4 << " e o numero de pessoas com disturbio foi de " << Ndi4
         << "\n\tAssim, a porcentagem foi de " << 100*Ndi4/Ni4 << "%;" << endl;
    cout << "\tDessa forma, percebe-se que durante o terceiro quarto da vida adulta da nossa população idade referida entre  45 e 52 anos é a parcela da população mais afetada por disturbios do sono." << endl;
    return 0; // cheguei no vscode
}

void dois(double media1, double saida[2]){
    fstream arquivo("Sleep_health_and_lifestyle_dataset.csv", ios::in | ios::out | ios ::app);
    string Person, Gender, Age, Occupation, Duration, Quality, Physical, Stress, IMC, Pressure, Heart, Passos, Disorder;
    if(!arquivo){
        std::cout<<"Erro ao abrir o arquivo" <<std::endl;
    }

    int c=0;
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
            saida[0]+=pow((i - media1),2);
            saida[1]++;
        }
    }
}