/*
Modifique o programa do slide anterior criando um outro espaço de nome, identificado 
pelo seu primeiro nome, e mostre os valores de suas variáveis na tela. Após isso, 
imprima a média das idades e dos CREs de todos os espaços de nomes criados.
*/
#include <iostream>
using namespace std;

namespace maria {
    int idade = 18;
    float cre = 8.3;
    //void incrementar_idade() { idade++; }
}
namespace jose {
    int idade = 21;
    float cre = 4.3;
}
namespace gabriel {
    int idade = 20;
    float cre = 9.01;
}

int main(){
    float idades, CREs;
    idades = (maria::idade + jose::idade + gabriel::idade)/3;
    CREs = (maria::cre + jose::cre + gabriel::cre)/3;
    cout << "The age round average is " << idades << " and the CREs average is " << CREs << ".\n";
return 0;
}