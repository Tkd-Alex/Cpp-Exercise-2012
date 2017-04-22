#include <iostream>
using namespace std;

void caricamento(char [100][100],int&);
void controllo(char [],int,char);
void stampa(char [100][100],int);

void stampa(char str[100][100],int m){
    for(int i=0;i<m;i++){
        cout<<str[i]<<endl;
    }
}

void caricamento(char str[100][100],int &m){
    for(int i=0;i<m;i++){
        cout<<"Inserisci la "<<i+1<<char(248)<<" stringa.\n";
        fflush(stdin);
        gets(str[i]);
    }
}

void controllo(char str[100][100],int m,char c){
    for(int i=0;i<m;i++){
        if(str[i][0]==c){
                         cout<<"La stringa: "<<str[i]<<" iniziare con la lettera: "<<c<<endl;
        }
    }
}

int main (){
char str[100][100];
int m;
char c;
cout<<"Quante stringhe vuoi caricare?\n";
cin>>m;
caricamento(str,m);
stampa(str,m);
cout<<"Con quale carattere devono iniziare?\n";
cin>>c;
controllo(str,m,c);
system("pause");
}
