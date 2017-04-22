#include <iostream>
#include <time.h>
#include <conio.c>
using namespace std;

int mat[7][100];

void conversione(char,int);
void checkverticale(int);
void checkorizzontale(int);
void stampa(int,int);
int causuale(int);

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

void conversione(char bin,int i2){
    int r,z=0;
    for(int i=6;i>-1;i--){
        r=bin%2;
        mat[i][i2]=r;
        bin=bin/2;
    }
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
  
int casuale(int mod) {
    int r;
    r=rand()%mod;
    return r;
}   

void stampa(int i2,int i3){
        for(int i=0;i<i2;i++){
            for(int j=0;j<i3;j++){
                    cout<<mat[j][i]<<" ";
            } 
        cout<<endl;   
    }
}            

int main(){
    int i2;
    char bin;
    srand(time(NULL));
    textcolor(10);
    cout<<"Quanti caratteri vuoi inserire?\n";
    cin>>i2;
    textcolor(15);
    for(int i=0;i<i2;i++){
        cout<<"Inserisci il "<<i+1<<"o carattere.\n";
        cin>>bin;
        conversione(bin,i);
    }
    
    textcolor(9);
    cout<<"\nSistema trasmittente: \n";
    
    for(int i=0;i<i2;i++){
            checkorizzontale(i);
    }
    
    textcolor(12);
    cout<<"\nLa matrice inviata e': \n\n";
    
    textcolor(15);
    stampa(i2,7);
    
//    textcolor(12);
//    cout<<"\nLa matrice con controllo orizzontale e': \n\n";
//    
//    textcolor(15);
//    stampa(i2,8);
    
    textcolor(12);
    cout<<"\nLa matrice con controllo orizzontale e verticale e': \n\n";
    
    checkverticale(i2);
    mat[7][i2]=0;
    textcolor(15);
    stampa(i2+1,8); 
    
    int ori[6],ver[100];
    
    for(int i=0;i<7;i++)
    ori[i]=mat[i][i2];
    
    for(int i=0;i<i2+1;i++)
    ver[i]=mat[7][i];
    
    int errore;
    errore=casuale(2);
    textcolor(9);
    cout<<"\nSistema ricevente.\n";
    if(errore==1){
        cout<<"\nE' stato trovato un errore durante il ricevimento del messaggio.\n";
        int j=casuale(6);
        int i=casuale(i2-1);
        if(mat[j][i]==0)
                mat[j][i]=1;
        else
                mat[j][i]=0;
                
        textcolor(12);
        cout<<"\nLa matrice ricevuta e' :\n";  
        
//        stampa(i2,7);
//        
            for(int i=0;i<i2;i++){
               checkorizzontale(i);
            }
//           
//        textcolor(12);
//        cout<<"\nLa matrice con controllo orizzontale e': \n\n";
//        textcolor(15);
//        stampa(i2,8);   
//        
//        textcolor(12);
//        cout<<"\nLa matrice con controllo orizzontale e verticale e': \n\n";
//    
          checkverticale(i2);
          mat[7][i2]=0;
//        textcolor(15);
//        stampa(i2+1,8);  

        
        for(int e=0;e<i2+1;e++){
            for(int f=0;f<8;f++){
                if((f==j)&&(e==i)){
                     textcolor(11);
                     cout<<mat[f][e]<<" ";
                }
                else{
                     textcolor(15);
                     cout<<mat[f][e]<<" ";
                }    
            } 
              cout<<endl;  
        }    
        
        textcolor(9);
        cout<<"\nIl sistema sta vericando il controllo orizzontale e verticale \ndel messaggio inviato e di quello ricevuto.\n";
        
        textcolor(12);
        int v,o;
        
        for(int i=0;i<i2+1;i++){
                if(ver[i]!=mat[7][i]){
                                    v=i;
                                    cout<<"\nErrore trovato nella righa: "<<i+1<<endl;
                }
        }
        
        for(int i=0;i<7;i++){
                if(ori[i]!=mat[i][i2]){
                                    o=i;   
                                    cout<<"\nErrore trovato nella colonna: "<<i+1<<endl;
                }
        }
           

        if(mat[o][v]==1)
        mat[o][v]=0;
        else
        mat[o][v]=1;  
        
        textcolor(12);
        cout<<"\nIl messaggio e' stato corretto : \n\n";
        
        for(int i=0;i<i2;i++){
                checkorizzontale(i);
        }
        
        checkverticale(i2);
        mat[7][i2]=0;
    
        textcolor(15);
        stampa(i2+1,8);
           
    }    
    else
        cout<<"\nNon e' stato trovato alcun errore nel ricevimento del messaggio.\n";

    
cout<<endl;    
textcolor(7);   
system("pause");
}
