#include <iostream>
using namespace std;
int main () {
    int b1, b2, b3, b4, decimale;
        cout<<"Inserisci un numero binario a 4-bit."<<endl;
        cout<<endl<<"Inserisci il primo-bit."<<endl;
        cin>>b1;
        cout<<"Inserisci il secondo-bit."<<endl;
        cin>>b2;
        cout<<"Inserisci il terzo-bit."<<endl;
        cin>>b3;
        cout<<"Inserisci il quarto-bit."<<endl;
        cin>>b4;
        decimale=(b1*8)+(b2*4)+(b3*2)+(b4*1);
        cout<<"Il numero binario " <<b1<<b2<<b3<<b4 <<" equivale a " <<decimale<<endl;
        system("pause");
    }    
