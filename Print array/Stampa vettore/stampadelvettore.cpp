#include <iostream>

using namespace std;
int main (){
    //dichiarazioni
    int vet[100],n,scelta,i,s,r,c,vs,f,j,cont;

    //menù
    do{
    system("CLS");   
    //visualizzazione delle opzioni
    cout<<" 1 Caricamento del vettore."<<endl;
    cout<<" 2 Stampa del vettore."<<endl;
    cout<<" 3 Somma di tutti gli elementi degli array."<<endl;
    cout<<" 4 Ricerca dei valori inseriti dall'utente."<<endl;
    cout<<" 5 Sostituzione dei valori."<<endl;
    cout<<" 6 Riconoscimento parziale dei valori."<<endl; 
    cout<<" 7 Ricerca totale con stampa di tutti gli indici."<<endl;
    cout<<" 0 Fine del processo."<<endl;
    cout<<" scegli l'opzione da aprire."<<endl;
    cin>>scelta;
    switch (scelta){
        case 1://caricamento dell'array
               cout<<"inserire quanti elementi caricare";
               cin>>n;
               for(i=0;i<n;i++){
               cin>>vet[i];
               }
               break;
        case 2://stampa del vettore
               cout<<"stampa del vettore";
               for(i=0;i<n;i++){
                   cout<<vet[i]<<endl;
               }    
               break;
               
        case 3://somma degli elementi del vettore
        s=0;
              for(i=0;i<n;i++){
                 s=s+vet[i];
              
              cout<<"la somma degli elementi del vettore e'"<<s<<endl;
              }    
              break;
              
        case 4://ricerca del valore
              cout<<"inserire il valore da ricercare"<<endl;
              cin>>r;
              
              c=0;
              for(i=0;i<n;i++){
                  
              if(vet[i]==r)   
              
              c++;      
              }
              cout<<"il valore e' stato trovato"<<r<<endl;
              break;
              
         case 5://sostituzione dei valori
         
         cout<<"inserire il valore da sostituire"<<endl;
         cin>>vs;
         cout<<"inserire il valore con il quale sostituirlo"<<endl;
         cin>>f;
         for (i=0;i<n;i++){
         if  (vet[i]==vs){
              vet[i]=f;
              }}            

              break;
              
          case 6://riconoscimento parziale dei valori    
      cout<<"inserisci il numero da ricercare ";
      cin>>c;
      j=0;
      while((j<n) && (c!=vet[j]))
            j++; 
        
      //controllo l'esito della ricerca (fuori dal ciclo)     
      if (c==vet[j])
         cout<<"elemento trovato in posizione "<<j<<endl;
      else              
         cout<<"elemento non trovato"<<endl;         

      break;    
      //Ricerca totale con stampa di tutti gli indici.
        case 7:
            cout<<"inserisci il numero da ricercare ";
      cin>>c;
      cont=0;
      for(j=0;j<n;j++){
          if(c==vet[j]){
              cont++;
              cout<<"trovato in posizione "<<j<<endl;
          }        
      }   
      //stampa esito della ricerca (fuori dal ciclo)         
      cout<<"il numero "<<c<<" e' stato trovato "<<cont<<" volte"<<endl;

            break;                        
}
system("pause");          
}
while(scelta!=0);//controlla l'uscita              
}



    
