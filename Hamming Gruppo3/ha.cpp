
#include <iostream>
#include <time.h>
#include <conio.c>
#include <string>

using namespace std;

int mat[7][100]; //Matrice
char par[100]; //Stringa

void conversione(char,int); //Converte la stringa in binario.
void stampa1(int,int); //Stampa della matrice inviata (Differente dalle altre).

void conversione(char bin,int i2){
    int r,z=0;
    for(int i=6;i>-1;i--){
        r=bin%2;
        mat[i][i2]=r;
        bin=bin/2;
    }
}

void stampa1(int i2,int i3){
    int dec;    
        for(int i=0;i<i2;i++){
            if(i<i2){
                textcolor(14);
                dec=(mat[0][i]*64)+(mat[1][i]*32)+(mat[2][i]*16)+(mat[3][i]*8)+(mat[4][i]*4)+(mat[5][i]*2)+(mat[6][i]*1);  
                cout<<(char)dec<<" ";
            }
            else
                cout<<"  ";
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
    gets(par); //Viene letta la stringa.
    i2=strlen(par); //Viene ricavata la dimensione della stringa
    
    for(int i=0;i<i2;i++){
            conversione(par[i],i); //Richiamo procedura conversione.
    }
    
    textcolor(9);
    cout<<"\nSistema trasmittente: \n";
    
    textcolor(12);
    cout<<"\nLa matrice inviata e': \n\n";
    stampa1(i2,7); //Richiamo procedura stampa.
    system("pause");
}
