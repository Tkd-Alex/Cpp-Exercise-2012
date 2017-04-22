#include <iostream> 
using namespace std;
int main () {
int k,n;
cout<<"Inserisci n.\n";
cin>>n;
cout<<"Inserisci k.\n";
cin>>k;
if(n%2!=0){
n++;
}
do{
cout<<n<<endl;
n+=2;
}while(n<k); 
system("pause");
}
