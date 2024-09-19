#include <iostream>
#include "GABRIELLLL.h"
using namespace std;

int main(){
    caminhao Volvo, Scania;
    automovel Ford;

    Volvo.SETcarga(1000);   Volvo.SETpass(10);  Volvo.SETroda(8);
    Scania.SETcarga(800);   Scania.SETpass(6);  Scania.SETroda(10);
    Ford.SETtipo(3);        Ford.SETpass(15);   Ford.SETroda(4);

    Volvo.show();           Scania.show();      Ford.show();
    return 0;
}