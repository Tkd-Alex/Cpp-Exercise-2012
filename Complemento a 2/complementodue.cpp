//Maggio Alessandro alex.tkd.alex@gmail.com

#include <iostream>
using namespace std;
int main () {
    int b1,b2,b3,b4,b5,b6,b7,b8,bi,re,in;
    int b21,b22,b23,b24,b25,b26,b27,b28;
    wchar_t bc1,bc2,bc3,bc4,bc5,bc6,bc7,bc8;
    cout<<"Inserisci il numero binario a 8-bit nella quale eseguire il complemento a due.\n";
    cin>>bi;
    //Divisine del numero bit per bit
    b8=bi/10000000;
    bi=bi%10000000;
    b7=bi/1000000;
    bi=bi%1000000;
    b6=bi/100000;
    bi=bi%100000;
    b5=bi/10000;
    bi=bi%10000;
    b4=bi/1000;
    bi=bi%1000;
    b3=bi/100;
    bi=bi%100;
    b2=bi/10;
    b1=bi%10;
    //Assegnazione del bit diviso a delle variabili di supporto utilizzare nel secondo metodo
    b21=b1;
    b22=b2;
    b23=b3;
    b24=b4;
    b25=b5;
    b26=b6 ; 
    b27=b7  ;
    b28=b8  ;
    //Primo metodo.
    //Inversione dei numeri da 0/1 e 1/0
    if(b1==1)
    b1=0;
    else
    b1=1;
     if(b2==1)
    b2=0;
    else
    b2=1;
     if(b3==1)
    b3=0;
    else
    b3=1;
     if(b4==1)
    b4=0;
    else
    b4=1;
     if(b5==1)
    b5=0;
    else
    b5=1;
     if(b6==1)
    b6=0;
    else
    b6=1;
     if(b7==1)
    b7=0;
    else
    b7=1;
     if(b8==1)
    b8=0;
    else
    b8=1;
    
    cout<<"Esecuzione del primo metodo.\nVengono invertiti tutti i bit.\n";
    cout<<b8;
    cout<<b7;
    cout<<b6;
    cout<<b5;
    cout<<b4;
    cout<<b3;
    cout<<b2;
    cout<<b1<<endl;
    //Aggiungo uno al primo bit
    //Primo bit
    b1=b1+1;
    if(b1==2){
    b1=0;
    re=1;}  
    //Secondo bit con controllo di riporto
    if(re==1){
    b2=b2+re;
    re=0;}
    if(b2==2){
    b2=0;
    re=1;}
    //Terzo bit con controllo di riporto
    if(re==1){
    b3=b3+re;
    re=0;}
    if(b3==2){
    b3=0;
    re=1;}
    //Quarto bit con controllo di riporto
     if(re==1){
    b4=b4+re;
    re=0;}
    if(b4==2){
    b4=0;
    re=1;}
    //Quinto bit con controllo di riporto
     if(re==1){
    b5=b5+re;
    re=0;}
    if(b5==2){
    b5=0;
    re=1;}
    //Sesto bit con controllo di riporto
     if(re==1){
    b6=b6+re;
    re=0;}
    if(b6==2){
    b6=0;
    re=1;}
    //Settimo bit con controllo di riporto
     if(re==1){
    b7=b7+re; 
    re=0;}
    if(b7==2){
    b7=0;
    re=1;}
    //Ottavo bit con controllo di riporto
     if(re==1){
    b8=b8+re;
    re=0;}
    if(b8==2){
    b8=0;
    re=1;}
    //Output bit con controllo di riporto
    cout<<"Viene aggiunto uno al numero converitito prima.\n";
    cout<<b8<<b7<<b6<<b5<<b4<<b3<<b2<<b1<<endl;  
    cout<<"Esecuzione del secondo metodo.\nVengono controllati tutti i bit fino a trovare quello uguale a 1.\n";
    in=0;
    //Controllo del primo bit diverso da 0
    if(b21==1){
    bc1=b21;
    in=1;}
    else
    bc1=b21;
    //Controllo del secondo bit diverso da 0
    if((in==1)&&(b22==1)){
    b22=0;
    bc2='-';}
    else if((in==1)&&(b22==0)){
    b22=1;
    bc2='-';}
    else if((in==0)&&(b22==1)){
    bc2=b22;
    in=1;}
    else if((in==0)&&(b22==0)){
    bc2=b22;}
    //Controllo del terzo bit diverso da 0
    if((in==1)&&(b23==1)){
    b23=0;
    bc3='-';}
    else if((in==1)&&(b23==0)){
    b23=1;
    bc3='-';}
    else if((in==0)&&(b23==1)){
    bc3=b23;
    in=1;}
    else if((in==0)&&(b23==0)){
    bc3=b23;}
    //Controllo del quarto bit diverso da 0 
    if((in==1)&&(b24==1)){
    b24=0;
     bc4='-';}
    else if((in==1)&&(b24==0)){
    b24=1;
     bc4='-';}
    else if((in==0)&&(b24==1)){
   bc4=b24;
    in=1;}
    else if((in==0)&&(b24==0)){
    bc4=b24;}
    //Controllo del quinto bit diverso da 0 
    if((in==1)&&(b25==1)){
    b25=0;
    bc5='-';}
    else if((in==1)&&(b25==0)){
    b25=1;
    bc5='-';}
    else if((in==0)&&(b25==1)){
    bc5=b25;
    in=1;}
    else if((in==0)&&(b25==0)){
    bc5=b25;}
    //Controllo del sesto bit diverso da 0 
    if((in==1)&&(b26==1)){
    b26=0;
     bc6='-';}
    else if((in==1)&&(b26==0)){
    b26=1;
     bc6='-';}
    else if((in==0)&&(b26==1)){
    bc6=b26;
    in=1;}
    else if((in==0)&&(b26==0)){
    bc6=b26;}
    //Controllo del settimo bit diverso da 0 
    if((in==1)&&(b27==1)){
    b27=0;
    bc7='-';}
    else if((in==1)&&(b27==0)){
    b27=1;
    bc7='-';}
    else if((in==0)&&(b27==1)){
     bc7=b27;
    in=1;}
    else if((in==0)&&(b27==0)){
     bc7=b27;}
    //Controllo del ottavo bit diverso da 0 
    if((in==1)&&(b28==1)){
    b28=0;
    bc8='-';}
    else if((in==1)&&(b28==0)){
    b28=1;
    bc8='-';}
    else if((in==0)&&(b28==1)){
     bc8=b28;
    in=1;}
    else if((in==0)&&(b28==0)){
     bc8=b28;}
   
   //Stampa numeri controllo.
   if(bc8==45)
   cout<<"-";
   else
   cout<<bc8;
    if(bc7==45)
   cout<<"-";
   else
   cout<<bc7;
    if(bc6==45)
   cout<<"-";
   else
   cout<<bc6;
    if(bc5==45)
   cout<<"-";
   else
   cout<<bc5;
    if(bc4==45)
   cout<<"-";
   else
   cout<<bc4;
    if(bc3==45)
   cout<<"-";
   else
   cout<<bc3;
    if(bc2==45)
   cout<<"-";
   else
   cout<<bc2;
   if(bc1==45)
   cout<<"-";
   else
   cout<<bc1;
           cout<<"\nLe cifre dopo l'uno vengono invertite.\n";
    cout<<b28<<b27<<b26<<b25<<b24<<b23<<b22<<b21<<endl;
    system("pause");}
