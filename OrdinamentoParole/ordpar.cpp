#include <iostream>
using namespace std;
int main () {
char par[100],ris[100],voc[100],con[100];    
int gui[100],max;
cout<<"Quante lettere vuoi inserire?\n";
cin>>max;
    //Caricamento Parola
    for(int i=0;i<max;i++){
    cout<<"Inserisci la "<<i+1<<"a lettera.\n";
    cin>>par[i];}
    //Caricamento Guida
    for(int i=0;i<max;i++){
    cout<<"Inserisci la posizione della "<<i+1<<"a lettera.\n";
    cin>>gui[i];}
    //Ordinamento Parola
    for(int i=0;i<max;i++){
    ris[gui[i]-1]=par[i];}
    //Stampa
    cout<<"Parola ordinata secondo la guida.\n";
    for(int i=0;i<max;i++){
    cout<<ris[i];}
    cout<<endl;
    //Riconoscimento Vocali e Consonanti
    int mvoc=0,mcon=0;
    for(int e=0;e<max;e++){
    if((par[e]=='a')||(par[e]=='A')||(par[e]=='e')||(par[e]=='E')||(par[e]=='i')||(par[e]=='I')||(par[e]=='o')||(par[e]=='O')||(par[e]=='u')||(par[e]=='U')){
    voc[mvoc]=par[e];
    mvoc++;}
    else{
    con[mcon]=par[e];
    mcon++;}   
    }
    //Ordinamento delle vocali
    char t;
    for(int i=0;i<mvoc-1;i++){
    for(int j=i+1;j<mvoc;j++){
    if(voc[i]>voc[j]){
    t=voc[i];
    voc[i]=voc[j];
    voc[j]=t;}}}    
    //Ordinamento delle consonanti
    for(int i=0;i<mcon-1;i++){
    for(int j=i+1;j<mcon;j++){
    if(con[i]>con[j]){
    t=con[i];
    con[i]=con[j];
    con[j]=t;}}}    
    //Stampa Vocali
    cout<<"Vocali.\n";
    for(int i=0;i<mvoc;i++){
    cout<<voc[i];}
    cout<<endl;
    //Stampa Consonanti
    cout<<"Consonanti.\n";
    for(int i=0;i<mcon;i++){
    cout<<con[i];}
    cout<<endl;
    //Stampa numero Vocali
    cout<<"Le vocali sono "<<mvoc<<".\n";
    //Stampa numero Consonanti
    cout<<"Le consonanti sono "<<mcon<<".\n";
system("pause");
}
