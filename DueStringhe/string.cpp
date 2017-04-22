#include <iostream>
using namespace std;
void nuovestring(char);

void nuovestring(char str[100]){
char prima[100],seconda[100];
int m=strlen(str);
int f=0,j=0;
    for(int i=0;i<m;i++){
    if(i%2==0){
              prima[f]=str[i];
              f++;}
    else{
        seconda[j]=str[i];
        j++;}
    }
    cout<<"Stringa posizione pari: ";
    for(int i=0;i<f;i++)
    cout<<prima[i];    
    cout<<"\nStringa posizione dispari: ";
    for(int i=0;i<j;i++)
    cout<<seconda[i];
    cout<<endl;
}
int main () {
char str[100];
int v;
do{
    v=0;
    cout<<"Inserisci la stringa\n";
    gets(str);
    if(strlen(str)>20){
        cout<<"Stringa maggiore di venti!\n";
        v=1;
    }
    nuovestring(str);
}while(v==1);
system("pause");
}
