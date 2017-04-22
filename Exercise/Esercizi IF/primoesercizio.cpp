#include <iostream>
using namespace std;
int main () {
    int a,n;
    cout<<"Inserisci un numero naturale"<<endl;
    cin>>a;
    cout<<"Inserisci il numero per la quale vorresti verificare se "<<a <<" e' divisibile."<<endl;
    cin>>n;
    if(a=a%n==0){
        cout<<"Il numero inserito precedentemente e' divisibile per "<<n<<endl;}
        else{
        cout<<"Il numero inserito precedentemente non e' divisibile per "<<n<<endl;}
    system("pause");
}    
    
