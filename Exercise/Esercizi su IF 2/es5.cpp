#include <iostream>
using namespace std;
int main () {
    float p,p2;
    cout<<"Inserisci il prezzo del prodotto. \nIl software calcoloera' automaticamente lo sconto.\n";
    cin>>p;
    if(p<=50)
    p-=((p*5)/100);
    if((p>50)&&(p<=200))
    p-=((p*10)/100);
    if(p>200)
    p-=((p*20)/100);
    cout<<"Il prezzo scontato e' "<<p<<endl;
    system("pause");}
    

