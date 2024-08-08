#include <iostream>
using namespace std;

int main () {
    static int idade[10];
    srand(time(NULL));
    for(int c=0; c<10; c++){
        cout << "Manda a idade desse macho: ";
        idade[c] = rand()%40+1;
    }

    for(int c=0; c<10; c++){
        cout << "\tIDADE " << c << " = " << idade[c] << endl; 
    }
    cout << "The size of the integer vector is " << sizeof(idade) << endl;
return 0;
}