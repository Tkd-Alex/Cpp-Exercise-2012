#include <iostream>
using namespace std;
int main (){
    float nu,dec;
    int bi,i;
    cout<<"Inserisci il numero decimale da convertire in binario.\n";
    cin>>nu;
    //Parte intera binaria
    bi=(int)nu;
    while(bi!=0){
    cout<<bi%2;
    bi/=2;}    
    //Parte decimale binaria
     bi=(int)nu;
     dec=(nu-bi);
     cout<<" <-- Stampato al contrario! , ";
     i=0;
     while(i<5){
        dec*=2;
        cout<<(int)dec;
        i++;
        if((int)dec==1){
        dec=dec-(int)dec;}    
        }
        cout<<endl;
    system("pause");}    
