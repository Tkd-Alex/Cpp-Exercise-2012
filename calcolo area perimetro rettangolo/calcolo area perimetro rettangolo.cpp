#include <iostream>
using namespace std;
int main () {
    cout<<"Benvenuti nel sofwtare di calcolo Area e Perimetro del rettangolo."<<endl;
    float base, altezza, perimetro, area;
    cout<<"Inserire la base = ";
    cin>>base;
    cout<<"Inserire l'altezza = ";
    cin>>altezza;
    perimetro=(base+altezza)*2;
    area=base*altezza;
    cout<<"Il perimetro del rettangolo e' = "<<perimetro<<endl;
    cout<<"L'area del rettagolo e' = " <<area<<endl;
    cout<<"Created by Maggio A. - Maggio R. - Chiarello A."<<endl;
    system("pause");
}    
