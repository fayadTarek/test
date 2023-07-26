#include <iostream>
using namespace std;

enum Cases{bleu, red};

int main (){
    Cases c =bleu;
    int g(0);
    do
    {
        cout << "Enter a number beteuin 0 and 1 :";
        cin >> g;  
    } while (g < 0 || g > 1);
    
    c =(Cases) g;

    if(c == bleu)
        cout << "Hello it's blue!";
    else
     cout << "Hello it's red!";
    return 0;
}