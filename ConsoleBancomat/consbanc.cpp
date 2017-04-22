#include <iostream>
#include <string>
using namespace std;

//0Cliente: alessandro - Pass: alex96
//1Cliente: francesco - Pass: franco96
//2Cliente: maria - Pass: maria96
//3Cliente: giovanni - giovy96
//4Cliente: gabriele - Pass: gabry96
//5Cliente: raffaella - Pass: raffy96
//6Cliente: viviana - Pass: vivi96
//7Cliente: salvatore - Pass: salvo96
//8Cliente: filippo - Pass: pippo96
//9Cliente: rossana - Pass: rossy96

struct bancomat{
    char clienti[100];
    char password[100];
    float saldo;
};

void caricamento(bancomat []);
int accesso(bancomat[],char[]);
void prelievo(bancomat[], int);
void aggiunta(bancomat[], int);

void aggiunta(bancomat console[100],int i){
    float p;
    cout<<"Quanto denaro vuoi aggiungere?.\n";
    cin>>p;
    console[i].saldo+=p;
    cout<<"Il tuo saldo attuale e' di "<<console[i].saldo;    
}

void prelievo(bancomat console[100],int i){
    float p;
    cout<<"Quanto denaro vuoi prelevare.\n";
    cin>>p;
    if(p>console[i].saldo)
                          cout<<"Non puoi prelevare piu' di quanto hai!\n";
    else{
         console[i].saldo-=p;
         cout<<"Il tuo saldo attuale e' di "<<console[i].saldo; 
    }   
}

int accesso(bancomat console[100],char utente[100]){
     char pass[100];
     bool check=false;
     int i=0;
     
     do{
        if(strcmp(console[i].clienti,utente)==0){
                                                 check=true;
        }        
        i++;
     }while((i<10)&&(!check));
     
     i--;
     
     if(check==true){
                         cout<<"Inserisci la password di "<<console[i].clienti<<" :"<<endl;
                         fflush(stdin);
                         gets(pass);
                         if(strcmp(pass,console[i].password)==0){
                                                                 cout<<"Benvenuto "<<console[i].clienti;
                                                                 cout<<"\nIl tuo saldo attualmente e' di: "<<console[i].saldo<<" euro.\n";
                                                                 return i;
                         }
                         else{
                             cout<<"Password non corrispondenti!\n";
                         }
     }   
     else{
          cout<<"Siamo spiacienti ma il cliente "<<utente<<" non risulta essere nei nostri database.\n";
     }
}

void caricamento(bancomat console[100]){
     int s;
     cout<<"Inserire manualmente i 10 utenti o utilizzare quelli automatici?\n";
     cout<<"[0] Automatici.\n[1] Manuale.\n";
     cin>>s;
     if(s==1){
         for(int i=0;i<10;i++){
                 cout<<"Inserisci il "<<i+1<<char(248)<<" utente.\n";
                 fflush(stdin);
                 gets(console[i].clienti);
                 cout<<"Inserisci la password di "<<console[i].clienti<<endl;
                 gets(console[i].password);
                 cout<<"Inserisci il saldo di "<<console[i].clienti<<endl;
                 cin>>console[i].saldo;
         }
     }
     else{
          strcpy(console[0].clienti,"alessandro");
          strcpy(console[0].password,"alex96");
          console[0].saldo=2345;
          strcpy(console[1].clienti,"francesco");
          strcpy(console[1].password,"franco96");
          console[1].saldo=5643;
          strcpy(console[2].clienti, "maria");
          strcpy(console[2].password,"maria96");
          console[2].saldo=14565;
          strcpy(console[3].clienti,"giovanni");
          strcpy(console[3].password,"giovy96");
          console[3].saldo=2345;
          strcpy(console[4].clienti,"gabriele");
          strcpy(console[4].password,"gabry96");
          console[4].saldo=2654;
          strcpy(console[5].clienti, "raffaella");
          strcpy(console[5].password,"raffy96");
          console[5].saldo=45656;
          strcpy(console[6].clienti,"viviana");
          strcpy(console[6].password,"vivi96");
          console[6].saldo=2345;
          strcpy(console[7].clienti,"salvatore");
          strcpy(console[7].password,"salvo96");
          console[7].saldo=8756;
          strcpy(console[8].clienti, "filippo");
          strcpy(console[8].password,"pippo96");
          console[8].saldo=123;
          strcpy(console[9].clienti,"rossana");
          strcpy(console[9].password,"rossy96");
          console[9].saldo=2345;
     }
     cout<<"Caricamento utenti con relative password e saldo caricati con successo!\n";
}


int main (){
    
char utente[100];    
bancomat console[100];
int i,s;

caricamento(console);

cout<<"Inserisci il nome dell'utente con il quale accedere.\n";
fflush(stdin);
gets(utente);


i=accesso(console,utente);

cout<<"Cosa vuoi fare "<<console[i].clienti<<" ?"<<endl;
cout<<"[0] Aggiungere denaro.\n[1] Prelevare denaro.\n";
cin>>s;

if(s==0)
aggiunta(console,i);
else
prelievo(console,i);

cout<<endl;
system("pause");}
