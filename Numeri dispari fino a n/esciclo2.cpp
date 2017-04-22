#include <iostream>
using namespace std;
int main () {
    int i,n;
    cout<<"Inserisci fino a quanto vuoi visualizzare i numeri dispari - While\n";
    cin>>n;
    cout<<"Tutti i numeri dispari fino a "<<n<<endl;
    i=0;
    while(i<n){
    i++;
    if(i%2!=0)
    cout<<i<<endl;}
     //dowhile
    cout<<"\nInserisci fino a quanto vuoi visualizzare i numeri dispari - Do-While\n";
    cin>>n;
     cout<<"Tutti i numeri dispari fino a "<<n<<endl;
    i=0;
    do{
    i++;
    if(i%2!=0)
    cout<<i<<endl;
    }while(i<n);
system("pause");}
