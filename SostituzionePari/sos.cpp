#include <iostream>
using namespace std;

void sostituzione(char,char);

void sostituzione(char str[100],char sos){
    int m=strlen(str);
    for(int i=0;i<m;i+=2){
        str[i]=sos;
    }
    cout<<str;
}

int main () {
    char str[100],sos;
    cout<<"Inserisci la stringa da caricare.\n";
    gets(str);
    cout<<"Inserisci il carattere da sostiuire alle posizioni pari.\n";
    cin>>sos;
    sostituzione(str,sos);
    cout<<endl;
    system("pause");
}
