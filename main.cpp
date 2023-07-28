#include <iostream>
#include <string>
using namespace std;

enum Cases{bleu, red};
struct color
{
    Cases color;
    string colorNam;
};


int main (){

    color reed;
    reed.colorNam = "red";
    reed.color = red;

    color bluee;
    bluee.colorNam = "bleu";
    bluee.color = bleu;

    color c ;
    int g(0);
    do
    {
        cout << "Enter a number beteuin 0 and 1 :";
        cin >> g;  
    } while (g < 0 || g > 1);
    if(g == 0 )
        c = bluee;
    else
        c = reed;

    cout << "Hello it's " << c.colorNam<< " !" << endl;
    return 0;
}