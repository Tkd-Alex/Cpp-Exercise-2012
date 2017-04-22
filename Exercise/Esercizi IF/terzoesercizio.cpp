#include <iostream>
using namespace std;
int main () {
    int a,b,r;
    cout<<"Inserisci il primo numero intero"<<endl;
    cin>>a;
    cout<<"Inserisci il numero con la quale verificare se \ne' multiplo di "<<a<< " e ricavare il quoziente. \n !IN CASO CONTRARIO IL SOFTWARE DARA' IL PRODOTTO"<<endl;
    cin>>b;
    if(r=a%b==0){
        r=a/b;
        cout<<"Il quoziente e' "<<r<<endl;}
        else{
        r=a*b;
        cout<<"Il prodotto e' "<<r<<endl;}
system("pause");}
