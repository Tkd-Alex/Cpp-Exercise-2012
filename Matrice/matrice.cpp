#include <iostream>
using namespace std;

void carica(int [10][10],int,int);
int somma(int [10][10],int,int,int);

void carica(int m[10][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Inserisci l'elemento "<<j<<","<<i<<" ";
            cin>>m[j][i];
        }
    }
}

int somma(int m[10][10],int s,int r, int c){
s=0;
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            s+=m[j][i];
        }  
    }    
return s;}

int main(){
    int mat[10][10],r,c,s=0;
    cout<<"Inserisci il numero delle righe.\n";
    cin>>r;
    cout<<"Inserisci il numero delle colonne.\n";
    cin>>c;
    carica(mat,r,c);
    
    cout<<"\nLa matrice e': \n\n";
      
    //Stampa matrice 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[j][i]<<" ";
        } 
        cout<<endl;   
    }
    cout<<"\nLa somma e' : ";
    cout<<somma(mat,s,r,c);
    cout<<endl;

system("PAUSE");
return 0;
}    
    
