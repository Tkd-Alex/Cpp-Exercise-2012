#include <iostream>
using namespace std;
int main () {
int s,n,i;
cout<<"Inserire n.\n";
cin>>n;
i=1;
s=0;
while(i<=n){
s+=i*i;
i++;}
cout<<"La somma dei quadrati dei primi n numeri e' "<<s<<endl;
system("pause");
}
