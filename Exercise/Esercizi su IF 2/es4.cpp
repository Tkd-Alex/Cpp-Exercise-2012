#include <iostream>
using namespace std;
int main (){
    float x,y;
    cout<<"Inserisci l'ascissa\n";
    cin>>x;
    cout<<"Inserisci la ordinata\n";
    cin>>y;
    if((x>0)&&(y>0))
    cout<<"Le coordinate inserite appartengono al primo quadrante\n";
    if((x<0)&&(y<0))
    cout<<"Le coordinate inserite appartengono al terzo quadrante\n";
    if((x>0)&&(y<0))
    cout<<"Le coordinate inserite appartengono al quarto quadrante\n";
    if((x<0)&&(y>0))
    cout<<"Le coordinate inserite appartengono al secondo quadrante\n";
    system("pause");}
