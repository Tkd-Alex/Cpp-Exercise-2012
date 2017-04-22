#include <iostream>
using namespace std;
int main () {
 char r1, r2, r3, r4;
    int numero, resto, ra1, ra2, ra3,ra4;
    cout <<"Inserisci il numero decimale da convertire in esadecimale"<<endl;
    cin>> numero;
    //Prima cifra
    resto= numero%16;
    numero/=16;
   //Primo numero
     if((resto>9)&&(resto==10)){
        r1='A';
    }
    else{
        ra1=resto;
        r1='Z';  
    }
    //end if
        if(r1=='A'){}
        else{
     if((resto>9)&&(resto==11)){
        r1='B';
    }
    else{
        ra1=resto;
        r1='Z';  
    }}  
    //end if
       if((r1=='B')||(r1=='A')){}
        else{
     if((resto>9)&&(resto==12)){
        r1='C';
    }
    else{
        ra1=resto;
        r1='Z';  
    }}  
     //end if
       if((r1=='B')||(r1=='A')||(r1=='C')){}
        else{
     if((resto>9)&&(resto==13)){
        r1='D';
    }
    else{
        ra1=resto;
        r1='Z';  
    }}  
     //end if
       if((r1=='D')||(r1=='B')||(r1=='A')||(r1=='C')){}
        else{
     if((resto>9)&&(resto==14)){
        r1='E';
    }
    else{
        ra1=resto;
        r1='Z';  
    }}  
     //end if
        if((r1=='D')||(r1=='B')||(r1=='A')||(r1=='C')||(r1=='E')){}
        else{
     if((resto>9)&&(resto==15)){
        r1='F';
    }
    else{
        ra1=resto;
        r1='Z';  
    }}  
    //end if
    //Seconda cifra
    resto= numero%16;
    numero/=16;
    //Secondo numero
      if((resto>9)&&(resto==10)){
        r2='A';
    }
    else{
        ra2=resto;
        r2='Z';  
    }
    //end if
        if(r2=='A'){}
        else{
     if((resto>9)&&(resto==11)){
        r2='B';
    }
    else{
        ra2=resto;
        r2='Z';  
    }}  
    //end if
       if((r2=='B')||(r2=='A')){}
        else{
     if((resto>9)&&(resto==12)){
        r2='C';
    }
    else{
        ra2=resto;
        r2='Z';  
    }}  
     //end if
       if((r2=='B')||(r2=='A')||(r2=='C')){}
        else{
     if((resto>9)&&(resto==13)){
        r2='D';
    }
    else{
        ra2=resto;
        r2='Z';  
    }}  
     //end if
       if((r2=='D')||(r2=='B')||(r2=='A')||(r2=='C')){}
        else{
     if((resto>9)&&(resto==14)){
        r2='E';
    }
    else{
        ra2=resto;
        r2='Z';  
    }}  
     //end if
        if((r2=='D')||(r2=='B')||(r2=='A')||(r2=='C')||(r2=='E')){}
        else{
     if((resto>9)&&(resto==15)){
        r2='F';
    }
    else{
        ra2=resto;
        r2='Z';  
    }}  
    //end if
    //Terza cifra
    resto= numero%16;
    numero/=16;
    //Terzo numero
      if((resto>9)&&(resto==10)){
        r3='A';
    }
    else{
        ra3=resto;
        r3='Z';  
    }
    //end if
        if(r3=='A'){}
        else{
     if((resto>9)&&(resto==11)){
        r3='B';
    }
    else{
        ra3=resto;
        r3='Z';  
    }}  
    //end if
       if((r3=='B')||(r3=='A')){}
        else{
     if((resto>9)&&(resto==12)){
        r3='C';
    }
    else{
        ra3=resto;
        r3='Z';  
    }}  
     //end if
       if((r3=='B')||(r3=='A')||(r3=='C')){}
        else{
     if((resto>9)&&(resto==13)){
        r3='D';
    }
    else{
        ra3=resto;
        r3='Z';  
    }}  
     //end if
       if((r3=='D')||(r3=='B')||(r3=='A')||(r3=='C')){}
        else{
     if((resto>9)&&(resto==14)){
        r3='E';
    }
    else{
        ra3=resto;
        r3='Z';  
    }}  
     //end if
        if((r3=='D')||(r3=='B')||(r3=='A')||(r3=='C')||(r3=='E')){}
        else{
     if((resto>9)&&(resto==15)){
        r3='F';
    }
    else{
        ra3=resto;
        r3='Z';  
    }}  
    //end if
     //Quarta cifra
    resto= numero%16;
    numero/=16;
    //Quarto numero
      if((resto>9)&&(resto==10)){
        r4='A';
    }
    else{
        ra4=resto;
        r4='Z';  
    }
    //end if
        if(r4=='A'){}
        else{
     if((resto>9)&&(resto==11)){
        r4='B';
    }
    else{
        ra4=resto;
        r4='Z';  
    }}  
    //end if
       if((r4=='B')||(r4=='A')){}
        else{
     if((resto>9)&&(resto==12)){
        r4='C';
    }
    else{
        ra4=resto;
        r4='Z';  
    }}  
     //end if
       if((r4=='B')||(r4=='A')||(r4=='C')){}
        else{
     if((resto>9)&&(resto==13)){
        r4='D';
    }
    else{
        ra4=resto;
        r4='Z';  
    }}  
     //end if
       if((r4=='D')||(r4=='B')||(r4=='A')||(r4=='C')){}
        else{
     if((resto>9)&&(resto==14)){
        r4='E';
    }
    else{
        ra4=resto;
        r4='Z';  
    }}  
     //end if
        if((r4=='D')||(r4=='B')||(r4=='A')||(r4=='C')||(r4=='E')){}
        else{
     if((resto>9)&&(resto==15)){
        r4='F';
    }
    else{
        ra4=resto;
        r4='Z';  
    }}  
    //end if
    ///Output
    cout<<"Il numero convertito in esadecimale e': ";
      if(r4=='Z')
    cout<<ra4;
    else
    cout<<r4;
     if(r3=='Z')
    cout<<ra3;
    else
    cout<<r3;
     if(r2=='Z')
    cout<<ra2;
    else
    cout<<r2;
    if(r1=='Z')
    cout<<ra1<<endl;
    else
    cout<<r1<<endl;
    system("pause");
} 
        
  
