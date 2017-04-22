#include <iostream>
using namespace std;
int main (){
int n,i,s,m;
cout<<"Inserire n.\n";
cin>>n;
i=0;
while(i<n){
cout<<"Inserisci il numero da sommare.\n";
cin>>m;
s+=m;
i++;
}
cout<<"La somma dei numero inseriri e' "<<s<<endl;;
system("pause");
}
