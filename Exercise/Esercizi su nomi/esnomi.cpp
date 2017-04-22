#include <iostream>
#include <conio.c>
using namespace std;
int main () {
char nome[100],ricerca;
int scelta,n,i,j;
system("color 4E");
//menù
    do{    
    clrscr();     
    //visualizzazione delle opzioni
    cout<<" [1] Caricamento del vettore."<<endl;
    cout<<" [2] Stampa del vettore."<<endl;
    cout<<" [3] Ricerca di un carattere."<<endl;
    cout<<" [4] Ordinamento delle lettere in ordine alfabetico."<<endl;
    cout<<" [5] Ordinamento del nome e cognome a specchio."<<endl;
    cout<<" [6] Ordinamento nome e cognome a specchio."<<endl;
    cout<<" [7] Stampa del numero di vocali."<<endl;
    cout<<" [8] Ordinamento delle lettere in ordine alfabetico inverso."<<endl;
    cout<<" [9] Quante volte la lettere precede la successiva."<<endl;
    cout<<" [0] Fine del processo."<<endl;
    cout<<"\nScegli l'opzione da aprire."<<endl;
    cin>>scelta;
    switch (scelta){
        case 1://Caricamento dell'array.
               cout<<"Inserire quanti elementi caricare\n";
               cin>>n;
               for(i=0;i<n;i++){
               cin>>nome[i];
               }
               system("pause");
               break;
        case 2://Stampa del vettore.
               cout<<"Stampa del vettore\n";
               for(i=0;i<n;i++){
                   cout<<nome[i];
               }
               cout<<endl;
               system("pause");
               break;
        case 3://Ricerca di un carattere.
        /*//
               cout<<"Inserire il carattere da ricercare\n";
               cin>>ricerca;
               for(i=0;i<n;i++)  
               if(nome[i]==ricerca){
               cout<<"Il carattere "<<ricerca<< " e' stato trovato in posizione "<<i<<endl;
               i=n;
               }    
        */ 
     cout<<"Inserire il carattere da ricercare\n";
     cin>>ricerca;
      j=0;
      while((j<n)&&(ricerca!=nome[j]))
            j++;
            if (ricerca==nome[j])
         cout<<"Il carattere "<<ricerca<< " e' stato trovato in posizione "<<j<<endl;
      else              
         cout<<"Carattere non trovato."<<endl;         

        system("pause");
               break;
        case 4://Ordinamento delle lettere in ordine alfabetico.
        
        for(i=0;i<n;i++)
        for(j=i+1;j<n;j++){
            if(nome[i]>nome[j]){
        ricerca=nome[i];
        nome[i]=nome[j];
        nome[j]=ricerca;}
        }       
  cout<<"Ordinamento in ordine alfabetico effettuato con successo!\n";
        system("pause");
        break;
        
        
        case 5://Ordinamento a specchio  
        for(i=0;i<n;i++)
        for(j=i+1;j<n;j++){
        ricerca=nome[i];
        nome[i]=nome[j];
        nome[j]=ricerca;} 
          cout<<"Ordinamento a specchio effettuato con successo!\n";
        system("pause");    
        break;
        
        
        case 6://Stampa del numero di vocali
        j=0;
        for(i=0;i<n;i++){
        if((nome[i]=='a')||(nome[i]=='e')||(nome[i]=='i')||(nome[i]=='o')||(nome[i]=='u')){
            j++;}}
        cout<<"Le vocali sono "<<j<<endl;
        system("pause");
        break;
        
        case 7://Ordinamento delle lettere in ordine alfabetico inverso. 
        for(i=0;i<n;i++)
        for(j=i+1;j<n;j++){
            if(nome[i]<nome[j]){
        ricerca=nome[i];
        nome[i]=nome[j];
        nome[j]=ricerca;}
        }       
  cout<<"Ordinamento in ordine alfabetico inverso effettuato con successo!\n";
        system("pause");
        break;
        
        case 8://Stampa ordine alfabetico inverso
        for(i=0;i<n;i++)
        cout<<nome[i]<<" - ";
        cout<<endl;   
        system("pause");
        break;
        
        case 9://Precedente e successivo
        j=0;
        for(i=0;i<n;i++)
        if(nome[i]<nome[i+1])
        j++;
        cout<<"I caratteri vengono preceduti dal sucessivo per "<<j<<" volte.\n";
        system("pause");
        }    
   }while(scelta!=0);//Controlla l'uscita    
}   
