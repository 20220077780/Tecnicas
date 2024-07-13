#include <iostream>
void media(float, float, float);
int main(){
        float a, b, c;
        int loop = 1;
        while(loop == 1){
                std::cout << "Hi! Type-me 3 aleatroy real numbers: \n";
                std::cin >> a >> b >> c;
               	media(a, b, c);
                std::cout << "The middle number between the two first and the three are: " << M << " and " <<;
                std::cout << "Do you want to make it again? \n\t 0 to quit.\n\t 1 to stay.\n";
                std::cin >> loop;
        }
return 0;
}

float media(float a, float b){
        return (a+b)/2;
}
//cria um string ou array?
