#include <iostream>
using namespace std;
int main () {
int s,x,n;
s=0;
cout<<"Inserire il valore di x.\n";
cin>>x;
while(s<x){
cout<<"Inserisci un numero\n";
cin>>n;
s+=n;
}
cout<<"E' stato superato il limite di x = "<<x;
cout<<"\nLa somma dei numeri inseriti e' "<<s<<endl;    
system("pause");
}
