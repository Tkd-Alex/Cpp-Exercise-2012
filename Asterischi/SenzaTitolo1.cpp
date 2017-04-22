#include <iostream>

using namespace std;
int main(){
    int n,i;
    i=1;
    cin>>n;
    
    
    cout<<"While orizzontale\n";
    while(i<=n){
        cout<<"*";
        i++;}
        i=1;
        
        cout<<"\nWhile verticale\n";
    while(i<=n){
        cout<<"*\n";
        i++;}
        i=1;
        
        cout<<"\nDo-while orizzontale\n";
        do{
        cout<<"*";
        i++;}
        while(i<=n);
        i=1;
        
        cout<<"\nDo-while verticale\n";
        do{cout<<"*\n";
        i++;}
        while(i<=n);
        i=1;
    
    cout<<"\nFor orizzontale\n";
    for(i=1;i<=n;i++)
    {cout<<"*";}
    
    cout<<"\nFor verticale\n";
    for(i=1;i<=n;i++)
    {cout<<"*\n";}
    
system("pause");
}
