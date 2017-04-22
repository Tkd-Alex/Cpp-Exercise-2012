#include <iostream>
using namespace std;
int main(){
    int n,i,i1;
    i=1;
    i1=1;
    cin>>n;
    cout<<"While\n";
    while(i1<=n){
      while(i<=n){
      cout<<"*";
        i++;}
        i=1;
        cout<<endl;
      i1++;}
        
        i1=1;
        i=1;

        
        cout<<"\nDo-while\n";
         do{
      do{
      cout<<"*";
        i++;}while(i<=n);
        i=1;
        cout<<endl;
      i1++;}while(i1<=n);
        
    
    cout<<"\nFor\n";
    for(i1=1;i1<=n;i1++){
    for(i=1;i<=n;i++)
    {cout<<"*";}
    cout<<endl;}
    
system("pause");
}

