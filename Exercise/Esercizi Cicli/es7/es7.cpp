#include <iostream> 
using namespace std;
int main () {
int n,m,s;
s=0;
n=0;
m=1;
while(n!=m){
cout<<"Inserisci numero.\n";
cin>>n;
s+=n;
if(n!=m){
cout<<"Inserisci numero.\n";
cin>>m;
s+=m;}
}
cout<<"La somma dei numeri inseriti e' "<<s<<endl;
system("pause");
}
