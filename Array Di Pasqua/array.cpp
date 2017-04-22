#include <iostream>
using namespace std;

int array1[100],array2[100];
int dim;
int sez[100],uni[100],dif[100],dif2[100];

void caricamento();
void stampe();
void intersezione();
void unione();
void differenza();

void caricamento(){
    cout<<"Inserisci la dimensione dei vettori.\n";
    cin>>dim;
    cout<<"Carimanento primo vettore: \n";
    for(int i=0;i<dim;i++){
        cout<<"Inserisci il "<<i+1<<char(167)<<" elemento.\n";
        cin>>array1[i]; 
    }
    
    cout<<"Carimanento secondo vettore: \n";
    for(int i=0;i<dim;i++){
        cout<<"Inserisci il "<<i+1<<char(167)<<" elemento.\n";
        cin>>array2[i]; 
    }
}

void stampe(){
     cout<<"Primo vettore: ";
     for(int i=0;i<dim;i++){
             cout<<array1[i];
             if(i<dim-1){
                         cout<<" - ";
             }
             else{
                  cout<<endl;
             }
     }
     
     cout<<"Secondo vettore: ";
     for(int i=0;i<dim;i++){
             cout<<array2[i];
             if(i<dim-1){
                         cout<<" - ";
             }
             else{
                  cout<<endl;
             }
     }
}

void intersezione(){
    int c=0;
    for(int i=0;i<dim;i++){
            for(int j=0;j<dim;j++){
                    if(array1[i]==array2[j]){
                        sez[c]=array1[i];
                        c++;
                    }
            }
    }
    
    int t;
    for(int i=0;i<c-1;i++){
            for(int j=i+1;j<c;j++){
                    if(sez[i]>sez[j]){
                                      t=sez[i];
                                      sez[i]=sez[j];
                                      sez[j]=t;
                    }
            }
    }
    

    for(int i=0;i<c;i++){
        cout<<sez[i];
        if(i<c-1){
            cout<<" - ";
        }
        else{
            cout<<endl;
        }
    }
}

void unione(){
int c=0;
    for(int i=0;i<(dim*2);i++){
            if(i<dim){
                       uni[i]=array1[i];
            }
            else{
                 uni[i]=array2[c];
                 c++;
            }                 
    }
    
    int t;
    for(int i=0;i<((dim*2)-1);i++){
            for(int j=i+1;j<(dim*2);j++){
                    if(uni[i]>uni[j]){
                                      t=uni[i];
                                      uni[i]=uni[j];
                                      uni[j]=t;
                    }
            }
    }
                                      

    int k=0;
    for(int i=0;i<(dim*2);i++){
        if(uni[i]!=uni[i+1]){
        uni[k]=uni[i];
        k++;
        }
    }


    for(int i=0;i<k;i++){
        cout<<uni[i];
        if(i<k-1){
            cout<<" - ";
        }
        else{
            cout<<endl;
        }
    }      
}

void differenza(){
int c=0;

    for(int i=0;i<(dim*2);i++){
            if(i<dim){
                       dif[i]=array1[i];
            }
            else{
                 dif[i]=array2[c];
                 c++;
            }                 
    }


    int t;
    for(int i=0;i<((dim*2)-1);i++){
            for(int j=i+1;j<(dim*2);j++){
                    if(dif[i]>dif[j]){
                                      t=dif[i];
                                      dif[i]=dif[j];
                                      dif[j]=t;
                    }
            }
    }

    c=0;  
    int j=0;  
    for(int i=0;i<(dim*2);i++){	      
        for(int k=0;k<(dim*2);k++){	  	
            if(dif[k]==dif[i]){	      
                c++;
            }
        }
        if(c<2) {   	
            dif2[j]=dif[i];
            j++;
        }
        dif2[j]=dif[i];
        c=0;
    }
    
     for(int i=0;i<j;i++){
        cout<<dif2[i];
        if(i<j-1){
            cout<<" - ";
        }
        else{
            cout<<endl;
        }
    }          

    
}

int main(){
int opz;
do{
    system("CLS");
    cout<<"Scegli l'opzione: \n";
    cout<<" [1] Caricamento vettori.\n";
    cout<<" [2] Stampa vettori.\n";
    cout<<" [3] Crea e stampa vettore intersezione (Ordinato).\n";
    cout<<" [4] Crea e stampa vettore unione (Ordinato).\n";
    cout<<" [5] Crea e stampa vettore differenza (Ordinato).\n";
    cout<<" [0] Chiudi programma.\n";
    cin>>opz;
    
    switch(opz){
                
        case 1:
        caricamento();
        system("pause");
        break;
        
        case 2:
        stampe();
        system("pause");
        break;
        
        case 3:
        intersezione();
        system("pause");
        break;
        
        case 4:
        unione();
        system("pause");
        break;
        
        case 5:
        differenza();
        system("pause");
        break;
    
    }
}while(opz!=0);
}
