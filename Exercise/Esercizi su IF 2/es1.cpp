#include <iostream>
using namespace std;
int main(){
    float v;
    cout<<"Inserisci il voto\n";
    cin>>v;
    
    if ((v>=1)&&(v<=10))
    cout<<"Il voto inserito e' esatto!\n";
    else
    cout<<"Il voto inserito non e' esatto!\n";
system("pause"); 
}   
