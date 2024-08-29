#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int c=0;
    ofstream saiiida("oia o teste.txt");
    if(!saiiida){cout << "Teu arquivo nao vai ser aberto!!\n"; return 1;}
    while(c <10){
        float oia = rand()%50 + 1/(rand()%25 +1);
        saiiida << "WhiteMouse" << endl << rand()%50 << " " << oia << endl;
        c++;
    }
    saiiida.close();
    return 0;
}