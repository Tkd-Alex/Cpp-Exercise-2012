#include <iostream>
using namespace std;
int main (){
    int a,b,c,s,p,n;
    float m;
    cout<<"Inserisci il primo valore.\n";
    cin>>a;
    cout<<"Inserisci il secondo valore.\n";
    cin>>b;
    cout<<"Inserisci il terzo valore.\n";
    cin>>c;
    s=0;
    p=1;
    n=0;
    m=0;
    if((a%2==0)||(a%5==0)){
    s+=a;
    p*=a;}
    else{
    n+=1;
    m+=a;}
    if((b%2==0)||(b%5==0)){
    s+=b;
    p*=b;}
    else{
    n+=1;
    m+=b;}
    if((c%2==0)||(c%5==0)){
    s+=c;
    p*=c;}
    else{
    n+=1;
    m+=c;}
    if(n!=0){
    m/=n;
    cout<<"\nMedia dei numeri non divisibili per 5 o per 2= \n"<<m<<endl;}
    if(n==3)
    p=0;
    cout<<"\nProdotto dei numeri divisibili per 5 o per 2= \n"<<p<<endl;
    cout<<"\nSomma dei numeri divisibili per 5 o per 2= \n"<<s<<endl;
    cout<<endl;
    system("pause");}
    
    
