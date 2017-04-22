#include <iostream>
using namespace std;
int main(){
int a,b,c,uno,due,tre;
cout<<"Inserisci a.\n";
cin>>a;
cout<<"Inserisci b.\n";
cin>>b;
cout<<"Inserisci c.\n";
cin>>c;

    if (a >= b){
       if (a >= c){
          uno = a;
          if (b >= c){
              due = b; 
              tre = c;
          }
          else{
              due = c; 
              tre = b;
          }
       }
       else{
           uno = c;
           due = a; 
           tre = b;
       }
    }
    else{
         if (a >= c){
            uno = b; 
            due = a; 
            tre = c;
         }
         else{
              tre = a;
         }
    if (b >= c){
        uno = b;
    }
    else
    {
        uno = c; 
        due = b; 
        tre = a;
    }
    }

cout<<"Ordine crescente: "<<tre<<due<<uno;
system("pause");}
