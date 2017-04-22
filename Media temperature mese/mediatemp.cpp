#include <iostream>
using namespace std;
int main () {
float m, sm, vet[100];
m=0;
sm=0;
for(int i=0; i<12; i++){
        cout<<"Inserisci la "<<i+1<< "a temperatura.\n";
        cin>>vet[i];
        if(vet[i]<0)
        sm++;
        m+=vet[i];
}
m/=12;
cout<<"Le temperature scese sotto lo zero sono "<<sm;
cout<<"\nLa media delle temperature inserite e' di "<<m<<" gradi.\n";
system("pause");
}
