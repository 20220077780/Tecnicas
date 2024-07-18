/*
Modifique o programa do slide anterior criando um outro espaço de nome, identificado 
pelo seu primeiro nome, e mostre os valores de suas variáveis na tela. Após isso, 
imprima a média das idades e dos CREs de todos os espaços de nomes criados.
*/
/*
Modifique o programa do slide anterior e faça com que os espaços de nome criados 
tenham uma função que compute o número de dias vividos de acordo com a idade 
da pessoa. Após isso, imprima a idade e o número de dias vividos computados para 
todos os espaços de nomes criados.
*/

#include <iostream>
//#include <string>
using namespace std;

namespace maria {
    int idade = 18;
    float cre = 8.3;
    int ageM(int idade){
        int dias, bissex;
        dias = idade*365;
        bissex = idade/4 + 1;       //computa também os dias de anos bissextos.
        return dias+bissex;
    }
    //void incrementar_idade() { idade++; }
}
namespace jose {
    int idade = 21;
    float cre = 4.3;
    int ageJ(int idade){
        int dias, bissex;
        dias = idade*365;
        bissex = idade/4 + 1;       //computa também os dias de anos bissextos.
        return dias+bissex;
    }
}
namespace gabriel {
    int idade = 20;
    float cre = 9.01;
    int ageG(int idade){
        int dias, bissex;
        dias = idade*365;
        bissex = idade/4 + 1;       //computa também os dias de anos bissextos.
        return dias+bissex;
    }
}

int main(){
//    float idades, CREs;
//    idades = (maria::idade + jose::idade + gabriel::idade)/3;
//    CREs = (maria::cre + jose::cre + gabriel::cre)/3;
//    cout << "The age round average is " << idades << " and the CREs average is " << CREs << ".\n";
    int diasM, diasJ, diasG;
    //string nomes[3] = {"maria", "jose", "gabriel"};
    //while(c<3){cout << nomes[c] << endl; c++;}
    diasM = maria::ageM(maria::idade);
    diasJ = jose::ageJ(jose::idade);
    diasG = gabriel::ageG(gabriel::idade);
    cout << "Maria's, Jose's and Gabriel's ages are, respectivaly, " << maria::idade << ", " << jose::idade << ", " << gabriel::idade << ". Their days of life are "
        << diasM << ", " << diasJ << ", " << diasG << ".\n" ;
return 0;
}