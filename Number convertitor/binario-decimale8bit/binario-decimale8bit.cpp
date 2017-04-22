#include <iostream>
using namespace std;
int main () {
    int b1, b2, b3, b4, b5, b6, b7, b8, decimale;
        cout<<"Inserisci un numero binario a 8-bit."<<endl;
        cout<<endl<<"Inserisci il primo-bit."<<endl;
        cin>>b1;
        cout<<"Inserisci il secondo-bit."<<endl;
        cin>>b2;
        cout<<"Inserisci il terzo-bit."<<endl;
        cin>>b3;
        cout<<"Inserisci il quarto-bit."<<endl;
        cin>>b4;
        cout<<"Inserisci il quinto-bit."<<endl;
        cin>>b5;
        cout<<"Inserisci il sesto-bit."<<endl;
        cin>>b6;
        cout<<"Inserisci il settimo-bit."<<endl;
        cin>>b7;
        cout<<"Inserisci l' ottavo-bit."<<endl;
        cin>>b8;
        decimale=(b1*128)+(b2*64)+(b3*32)+(b4*16)+(b5*8)+(b6*4)+(b7*2)+(b8*1);
        cout<<"Il numero binario " <<b1<<b2<<b3<<b4<<b5<<b6<<b7<<b8 <<" equivale a " <<decimale<<endl;
        system("pause");
    }    
