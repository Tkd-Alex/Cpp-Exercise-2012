#include <iostream>
#include <time.h>
using namespace std;
int main () {
srand(time(NULL));
int vet[5],r,i,j;
for(int a=1;a<=7;a++){
cout<<"Numeri estratti sulla "<<a<<"a ruota: ";
    do{
        r=1;
        for(i=0;i<5;i++){
            vet[i]=(rand()%5)+1;
            j=i;
            while(j!=0){
                    if(vet[i]==vet[j-1]){
                    r=0;
                    }
                j--;
            }
        }
    }while(r==0);

    for(i=0;i<5;i++){
    cout<<vet[i];
    if(i!=4)
    cout<<" - ";
    else
    cout<<endl<<endl;}
}
system("pause");}
