#include <iostream>
using namespace std;
int main () {
    int i;
    cout<<"Tutti i numeri pari fino a 100\nWhile\n";
    i=0;
    cout<<i<<endl;
    while(i<100){
    i++;
    if(i%2==0)
    cout<<i<<endl;
}

//Do while
cout<<"\nTutti i numeri pari fino a 100\nDo-While\n";
i=0;
do{
i++;
    if(i%2==0)
    cout<<i<<endl;    
}while(i<100);   
    system("pause");}
