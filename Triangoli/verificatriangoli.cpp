#include <iostream>
using namespace std;
int main () {
    float n1,n2,n3,somma1,quadrato,somma2;
    cout<<"Inserisci la misura piu' grande del triangolo"<<endl;
    cin>>n1;
    cout<<"Inserisci la seconda misura"<<endl;
    cin>>n2;
    cout<<"Inserisci la terza misura"<<endl;
    cin>>n3;
    somma1=n2+n3;
    if(somma1>n1){
    cout<<"Le misure inserite possono essere quelle di un triangolo!"<<endl;
   if((n1==n2)&&(n2==n3)&&(n1==n3)){
    cout<<"Il triangolo e' di tipo equilatero!"<<endl;}
    else{
     if((n1==n2)||(n2==n3)||(n3==n1)){
    cout<<"Il triangolo e' di tipo isoscele!"<<endl;}}
    if((n1!=n2)&&(n2!=n3)&&(n1!=n3)){
    cout<<"Il triangolo e' di tipo scaleno!"<<endl;}
    quadrato=(n1*n1);
    somma2=(n2*n2)+(n3*n3);
    if(quadrato==somma2){
    cout<<"Il triangolo e' rettangolo"<<endl;}
}
else
   cout<<"Le misure inserite non possono essere quelle di un triangolo!"<<endl;
system("pause");}
