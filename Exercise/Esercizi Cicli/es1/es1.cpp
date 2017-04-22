#include <iostream> 
using namespace std;
int main (){
int x,y;
cout<<"Inserisci x.\n";
cin>>x;
cout<<"Inserisci y.\n";
cin>>y;
if(x%2!=0)
x++;
while(x<y){
x+=2;
cout<<x<<endl;}
system("pause");
}
