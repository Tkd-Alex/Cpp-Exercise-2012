#include <iostream>
using namespace std;

struct data{
int giorno;
int mese;
int anno;
};

struct user{
char cod[100];
float importo;
data gma;
};

void caricamento(user[],int);
void stampa(user[],int);
void somma(user[],int,int,int);

void somma(user fattura[100], int m, int gg, int mm){
    float tm=0,tg=0;
    for(int i=0;i<m;i++){
        if(mm=fattura[i].gma.mese){
                tm+=fattura[i].gma.mese  ;
        }   
        else
        cout<<"Non e' stato caricato alcun importo sul seguente mese.\n";
        if(gg=fattura[i].gma.giorno){
                tg+=fattura[i].gma.giorno ;
        } 
        else
        cout<<"Non e' stato caricato alcun importo il seguente giorno.\n";
        cout<<"Totale importo mesi :"<<tm;
        cout<<"\nTotale importo giorni :"<<tg;
    }    
}

void caricamento(user fattura[100],int m){
    for(int i=0;i<m;i++){
    cout<<"Inserisci il "<<i+1<<char(248)<<" Codice Cliente.\n";
    fflush(stdin);
    gets(fattura[i].cod);
    cout<<"Inseriscil l'importo.\n";
    cin>>fattura[i].importo;
    cout<<"Inserisci il giorno.\n";
    cin>>fattura[i].gma.giorno;
    cout<<"Inserisci il mese.\n";
    cin>>fattura[i].gma.mese;
    cout<<"Inserisci il anno.\n";
    cin>>fattura[i].gma.anno;
    }
}

void stampa(user fattura[100],int m){
     for(int i=0;i<m;i++){
     cout<<"Codice del "<<i+1<<char(248)<<" cliente: ";
     cout<<fattura[i].cod<<endl;
     cout<<"Importo: ";
     cout<<fattura[i].importo<<endl;
     cout<<"Data: "<<fattura[i].gma.giorno<<fattura[i].gma.mese<<fattura[i].gma.anno<<endl;
     }
}     
          
int main (){
    user fattura [100];
    int m,gg,mm;
    cout<<"Quanti clienti vuoi caricare?\n";
    cin>>m;
    caricamento(fattura,m);
    stampa(fattura,m);
    cout<<"Inserisci il giorno.\n";
    cin>>gg;
    cout<<"Inserisci il mese.\n";
    cin>>mm;
    somma(fattura,m,gg,mm);
    system("pause");
}
