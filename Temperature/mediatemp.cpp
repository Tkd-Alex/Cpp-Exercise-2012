#include <iostream>
using namespace std;
int main () {
float m, sm, vet[100],max;
m=0;
sm=0;
max=0;
for(int i=0; i<12; i++){
        cout<<"Inserisci la "<<i+1<< "a temperatura.\n";
        cin>>vet[i];
        if(max<vet[i])
        max=vet[i];
        if(vet[i]<0)
        sm++;
        m+=vet[i];
}
m/=12;
cout<<"Le temperature scese sotto lo zero sono "<<sm;
cout<<"\nLa media delle temperature inserite e' di "<<m<<" gradi.\n";

//for(int i=0; i<12; i++){
//    
//}
cout<<"La temperatura massima che e' stata raggiunta in un anno e' "<<max<<" gradi.\n";
system("pause");
}
