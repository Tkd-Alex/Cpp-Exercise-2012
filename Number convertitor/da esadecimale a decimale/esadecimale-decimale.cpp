#include <iostream>
using namespace std;
int main () {
    char esa1, esa2, esa3, esa4;
    int dec1, dec2, dec3, dec4, dfin1, dfin2, dfin3, dfin4, decimale;
    cout<<"Inserisci la prima cifra/lettera"<<endl;
    cin>>esa1;
    cout<<"Inserisci la seconda cifra/lettera"<<endl;
    cin>>esa2;
    cout<<"Inserisci la terza cifra/lettera"<<endl;
    cin>>esa3;
    cout<<"Inserisci la quarta cifra/lettera"<<endl;
    cin>>esa4;
    //Prima cifra
    if (esa1=='A'){
    dec1=10;
    esa1='Z';
    }
     if(esa1=='B'){
    dec1=11;
    esa1='Z';
    }
     if (esa1=='C'){
    dec1=12;
    esa1='Z';
    }
     if (esa1=='D'){
    dec1=13;
    esa1='Z';
    }
     if (esa1=='E'){
    dec1=14;
    esa1='Z';
    }
     if (esa1=='F'){
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
    if (esa2=='A'){
    dec2=10;
    esa2='Z';
    }
     if(esa2=='B'){
    dec2=11;
    esa2='Z';
    }
     if (esa2=='C'){
    dec2=12;
    esa2='Z';
    }
     if (esa2=='D'){
    dec2=13;
    esa2='Z';
    }
     if (esa2=='E'){
    dec2=14;
    esa2='Z';
    }
     if (esa2=='F'){
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
      if (esa3=='A'){
    dec3=10;
    esa3='Z';
    }
     if(esa3=='B'){
    dec3=11;
    esa3='Z';
    }
     if (esa3=='C'){
    dec3=12;
    esa3='Z';
    }
     if (esa3=='D'){
    dec3=13;
    esa3='Z';
    }
     if (esa3=='E'){
    dec3=14;
    esa3='Z';
    }
     if (esa3=='F'){
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
      if (esa4=='A'){
    dec4=10;
    esa4='Z';
    }
     if(esa4=='B'){
    dec4=11;
    esa4='Z';
    }
     if (esa4=='C'){
    dec4=12;
    esa4='Z';
    }
     if (esa4=='D'){
    dec4=13;
    esa4='Z';
    }
     if (esa4=='E'){
    dec4=14;
    esa4='Z';
    }
     if (esa4=='F'){
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
    cout<<"Il numero convertito in decimale e': " <<decimale<<endl;
    system("pause");}
