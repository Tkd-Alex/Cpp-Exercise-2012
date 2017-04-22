#include <iostream>
using namespace std;
int main (){
    float nu,dec;
    int bi,i,nu2,c,vet[100],espo[100],s,m;
    cout<<"Inserisci il numero decimale da convertire in binario.\n";
    cin>>nu;
    //Parte intera binaria.
    
    //Inizializzo il segno a 0 utilizzato come valore positivo.
    s=0;  
    
    //Prende e copia la parte intera nel numero float inserito.
    bi=(int)nu;
    nu2=(int)nu;
    
     //Verfica se il numero è negativo o positivio.
    if(bi<=0){
    bi*=-1;
    nu2*=-1;
    nu*=-1;  //Se negativo trasforma il numero in positivo.
    s=1; //Se negavito assegna a s il valore di uno.
    }  
    
    c=0; //Inizializzazione c contatore.
    
    //Tramite delle divisioni vediamo quanto deve essere grande il vettore.
    if(nu2==0){ //Se la parte intera e' 0 la cifra sarà una e non verranno eseguite divisioni
    c=1;
    }
    else{    
        while(nu2!=0){
            c++;
            nu2=nu2/10; //Diviamo per 10 e incrementiamo di uno per contare le cifre.
        }
     }     
    
    //Carichiamo il vettore e stampiamo il risultato provvisorio al contrario.

    nu2=(int)nu;
    
    if(nu2==0){ //Se la parte intera e' 0 viene assegnato all'indice 0 del vettore 
                //il valore 0 e successivamente stampato.
    vet[0]=0;
    }
    else{    
        for(i=0;i<c;i++){
            while(bi!=0){             
                vet[i]=bi%2; //Caricamento dei resti vettore.
                i++;
                bi/=2;
            }
        } 
   }          
    
     //Stampiamo il vettore andando a ritroso.
     cout<<"Parte intera\n";
    
    if(nu2==0) //Se la parte intera e' 0 l'indice del vettore sarà 0.
    i=0;
    else
    i-=2; //Dimiuiamo di 2 il valore di i, poichè il il vettore conta il primo indice (-1)
           //come zero e abbiamo dal precendente ciclo un valore in più (-1).
     
     c=i; //Ricopiamo il valore di i trascivendo il valore precendente.
          
          
          //Ciclo per stampare il resti nell'ordine corretto.
          while(i!=-1){
              cout<<vet[i];
              i-=1;
          }
     
     //Parte decimale binaria OK!
     
     cout<<"\nParte decimale\n";
     
     //Riprendiamo la parte intera precendemente divisa per ottenere il numero binario.
     bi=(int)nu;
     //Tramite una sottrazione preleviamo la parte decimale.
     dec=(nu-bi);
      if(nu2==0)
     dec*=-1;
     //Il ciclo moltiplica per due la parte decimale per ottenere il numero decimale in binario.
          while(i<5){
                  dec*=2;
                  cout<<(int)dec;
                  i++;
                  //Non appena viene incontrato il valore di uno 
                  //viene effettuata nuovamente la sottrazione.
                          if((int)dec==1){
                          dec=dec-(int)dec;
                          }    
          }
        cout<<endl;
    cout<<"Numero intero\n";
    i=c;
    while(i!=-1){
              cout<<vet[i];
              i-=1;
          }
    cout<<".";
    //Riprendiamo la parte intera precendemente divisa per ottenere il numero binario.
     bi=(int)nu;
     //Tramite una sottrazione preleviamo la parte decimale.
     dec=(nu-bi);
      if(nu2==0)
     dec*=-1;
     //Il ciclo moltiplica per due la parte decimale per ottenere il numero decimale in binario.
          while(i<5){
                  dec*=2;
                  cout<<(int)dec;
                  i++;
                  //Non appena viene incontrato il valore di uno 
                  //viene effettuata nuovamente la sottrazione.
                          if((int)dec==1){
                          dec=dec-(int)dec;
                          }    
          }
    //Stampa del segno individuato all'inizio.
    cout<<"\nSegno\n"<<s<<endl;
     
    //Calcolo degli zero necessari per arrivare a 23.  
    //Diamo alla mantissa il valore di 23 meno le cifre 
    //che compongono sia la parte intera che decimale.
    m=23-(c+6);
    //Assegnamo il numero di cifre della parte intera a s per poi calcolare la mantissa
    s=c;
    //Aggiugiamo 127 all'espontente. Abbiamo utilizzato la precisione singola.
    cout<<"Esponente in valore decimale\n"<<c;
    c+=127;
    cout<<"\nAggiungiamo la constante di Bias\n"<<c;
    cout<<"\nEsponente convertito in valore binario\n";
      
    //Trasformazione dell'esponente in binario.  
      for(i=0;i<c;i++){
            while(c!=0){             
                espo[i]=c%2;
                i++;
                c/=2;
            }
        } 
        
    i-=2; //Dimiuiamo di 2 il valore di i, poichè il il vettore conta il primo indice (-1)
           //come zero e abbiamo dal precendente ciclo un valore in più (-1).
           
      //Stampa del vettore     
          while(i!=-1){
              cout<<espo[i];
              i-=1;
          } 
    
    
   cout<<"\nZero da aggiungere alla  mantissa\n"<<m;
   cout<<"\nMantissa \n";
   
   //Calcolo della mantissa. Inizialmente viene stampato il vettore ovvero la parte 
   //intera binaria senza stampare il primo uno.
     s-=1;
    while(s>-1){
    cout<<vet[s];
    s-=1;
    }    
   
   //Riprendiamo la parte intera precendemente divisa per ottenere il numero binario.
     bi=(int)nu;
   //Tramite una sottrazione preleviamo la parte decimale.
     dec=(nu-bi);
     if(nu2==0)
     dec*=-1;
   //Il ciclo moltiplica per due la parte decimale per ottenere il numero decimale in binario.
          while(i<5){
                  dec*=2;
                  cout<<(int)dec;
                  i++;
                  //Non appena viene incontrato il valore di uno 
                  //viene effettuata nuovamente la sottrazione.
                          if((int)dec==1){
                          dec=dec-(int)dec;
                          }    
          }
   //Il ciclo aggiunge gli zeri mancanti calcolati prima.
    while(m>0){
        cout<<"0";
        m-=1;
    }    
    
    cout<<endl;
    system("pause");}    
