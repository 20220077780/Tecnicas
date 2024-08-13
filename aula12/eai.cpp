#include <iostream>
#include <cmath>
#define x 16
#define y 5

using namespace std;
int main(){
    
    float tab[x][y];
    for(int i=0; i<x; i++)
        for(int j=0; j<y; j++)
            tab[i][j] = int(sqrt((i+1)*(j+1)));    

cout << "NAO rodou o breakpoint\n";
    for(int i=0; i<x; i++){
        cout << ">> ";
        for(int j=0; j<y; j++)
            cout << tab [i][j] << "\t";
        cout << endl;
    }
          
return 0;
}