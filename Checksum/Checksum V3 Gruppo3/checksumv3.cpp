/**
* @autor Maggio Alessandro 
* @see Simulazione software invio e ricezione messaggi - Checksum
* @versione V 3.0
*/

#include <iostream>
#include <time.h>

#include <conio2.h> 
/*Per utilizzare questa libreria scaricatela da http://old.devpaks.org/show.php?devpak=75. 
Installate e inserite la libreria nel vostro compilatore. Per DevC++ : 
Strumenti -> Opzioni di compilazione -> in entrambe le caselle scrivete -lconio e mettete la spunta.*/

#include <string> 

using namespace std;

int mat[7][100]; //Matrice
char par[100]; //Stringa

void conversione(char,int); //Converte la stringa in binario.
void ritorno(int); //Convertire il valore binario in decimale.
void checkverticale(int); //Effettua un controllo verticale 1 pari nell'inivio.
void checkorizzontale(int); //Effettua un controllo orizzontali 1 pari nell'inivio.
void stampa(int,int); //Stampa utilizzata la maggior parte delle volte.
void stampa1(int,int); //Stampa della matrice inviata (Differente dalle altre).
int verticalericazione(int); //Effettua un controllo verticale 1 pari nella ricezione.
bool orizzontalericezione(int); //Effettua un controllo orizzontale 1 pari nella ricezione.
int causuale(int); //Genera numeri casuali.

/**

*Processo che trasforma il numero binario in decimale e stampa il successivo carattere corrispondente al valore.

* @param i2 Lunghezza stringa, utilizzata per sapere quante volte ciclare la stessa procedura.
*/

void ritorno(int i2){
int dec; 
    for(int j=0;j<i2;j++){
        //Trasformazione numero in binario (7-Bit) in decimale.
        dec=(mat[0][j]*64)+(mat[1][j]*32)+(mat[2][j]*16)+(mat[3][j]*8)+(mat[4][j]*4)+(mat[5][j]*2)+(mat[6][j]*1);  
        textcolor(15);
        cout<<(char)dec; //Stampa del carattere corrispondente al valore decimale.
    }    
    cout<<endl;
}

/**

*Il processo tramite un ciclo e un'if conta gli zero, se quest'ultimi sono pari verrà assegnato 0 a una variabile.
*Nel caso in cui la nuova variabile sarà diversa da quella effettuata nel controllo all'inivio verrà restiuito l'errore come vero.

* @param i2 Indice corrispondente modificato tramite un ciclo all'interno del main.
* @return Indica se e' stato trovato un errore durante il controllo orizzontale nella ricezione e permetto al ciclo nel main di concludersi.
*/

bool orizzontalericezione(int i2){
     int u=0,u2;
     bool err=false;
     if(!err){
         for(int i=0;i<7;i++){ //Il ciclo inizia a scorrere i vari bit del numero binario.
             if(mat[i][i2]!=0) //Se il bit corrispondente e' diverso da zero...
                              u++; //Viene incrementato u.
         }   
         if(u%2==0) //Se gli uno contati sono pari...
                   u2=0; //u2 =0
         else
             u2=1; //Altrimenti u2=1
     }
     if(u2!=mat[7][i2]) //Se il valore prestabilito prima e' diverso da quello verificato durante l'invio.
                       return err=true; //L'errore sarà restiuito vero e quindi il ciclo all'interno del main s'interrompera'.
     else
         return err=false; //L'errore sarà restiuito falso e il ciclo all'interno del main continuerà a svolgere le sue operazioni.
}

/**

*Processo di controllo orizzonale uno pari all'inivio. 
*Il ciclo scorre e conta gli uno e se quest'ultimi sono pari verrà aggiunto il bit 0 a fine numero binario.

* @param i2 Indice corrispondente modificato tramite un ciclo all'interno del main.
*/

void checkorizzontale(int i2){
    int u=0;
    for(int i=0;i<7;i++){ //Il ciclo inizia a scorrere i vari bit del numero binario.
        if(mat[i][i2]!=0) //Se il bit corrispondente e' diverso da zero...
                         u++; //Viene incrementato u.
    }   
    if(u%2==0) //Se gli uno contati sono pari...
        mat[7][i2]=0; //u2 =0
    else
        mat[7][i2]=1; //Altrimenti u2=1
}

/**

*Processo molto simile a orizzontalericezione.
*Un ciclo e un'if contato gli uno, se sono pari verrà attribuita a una variabile il valore 0, se quest'ultimo 
*valore non combacia con il controllo verticale fatto all'invio verrà restiuito l'indice dell'errore.

* @param i2 Lunghezza stringa, utilizzata per sapere quante volte ciclare la stessa procedura.
* @return Valore dell'indice nella quale e' stato trovato l'errore.
/*/

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

/**

*Il checkverticale funziona alla stessa maniera di quello orizzonale.
*Un ciclo e un'if contato gli uno, se sono pari verrà attribuita a una variabile il valore 0, se quest'ultimo 
*valore non combacia con il controllo verticale fatto all'invio verrà restiuito l'indice dell'errore.

* @param i2 Lunghezza stringa, utilizzata per sapere quante volte ciclare la stessa procedura.
/*/

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

/**

*La procedura conversione ha il compito di trasformare ogni singolo carattere in binario.
*La trasformazione in binario viene effettuata dividendo prendendo il resto della divisione per 2
*e assegnarlo a una variabile e successivamente dividere il numero per 2. Questa procedura viene 
*gestita da un ciclo all'interno del main.

* @param i2 Lunghezza stringa, utilizzata per indicare l'indice della matrice.
* @param bin Ogni singolo carattere.

/*/

void conversione(char bin,int i2){
    int r,z=0;
    for(int i=6;i>-1;i--){
        r=bin%2;
        mat[i][i2]=r;
        bin=bin/2;
    }
}

/**

*Genera numeri random

* @param mod = modulo. Indica l'estremo del numero casuale da generare.
* @return r restituisce un numero casuale.

/*/
  
int casuale(int mod) {
    int r;
    r=rand()%mod;
    return r;
}   

/**

*Effettua la stampa della matrice. Cicla e stampa entrambe le coordinate della matrice x & y.
*Ogni riga viene ritrasformata in decimale e stampato il carattere corrispondente.

* @param i2 Dimensione delle prime coordinate della matrice.
* @param i3 Dimensione delle seconde coordinate della matrice.

/*/

void stampa(int i2,int i3){
    int dec;    
        for(int i=0;i<i2;i++){
            if(i<i2-1){
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

/**

*Effettua la stampa della matrice. Cicla e stampa entrambe le coordinate della matrice x & y.
*Ogni riga viene ritrasformata in decimale e stampato il carattere corrispondente.
*Differente dalle altre stampe, questa stampa viene utilizzata solo nella prima poichè
*la stampa non deve stampare le lettere nei controlli di parità.

* @param i2 Dimensione delle prime coordinate della matrice.
* @param i3 Dimensione delle seconde coordinate della matrice.

/*/

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

/**

*Main del software.

/*/

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
    
    textcolor(12);
    
    for(int i=0;i<i2;i++){  
            checkorizzontale(i); //Richiamo procedura checkorizzontale.
    }
    
    checkverticale(i2); //Richiamo parametro checkverticale.
    mat[7][i2]=0; //Viene aggiunto un bit nullo dell'incrocio dei due controlli.
     
    textcolor(12);
    cout<<"La matrice con controllo orizzontale e verticale e': \n\n";  
    
    stampa(i2+1,8); //Richiamo procedura stampa.
    
    int errore;
    errore=casuale(2); //Genera un numero casuale compreso tra uno e zero.
    textcolor(9);
    cout<<"Sistema ricevente.\n";
    if(errore==1){ //Se viene generato il numero 1 l'errore sarà presente.
        cout<<"\nE' stato trovato un errore durante il ricevimento del messaggio.\n";
        int j=casuale(6); //Viene generata casualmente la prima coordinata.
        int i=casuale(i2-1); //Viene generata casualmente la seconda coordinata.
       
        //Viene alterato il bit a seconda delle coordinate casuali generate in precedenza.
        if(mat[j][i]==0)
                mat[j][i]=1;
        else
                mat[j][i]=0;
                
        textcolor(12);
        cout<<"\nLa matrice ricevuta e' :\n\n"; 
        
        stampa(i2+1,8); //Richiamo procedura stampa.
        
        textcolor(12);
        cout<<"La parola ricevuta e' : ";
        
        ritorno(i2); //Richiamo procedura ritorno.
        
        bool err=false;
        int v;
        i=-1;
            
        do{
            i++;
            err=orizzontalericezione(i); //Richiamo procedura orizzontalericezione.     
        }while(err==false);
        
        v=i;
        
        textcolor(9);
        cout<<"\nSistema di correzione.\n";

        textcolor(12);
        cout<<"\nErrore trovato nella riga: "<<v+1<<endl;
        
        int o=verticalericezione(i2); //Richiamo procedura verticalericezione. 
        
        cout<<"\nErrore trovato nella colonna: "<<o+1<<endl<<endl;
        
        int dec;
        
        /**
        
        *Simile alla procedura di stampa. Si differenza poichè il programma deve evidenziare gli errori
        *tramite l'if ciclato.
          
        /*/
         
        for(int e=0;e<i2+1;e++){
            if(e<i2){
                textcolor(14);
                dec=(mat[0][e]*64)+(mat[1][e]*32)+(mat[2][e]*16)+(mat[3][e]*8)+(mat[4][e]*4)+(mat[5][e]*2)+(mat[6][e]*1);  
                cout<<(char)dec<<" ";
            }
            else
            cout<<"  ";
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
        stampa(i2+1,8); //Richiamo procedura  stampa. 
        
        textcolor(12);
        cout<<"La parola ricevuta e': ";
        ritorno(i2); //Richiamo procedura ritorno. 
        cout<<endl;
         
     }
    else
        cout<<"\nNon e' stato trovato alcun errore nel ricevimento del messaggio.\n";

textcolor(7);    
system("pause");
}
    
