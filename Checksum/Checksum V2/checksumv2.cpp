#include <iostream>
#include <time.h>
#include <conio.c>
#include <string>
using namespace std;

int mat[7][100];
char par[100];

void conversione(char,int);
void ritorno(int);
void checkverticale(int);
void checkorizzontale(int);
void stampa(int,int);
int verticalericazione(int);
bool orizzontalericezione(int);
int causuale(int);

void ritorno(int i2){
int dec; 
    for(int j=0;j<i2;j++){
        dec=(mat[0][j]*64)+(mat[1][j]*32)+(mat[2][j]*16)+(mat[3][j]*8)+(mat[4][j]*4)+(mat[5][j]*2)+(mat[6][j]*1);  
        textcolor(15);
        cout<<(char)dec;
    }    
    cout<<endl;
}

bool orizzontalericezione(int i2){
     int u=0,u2;
     bool err=false;
     if(!err){
         for(int i=0;i<7;i++){
             if(mat[i][i2]!=0)
                              u++;
         }   
         if(u%2==0)
                   u2=0;
         else
             u2=1;
     }
     if(u2!=mat[7][i2])
                       return err=true;
     else
         return err=false;
}

void checkorizzontale(int i2){
    int u=0;
    for(int i=0;i<7;i++){
        if(mat[i][i2]!=0)
                         u++;
    }   
    if(u%2==0)
        mat[7][i2]=0;
    else
        mat[7][i2]=1;
}

int verticalericezione(int i2){
    int u,u2;
    bool err=false;
    int i=-1;
    do{
        i++;
        u=0;
        
        for(int f=0;f<i2;f++){
            if(mat[i][f]!=0)
                            u++;
        }
        
        if(u%2==0)
                  u2=0;
        else
            u2=1;  
            
        if(u2!=mat[i][i2]){
                          err=true;
                          return i;
        }
        else
                          err=false; 
    
    }while(err==false); 
}

void checkverticale(int i2){
    int u;
    for(int i=0;i<7;i++){
            u=0;
            for(int f=0;f<i2;f++){
                    if(mat[i][f]!=0)
                                    u++;
            }
            if(u%2==0)
                      mat[i][i2+1]=0;
            else
                mat[i][i2]=1;       
    }
}

void conversione(char bin,int i2){
    int r,z=0;
    for(int i=6;i>-1;i--){
        r=bin%2;
        mat[i][i2]=r;
        bin=bin/2;
    }
}

  
int casuale(int mod) {
    int r;
    r=rand()%mod;
    return r;
}   

void stampa(int i2,int i3){
        
        for(int i=0;i<i2;i++){
            for(int j=0;j<i3;j++){
                    textcolor(15);
                    cout<<mat[j][i]<<" ";
            } 
        cout<<endl;   
        }
    cout<<endl;
}   


int main(){
    int i2; 
    srand(time(NULL));
    textcolor(14);
    cout<<"Inserisci la parola da inviare.\n";
    gets(par);
    i2=strlen(par);
    
    for(int i=0;i<i2;i++){
            conversione(par[i],i);
    }
    
    textcolor(9);
    cout<<"\nSistema trasmittente: \n";
    
    textcolor(12);
    cout<<"\nLa matrice inviata e': \n\n";
    stampa(i2,7);
    
    textcolor(12);
    for(int i=0;i<i2;i++){  
            checkorizzontale(i);
    }
    
    checkverticale(i2);
    mat[7][i2]=0; 
     
    textcolor(12);
    cout<<"La matrice con controllo orizzontale e verticale e': \n\n";  
    
    stampa(i2+1,8); 
    
    int errore;
    errore=casuale(2);
    textcolor(9);
    cout<<"Sistema ricevente.\n";
    errore=1; //Da cancellare
    if(errore==1){
        cout<<"\nE' stato trovato un errore durante il ricevimento del messaggio.\n";
        int j=casuale(6);
        int i=casuale(i2-1);
        if(mat[j][i]==0)
                mat[j][i]=1;
        else
                mat[j][i]=0;
                
        textcolor(12);
        cout<<"\nLa matrice ricevuta e' :\n\n"; 
        
        stampa(i2+1,8); 
        
        textcolor(12);
        cout<<"La parola ricevuta e' : ";
        
        ritorno(i2);
        
        bool err=false;
        int v;
        i=-1;
            
        do{
            i++;
            err=orizzontalericezione(i);    
        }while(err==false);
        
        v=i;
        
        textcolor(9);
        cout<<"\nSistema di correzione.\n";

        textcolor(12);
        cout<<"\nErrore trovato nella riga: "<<v+1<<endl;
        
        int o=verticalericezione(i2);
        
        cout<<"\nErrore trovato nella colonna: "<<o+1<<endl<<endl;
        
        
        for(int e=0;e<i2+1;e++){
            for(int f=0;f<8;f++){
                if(((f==o)&&(e==v))||((f==o)&&(e==i2))||((f==7)&&(e==v))){
                    textcolor(14);
                    cout<<mat[f][e]<<" ";
                }
                else{
                    textcolor(15);
                    cout<<mat[f][e]<<" ";
                }    
            } 
        cout<<endl;  
        } 
        
        if(mat[o][v]==1)
                        mat[o][v]=0;
        else
            mat[o][v]=1;  
        
        textcolor(12);
        cout<<"\nIl messaggio e' stato corretto : \n\n";
        stampa(i2+1,8);
         
     }
    else
        cout<<"\nNon e' stato trovato alcun errore nel ricevimento del messaggio.\n";

textcolor(7);    
system("pause");
}
    
