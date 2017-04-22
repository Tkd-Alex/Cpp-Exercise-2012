#include <iostream>
using namespace std;
int main () {
    int m,n;
    cout<<"Inserisci un numero naturale"<<endl;
    cin>>n;
    cout<<"Inserisci il numero per la quale vorresti verificare se "<<n <<" e' minore o maggiore."<<endl;
    cin>>m;
    if(n>m){
        cout<<"Il numero "<<n <<" e' maggiore del numero "<<m<<endl;}
        else{
        cout<<"Il numero "<<n <<" e' minore del numero "<<m<<endl;}
    system("pause");
}    
    

