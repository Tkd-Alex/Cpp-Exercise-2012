//Convertito da base x a base y - Maggio Alessandro

#include <iostream>
using namespace std;
int main(){
    char exit;
    int basex,basey;
    do{
    system("CLS");
    cout<<"Benvenuti nel convertitore universale. \n" "-------------------------------------- \n";
    cout<<"Inserisci la prima base\n";
    cin>>basex;
    cout<<"Inserisci la seconda base\n";
    cin>>basey;
    if((basex==2)||(basey==2)||(basex==10)||(basey==10)||(basex==16)||(basey==16)){
    }
    else{
    cout<<"Il software non permette questa conversione."<<endl;}  
    if(basex==basey)
    cout<<"Il software non permette questa conversione."<<endl;  
    if((basex==2)&&(basey==10)){
        int b1, b2, b3, b4, b5, b6, b7, b8, decimale;
        cout<<endl<<"------------------------------------------------\n";
        cout<<"Hai scelto la conversione da binario a decimale!"<<endl;
        cout<<"------------------------------------------------\n"<<endl;
        cout<<"Inserisci un numero binario a 8-bit."<<endl;
        cout<<endl<<"Inserisci il primo-bit."<<endl;
        cin>>b1;
        cout<<"Inserisci il secondo-bit."<<endl;
        cin>>b2;
        cout<<"Inserisci il terzo-bit."<<endl;
        cin>>b3;
        cout<<"Inserisci il quarto-bit."<<endl;
        cin>>b4;
        cout<<"Inserisci il quinto-bit."<<endl;
        cin>>b5;
        cout<<"Inserisci il sesto-bit."<<endl;
        cin>>b6;
        cout<<"Inserisci il settimo-bit."<<endl;
        cin>>b7;
        cout<<"Inserisci l' ottavo-bit."<<endl;
        cin>>b8;
        decimale=(b1*128)+(b2*64)+(b3*32)+(b4*16)+(b5*8)+(b6*4)+(b7*2)+(b8*1);
        cout<<endl<<"Il numero binario " <<b1<<b2<<b3<<b4<<b5<<b6<<b7<<b8 <<" equivale a " <<decimale<<endl;
    }   
    if((basex==10)&&(basey==2)){
    int b1, b2, b3, b4, b5, b6, b7, b8, numero, resto;
     cout<<endl<<"------------------------------------------------\n";
     cout<<"Hai scelto la conversione da decimale a binario!"<<endl;
     cout<<"------------------------------------------------\n"<<endl;
    cout<<"Inserisci il numero decinamale compreso tra 0 e 255 da convertire in binario."<<endl;
    cin>>numero;
    resto=numero%2;
    b1 = resto;
    numero = numero/2;
    resto=numero%2;
    b2 = resto;
    numero = numero/2;
    resto=numero%2;
    b3 = resto;
    numero = numero/2;
    resto=numero%2;
    b4 = resto;
    numero = numero/2;
    resto=numero%2;
    b5 = resto;
    numero = numero/2;
    resto=numero%2;
    b6 = resto;
    numero = numero/2;
    resto=numero%2;
    b7 = resto;
    numero = numero/2;
    resto=numero%2;
    b8 = resto;
    numero = numero/2;
    cout<<"Il numero in codice binario e' " <<b8<<b7<<b6<<b5<<b4<<b3<<b2<<b1<<endl;
    }    
    if((basex==2)&&(basey==16)){
      int c1,c2,c3,c4,c5,c6,c7,c8;
//  da binario a esadecimale
cout<<endl<<"--------------------------------------------------\n";
cout<<"Hai scelto la conversione da binario a esadecimale!"<<endl;
cout<<"--------------------------------------------------\n"<<endl;
cout<<"Inserire le cifre composte da 4 bit.\n\n       Nel caso non ci sia la cifra richiesta, inserire il numero 2\n"<<endl;
cout<<"Inserisci la prima cifra"<<endl;
cin>>c1;
cout<<"Inserisci la seconda cifra"<<endl;
cin>>c2;
cout<<"Inserisci la terza cifra"<<endl;
cin>>c3;
cout<<"Inserisci la quarta cifra"<<endl;
cin>>c4;
cout<<"Inserisci la quinta cifra"<<endl;
cin>>c5;
cout<<"Inserisci la sesta cifra"<<endl;
cin>>c6;
cout<<"Inserisci la settima cifra"<<endl;
cin>>c7;
cout<<"Inserisci l'ottava cifra"<<endl;
cin>>c8;
//1111111111
if (c1==2)
cout<<endl<<"";
if (c1==0)
cout<<endl<<"0 ";
if (c1==1)
cout<<endl<<"1 ";
if (c1==10)
cout<<endl<<"2 ";
if (c1==11)
cout<<endl<<"3 ";
if (c1==100)
cout<<endl<<"4 ";
if (c1==101)
cout<<endl<<"5 ";
if (c1==110)
cout<<endl<<"6 ";
if (c1==111)
cout<<endl<<"7 ";
if (c1==1000)
cout<<endl<<"8 ";
if (c1==1001)
cout<<endl<<"9 ";
if (c1==1010)
cout<<endl<<"A ";
if (c1==1011)
cout<<endl<<"B ";
if (c1==1100)
cout<<endl<<"C ";
if (c1==1101)
cout<<endl<<"D ";
if (c1==1110)
cout<<endl<<"E ";
if (c1==1111)
cout<<endl<<"F ";
//2222222222
if (c2==2)
cout<<"";
if (c2==0)
cout<<"0 ";
if (c2==1)
cout<<"1 ";
if (c2==10)
cout<<"2 ";
if (c2==11)
cout<<"3 ";
if (c2==100)
cout<<"4 ";
if (c2==101)
cout<<"5 ";
if (c2==110)
cout<<"6 ";
if (c2==111)
cout<<"7 ";
if (c2==1000)
cout<<"8 ";
if (c2==1001)
cout<<"9 ";
if (c2==1010)
cout<<"A ";
if (c2==1011)
cout<<"B ";
if (c2==1100)
cout<<"C ";
if (c2==1101)
cout<<"D ";
if (c2==1110)
cout<<"E ";
if (c2==1111)
cout<<"F ";
//3333333333
if (c3==2)
cout<<"";
if (c3==0)
cout<<"0 ";
if (c3==1)
cout<<"1 ";
if (c3==10)
cout<<"2 ";
if (c3==11)
cout<<"3 ";
if (c3==100)
cout<<"4 ";
if (c3==101)
cout<<"5 ";
if (c3==110)
cout<<"6 ";
if (c3==111)
cout<<"7 ";
if (c3==1000)
cout<<"8 ";
if (c3==1001)
cout<<"9 ";
if (c3==1010)
cout<<"A ";
if (c3==1011)
cout<<"B ";
if (c3==1100)
cout<<"C ";
if (c3==1101)
cout<<"D ";
if (c3==1110)
cout<<"E ";
if (c3==1111)
cout<<"F ";
//4444444444
if (c4==2)
cout<<"";
if (c4==0)
cout<<"0 ";
if (c4==1)
cout<<"1 ";
if (c4==10)
cout<<"2 ";
if (c4==11)
cout<<"3 ";
if (c4==100)
cout<<"4 ";
if (c4==101)
cout<<"5 ";
if (c4==110)
cout<<"6 ";
if (c4==111)
cout<<"7 ";
if (c4==1000)
cout<<"8 ";
if (c4==1001)
cout<<"9 ";
if (c4==1010)
cout<<"A ";
if (c4==1011)
cout<<"B ";
if (c4==1100)
cout<<"C ";
if (c4==1101)
cout<<"D ";
if (c4==1110)
cout<<"E ";
if (c4==1111)
cout<<"F ";
//5555555555
if (c5==2)
cout<<"";
if (c5==0)
cout<<"0 ";
if (c5==1)
cout<<"1 ";
if (c5==10)
cout<<"2 ";
if (c5==11)
cout<<"3 ";
if (c5==100)
cout<<"4 ";
if (c5==101)
cout<<"5 ";
if (c5==110)
cout<<"6 ";
if (c5==111)
cout<<"7 ";
if (c5==1000)
cout<<"8 ";
if (c5==1001)
cout<<"9 ";
if (c5==1010)
cout<<"A ";
if (c5==1011)
cout<<"B ";
if (c5==1100)
cout<<"C ";
if (c5==1101)
cout<<"D ";
if (c5==1110)
cout<<"E ";
if (c5==1111)
cout<<"F ";
//6666666666
if (c6==2)
cout<<"";
if (c6==0)
cout<<"0 ";
if (c6==1)
cout<<"1 ";
if (c6==10)
cout<<"2 ";
if (c6==11)
cout<<"3 ";
if (c6==100)
cout<<"4 ";
if (c6==101)
cout<<"5 ";
if (c6==110)
cout<<"6 ";
if (c6==111)
cout<<"7 ";
if (c6==1000)
cout<<"8 ";
if (c6==1001)
cout<<"9 ";
if (c6==1010)
cout<<"A ";
if (c6==1011)
cout<<"B ";
if (c6==1100)
cout<<"C ";
if (c6==1101)
cout<<"D ";
if (c6==1110)
cout<<"E ";
if (c6==1111)
cout<<"F ";
//7777777777
if (c7==2)
cout<<"";
if (c7==0)
cout<<"0 ";
if (c7==1)
cout<<"1 ";
if (c7==10)
cout<<"2 ";
if (c7==11)
cout<<"3 ";
if (c7==100)
cout<<"4 ";
if (c7==101)
cout<<"5 ";
if (c7==110)
cout<<"6 ";
if (c7==111)
cout<<"7 ";
if (c7==1000)
cout<<"8 ";
if (c7==1001)
cout<<"9 ";
if (c7==1010)
cout<<"A ";
if (c7==1011)
cout<<"B ";
if (c7==1100)
cout<<"C ";
if (c7==1101)
cout<<"D ";
if (c7==1110)
cout<<"E ";
if (c7==1111)
cout<<"F ";
//8888888888
if (c8==2)
cout<<"";
if (c8==0)
cout<<"0 ";
if (c8==1)
cout<<"1 ";
if (c8==10)
cout<<"2 ";
if (c8==11)
cout<<"3 ";
if (c8==100)
cout<<"4 ";
if (c8==101)
cout<<"5 ";
if (c8==110)
cout<<"6 ";
if (c8==111)
cout<<"7 ";
if (c8==1000)
cout<<"8 ";
if (c8==1001)
cout<<"9 ";
if (c8==1010)
cout<<"A ";
if (c8==1011)
cout<<"B ";
if (c8==1100)
cout<<"C ";
if (c8==1101)
cout<<"D ";
if (c8==1110)
cout<<"E ";
if (c8==1111)
cout<<"F ";
cout<<"e' il numero esadecimale corrispondente. "<<endl;
}    
    if((basex==10)&&(basey==16)){
        char r1, r2, r3, r4;
       int numero, resto, ra1, ra2, ra3,ra4;
      cout<<endl<<"----------------------------------------------------\n";
cout<<"Hai scelto la conversione da decimale a esadecimale!"<<endl;
cout<<"----------------------------------------------------\n"<<endl;
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
        }
    if((basex==16)&&(basey==2)){
    char c1,c2,c3,c4,c5,c6,c7,c8;
//  da esadecimale a binario
cout<<endl<<"---------------------------------------------------\n";
cout<<"Hai scelto la conversione da esadecimale a binario!"<<endl;
cout<<"---------------------------------------------------\n"<<endl;
cout<<"       Nel caso non ci sia la cifra richiesta, inserire la lettera n\n"<<endl;
cout<<"Inserisci la prima cifra"<<endl;
cin>>c1;
cout<<"Inserisci la seconda cifra"<<endl;
cin>>c2;
cout<<"Inserisci la terza cifra"<<endl;
cin>>c3;
cout<<"Inserisci la quarta cifra"<<endl;
cin>>c4;
cout<<"Inserisci la quinta cifra"<<endl;
cin>>c5;
cout<<"Inserisci la sesta cifra"<<endl;
cin>>c6;
cout<<"Inserisci la settima cifra"<<endl;
cin>>c7;
cout<<"Inserisci l'ottava cifra"<<endl;
cin>>c8;
//1111111111
if (c1=='n')
cout<<endl<<"";
if (c1=='0')
cout<<endl<<"0000 ";
if (c1=='1')
cout<<endl<<"0001 ";
if (c1=='2')
cout<<endl<<"0010 ";
if (c1=='3')
cout<<endl<<"0011 ";
if (c1=='4')
cout<<endl<<"0100 ";
if (c1=='5')
cout<<endl<<"0101 ";
if (c1=='6')
cout<<endl<<"0110 ";
if (c1=='7')
cout<<endl<<"0111 ";
if (c1=='8')
cout<<endl<<"1000 ";
if (c1=='9')
cout<<endl<<"1001 ";
if ((c1=='a')||(c1=='A'))
cout<<endl<<"1010 ";
if ((c1=='b')||(c1=='B'))
cout<<endl<<"1011 ";
if ((c1=='c')||(c1=='C'))
cout<<endl<<"1100 ";
if ((c1=='d')||(c1=='D'))
cout<<endl<<"1101 ";
if ((c1=='e')||(c1=='E'))
cout<<endl<<"1110 ";
if ((c1=='f')||(c1=='F'))
cout<<endl<<"1111 ";
//2222222222
if (c2=='n')
cout<<"";
if (c2=='0')
cout<<"0000 ";
if (c2=='1')
cout<<"0001 ";
if (c2=='2')
cout<<"0010 ";
if (c2=='3')
cout<<"0011 ";
if (c2=='4')
cout<<"0100 ";
if (c2=='5')
cout<<"0101 ";
if (c2=='6')
cout<<"0110 ";
if (c2=='7')
cout<<"0111 ";
if (c2=='8')
cout<<"1000 ";
if (c2=='9')
cout<<"1001 ";
if ((c2=='a')||(c2=='A'))
cout<<"1010 ";
if ((c2=='b')||(c2=='B'))
cout<<"1011 ";
if ((c2=='c')||(c2=='C'))
cout<<"1100 ";
if ((c2=='d')||(c2=='D'))
cout<<"1101 ";
if ((c2=='e')||(c2=='E'))
cout<<"1110 ";
if ((c2=='f')||(c2=='F'))
cout<<"1111 ";
//3333333333
if (c3=='n')
cout<<"";
if (c3=='0')
cout<<"0000 ";
if (c3=='1')
cout<<"0001 ";
if (c3=='2')
cout<<"0010 ";
if (c3=='3')
cout<<"0011 ";
if (c3=='4')
cout<<"0100 ";
if (c3=='5')
cout<<"0101 ";
if (c3=='6')
cout<<"0110 ";
if (c3=='7')
cout<<"0111 ";
if (c3=='8')
cout<<"1000 ";
if (c3=='9')
cout<<"1001 ";
if ((c3=='a')||(c3=='A'))
cout<<"1010 ";
if ((c3=='b')||(c3=='B'))
cout<<"1011 ";
if ((c3=='c')||(c3=='C'))
cout<<"1100 ";
if ((c3=='d')||(c3=='D'))
cout<<"1101 ";
if ((c3=='e')||(c3=='E'))
cout<<"1110 ";
if ((c3=='f')||(c3=='F'))
cout<<"1111 ";
//4444444444
if (c4=='n')
cout<<"";
if (c4=='0')
cout<<"0000 ";
if (c4=='1')
cout<<"0001 ";
if (c4=='2')
cout<<"0010 ";
if (c4=='3')
cout<<"0011 ";
if (c4=='4')
cout<<"0100 ";
if (c4=='5')
cout<<"0101 ";
if (c4=='6')
cout<<"0110 ";
if (c4=='7')
cout<<"0111 ";
if (c4=='8')
cout<<"1000 ";
if (c4=='9')
cout<<"1001 ";
if ((c4=='a')||(c4=='A'))
cout<<"1010 ";
if ((c4=='b')||(c4=='B'))
cout<<"1011 ";
if ((c4=='c')||(c4=='C'))
cout<<"1100 ";
if ((c4=='d')||(c4=='D'))
cout<<"1101 ";
if ((c4=='e')||(c4=='E'))
cout<<"1110 ";
if ((c4=='f')||(c4=='F'))
cout<<"1111 ";
//5555555555
if (c5=='n')
cout<<"";
if (c5=='0')
cout<<"0000 ";
if (c5=='1')
cout<<"0001 ";
if (c5=='2')
cout<<"0010 ";
if (c5=='3')
cout<<"0011 ";
if (c5=='4')
cout<<"0100 ";
if (c5=='5')
cout<<"0101 ";
if (c5=='6')
cout<<"0110 ";
if (c5=='7')
cout<<"0111 ";
if (c5=='8')
cout<<"1000 ";
if (c5=='9')
cout<<"1001 ";
if ((c5=='a')||(c5=='A'))
cout<<"1010 ";
if ((c5=='b')||(c5=='B'))
cout<<"1011 ";
if ((c5=='c')||(c5=='C'))
cout<<"1100 ";
if ((c5=='d')||(c5=='D'))
cout<<"1101 ";
if ((c5=='e')||(c5=='E'))
cout<<"1110 ";
if ((c5=='f')||(c5=='F'))
cout<<"1111 ";
//6666666666
if (c6=='n')
cout<<"";
if (c6=='0')
cout<<"0000 ";
if (c6=='1')
cout<<"0001 ";
if (c6=='2')
cout<<"0010 ";
if (c6=='3')
cout<<"0011 ";
if (c6=='4')
cout<<"0100 ";
if (c6=='5')
cout<<"0101 ";
if (c6=='6')
cout<<"0110 ";
if (c6=='7')
cout<<"0111 ";
if (c6=='8')
cout<<"1000 ";
if (c6=='9')
cout<<"1001 ";
if ((c6=='a')||(c6=='A'))
cout<<"1010 ";
if ((c6=='b')||(c6=='B'))
cout<<"1011 ";
if ((c6=='c')||(c6=='C'))
cout<<"1100 ";
if ((c6=='d')||(c6=='D'))
cout<<"1101 ";
if ((c6=='e')||(c6=='E'))
cout<<"1110 ";
if ((c6=='f')||(c6=='F'))
cout<<"1111 ";
//777777777
if (c7=='n')
cout<<"";
if (c7=='0')
cout<<"0000 ";
if (c7=='1')
cout<<"0001 ";
if (c7=='2')
cout<<"0010 ";
if (c7=='3')
cout<<"0011 ";
if (c7=='4')
cout<<"0100 ";
if (c7=='5')
cout<<"0101 ";
if (c7=='6')
cout<<"0110 ";
if (c7=='7')
cout<<"0111 ";
if (c7=='8')
cout<<"1000 ";
if (c7=='9')
cout<<"1001 ";
if ((c7=='a')||(c7=='A'))
cout<<"1010 ";
if ((c7=='b')||(c7=='B'))
cout<<"1011 ";
if ((c7=='c')||(c7=='C'))
cout<<"1100 ";
if ((c7=='d')||(c7=='D'))
cout<<"1101 ";
if ((c7=='e')||(c7=='E'))
cout<<"1110 ";
if ((c7=='f')||(c7=='F'))
cout<<"1111 ";
//8888888888
if (c8=='n')
cout<<"";
if (c8=='0')
cout<<"0000 ";
if (c8=='1')
cout<<"0001 ";
if (c8=='2')
cout<<"0010 ";
if (c8=='3')
cout<<"0011 ";
if (c8=='4')
cout<<"0100 ";
if (c8=='5')
cout<<"0101 ";
if (c8=='6')
cout<<"0110 ";
if (c8=='7')
cout<<"0111 ";
if (c8=='8')
cout<<"1000 ";
if (c8=='9')
cout<<"1001 ";
if ((c8=='a')||(c8=='A'))
cout<<"1010 ";
if ((c8=='b')||(c8=='B'))
cout<<"1011 ";
if ((c8=='c')||(c8=='C'))
cout<<"1100 ";
if ((c8=='d')||(c8=='D'))
cout<<"1101 ";
if ((c8=='e')||(c8=='E'))
cout<<"1110 ";
if ((c8=='f')||(c8=='F'))
cout<<"1111 ";
cout<<"e' il numero binario corrispondente. "<<endl;
    }    
    if((basex==16)&&(basey==10)){
    char esa1, esa2, esa3, esa4;
    int dec1, dec2, dec3, dec4, dfin1, dfin2, dfin3, dfin4, decimale;
    cout<<endl<<"--------------------------------------------------\n";
cout<<"Hai scelto la conversione da esadecimale a decimale!"<<endl;
cout<<"--------------------------------------------------\n"<<endl;
    cout<<"Inserisci la prima cifra/lettera"<<endl;
    cin>>esa1;
    cout<<"Inserisci la seconda cifra/lettera"<<endl;
    cin>>esa2;
    cout<<"Inserisci la terza cifra/lettera"<<endl;
    cin>>esa3;
    cout<<"Inserisci la quarta cifra/lettera"<<endl;
    cin>>esa4;
    //Prima cifra
    if ((esa1=='A')||(esa1=='a')){
    dec1=10;
    esa1='Z';
    }
     if((esa1=='B')||(esa1=='b')){
    dec1=11;
    esa1='Z';
    }
     if ((esa1=='C')||(esa1=='c')){
    dec1=12;
    esa1='Z';
    }
     if ((esa1=='D')||(esa1=='d')){
    dec1=13;
    esa1='Z';
    }
     if ((esa1=='E')||(esa1=='e')){
    dec1=14;
    esa1='Z';
    }
     if ((esa1=='F')||(esa1=='f')){
    dec1=15;
    esa1='Z';
    }
    if(esa1=='Z'){
    dfin1=dec1*4096;
    }
    else{
    dec1=esa1;
    if(dec1==48)
    dec1=0;
    if(dec1==49)
    dec1=1;
    if(dec1==50)
    dec1=2;
    if(dec1==51)
    dec1=3;
    if(dec1==52)
    dec1=4;
    if(dec1==53)
    dec1=5;
    if(dec1==54)
    dec1=6;
    if(dec1==55)
    dec1=7;
    if(dec1==56)
    dec1=8;
    if(dec1==58)
    dec1=9;
    dfin1=dec1*4096;
    }
    //Seconda cifra
    if ((esa2=='A')||(esa2=='a')){
    dec2=10;
    esa2='Z';
    }
     if((esa2=='B')||(esa2=='b')){
    dec2=11;
    esa2='Z';
    }
     if ((esa2=='C')||(esa2=='c')){
    dec2=12;
    esa2='Z';
    }
     if ((esa2=='D')||(esa2=='d')){
    dec2=13;
    esa2='Z';
    }
     if ((esa2=='E')||(esa2=='e')){
    dec2=14;
    esa2='Z';
    }
     if ((esa2=='F')||(esa2=='f')){
    dec2=15;
    esa2='Z';
    }
    if(esa2=='Z'){
    dfin2=dec2*256;
    }
    else{
    dec2=esa2;
    if(dec2==48)
    dec2=0;
    if(dec2==49)
    dec2=1;
    if(dec2==50)
    dec2=2;
    if(dec2==51)
    dec2=3;
    if(dec2==52)
    dec2=4;
    if(dec2==53)
    dec2=5;
    if(dec2==54)
    dec2=6;
    if(dec2==55)
    dec2=7;
    if(dec2==56)
    dec2=8;
    if(dec2==58)
    dec2=9;
    dfin2=dec2*256;
    }
    //Terza cifra
      if ((esa3=='A')||(esa3=='a')){
    dec3=10;
    esa3='Z';
    }
     if((esa3=='B')||(esa3=='b')){
    dec3=11;
    esa3='Z';
    }
     if ((esa3=='C')||(esa3=='c')){
    dec3=12;
    esa3='Z';
    }
     if ((esa3=='D')||(esa3=='d')){
    dec3=13;
    esa3='Z';
    }
     if ((esa3=='E')||(esa3=='e')){
    dec3=14;
    esa3='Z';
    }
     if ((esa3=='F')||(esa3=='f')){
    dec3=15;
    esa3='Z';
    }
    if(esa3=='Z'){
    dfin3=dec3*16;
    }
    else{
    dec3=esa3;
    if(dec3==48)
    dec3=0;
    if(dec3==49)
    dec3=1;
    if(dec3==50)
    dec3=2;
    if(dec3==51)
    dec3=3;
    if(dec3==52)
    dec3=4;
    if(dec3==53)
    dec3=5;
    if(dec3==54)
    dec3=6;
    if(dec3==55)
    dec3=7;
    if(dec3==56)
    dec3=8;
    if(dec3==58)
    dec3=9;
    dfin3=dec3*16;
    }
    //Quarta cifra
      if ((esa4=='A')||(esa4=='a')){
    dec4=10;
    esa4='Z';
    }
     if((esa4=='B')||(esa4=='b')){
    dec4=11;
    esa4='Z';
    }
     if ((esa4=='C')||(esa4=='c')){
    dec4=12;
    esa4='Z';
    }
     if ((esa4=='D')||(esa4=='d')){
    dec4=13;
    esa4='Z';
    }
     if ((esa4=='E')||(esa4=='e')){
    dec4=14;
    esa4='Z';
    }
     if ((esa4=='F')||(esa4=='f')){
    dec4=15;
    esa4='Z';
    }
    if(esa4=='Z'){
    dfin4=dec4*1;
    }
    else{
    dec4=esa4;
    if(dec4==48)
    dec4=0;
    if(dec4==49)
    dec4=1;
    if(dec4==50)
    dec4=2;
    if(dec4==51)
    dec4=3;
    if(dec4==52)
    dec4=4;
    if(dec4==53)
    dec4=5;
    if(dec4==54)
    dec4=6;
    if(dec4==55)
    dec4=7;
    if(dec4==56)
    dec4=8;
    if(dec4==58)
    dec4=9;
    dfin4=dec4*1;
    }
    //Output
    decimale=dfin1+dfin2+dfin3+dfin4;
    cout<<"\nIl numero convertito in decimale e': " <<decimale<<endl;  
        }
    cout<<"\n Uscire dal software? \n [S] per uscire. \n [N] per riutilizzare il software."<<endl;
    cin>>exit;
   }while((exit=='N')||(exit=='n'));
    }
