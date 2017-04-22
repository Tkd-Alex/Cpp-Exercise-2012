#include <iostream>
using namespace std;
int main(){
    int d1,d2,q,r;
    cout<<"Inserire il dividendo\n";
    cin>>d1;
    cout<<"Inserire il divisore\n";
    cin>>d2;
    if(d2==0)
    cout<<"Impossibile\n";
    else{
    q=d1/d2;
    r=d1%d2;
    cout<<"Il quoziente e' " <<q<<endl;
     cout<<"Il resto e' " <<r<<endl;
    }
system("pause"); 
}   
