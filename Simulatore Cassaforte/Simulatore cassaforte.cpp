#include <iostream>
using namespace std;
int main (){
    cout<<"Simulatore dell'apertura di una cassaforte. "<<endl;
    int c,c1,c2,c3,c4,c5,somma,pari2,pari4;
    cout<<"Inserire il codice numerico "<<endl;
    cin>>c;
    c1=c/10000;
    c=c%10000;
    c2=c/1000;
    c=c%1000;
    c3=c/100;
    c=c%100;
    c4=c/10;
    c5=c%10;
//  output
if((somma=c1+c2+c3+c4+c5>10)&&(somma=c1+c2+c3+c4+c5<15)&&(pari2=c2%2==0)&&(pari4=c4%2==0)&&(c1>c3)){
    cout<<"Codice corretto!\n";}
    else
    cout<<"Codice errato!\n";
    system("pause");
}    
