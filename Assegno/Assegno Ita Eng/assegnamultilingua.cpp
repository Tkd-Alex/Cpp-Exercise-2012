//Simulatore d'assegno bilingua - Maggio Alessandro alex.tkd.alex@gmail.com

#include <iostream>
using namespace std;
int main () {
    string lang;
    cout<<"Seleziona la lingua. Scrivi [ITA] per la lingua italiana"<<endl;
    cout<<"Select the languages. Write [ENG] for the english language"<<endl;
    cin>>lang;
    if((lang=="ita")||(lang=="ITA")){
   float n;
    int n1,n2,n3,n4,n5,n6,n7;
    cout<<"Inserisci un numero di 5 cifre\n";
    cin>>n;
    n*=100;
    int nn;
    nn=n;
    n1=nn/1000000;
    nn=nn%1000000;
    n2=nn/100000;
    nn=nn%100000;
    n3=nn/10000;
    nn=nn%10000;
    n4=nn/1000;
    nn=nn%1000;
    n5=nn/100;
    nn=nn%100;
    n6=nn/10;
    n7=nn%10;
    
    //mila
    if(n1==1){
        if (n2==0)
        cout<<"dieci";
        else if (n2==1)
        cout<<"undici";
        else if (n2==2)
        cout<<"dodici";
        else if (n2==3)
        cout<<"tredici";
        else if (n2==4)
        cout<<"quattordici";
        else if (n2==5)
        cout<<"quindici";
        else if (n2==6)
         cout<<"sedici";
        else if (n2==7)
         cout<<"diciassette";
         else if (n2==8)
         cout<<"diciotto";
         else if (n2==9)
          cout<<"diciannove";}
//  Dopo decina
    if(n1==2)
    cout<<"vent";
    if(n1==3)
    cout<<"trent";
    if(n1==4)
    cout<<"quarant";
    if(n1==5)
    cout<<"cinquant";
    if(n1==6)
    cout<<"sessant";
    if(n1==7)
    cout<<"settant";
    if(n1==8)
    cout<<"ottant";
    if(n1==9)
    cout<<"novant";
//  Dopo decina n2
    if((n1==2)&&(n2==0)&&(n2!=1))
   cout<<"i";
   else if(((n1==3)||(n1==4)||(n1==5)||(n1==6)||(n1==7)||(n1==8)||(n1==9))&&(n2!=1)&&(n2!=8))
   cout<<"a";
   if((n2==1)&&(n1!=0)&&(n1!=1))
   cout<<"unomila";
   else if(n1==1)
   cout<<"mila";
   else if((n2==1)&&(n1==0))
   cout<<"mille";
   if((n1==2)&&(n2==2))
   cout<<"iduemila";
   else if((n2==2)&&(n1!=1))
   cout<<"duemila";
   if((n1==2)&&(n2==3))
   cout<<"itremila";
   else if((n2==3)&&(n1!=1))
   cout<<"tremila";
   if((n1==2)&&(n2==4))
   cout<<"iquattromila";
   else if((n2==4)&&(n1!=1))
   cout<<"quattromila";
   if((n1==2)&&(n2==5))
   cout<<"icinquemila";
   else if((n2==5)&&(n1!=1))
   cout<<"cinquemila";
   if((n1==2)&&(n2==6))
   cout<<"iseimila";
   else if((n2==6)&&(n1!=1))
   cout<<"seimila";
   if((n1==2)&&(n2==7))
   cout<<"isettemila";
   else if((n2==7)&&(n1!=1))
   cout<<"settemila";
   if((n2==8)&&(n1!=1))
   cout<<"ottomila";
   if((n1==2)&&(n2==9))
   cout<<"inovemila";
   else if((n2==9)&&(n1!=1))
   cout<<"novemila";
   if((n1!=0)&&(n2==0)&&(n1!=1))
   cout<<"mila";
   //centinaia
   if(n3==1)
   cout<<"cento";
   if(n3==2)
   cout<<"duecento";
   if(n3==3)
   cout<<"trecento";
   if(n3==4)
   cout<<"quattrocento";
   if(n3==5)
   cout<<"cinquecento";
   if(n3==6)
   cout<<"seicento";
   if(n3==7)
   cout<<"settecento";
   if(n3==8)
   cout<<"ottocento";
   if(n3==9)
   cout<<"novecento";
   //decine
   if(n4==1){
        if (n5==0)
        cout<<"dieci";
        else if (n5==1)
        cout<<"undici";
        else if (n5==2)
        cout<<"dodici";
        else if (n5==3)
        cout<<"tredici";
        else if (n5==4)
        cout<<"quattordici";
        else if (n5==5)
        cout<<"quindici";
        else if (n5==6)
         cout<<"sedici";
        else if (n5==7)
         cout<<"diciassette";
         else if (n5==8)
         cout<<"diciotto";
         else if (n5==9)
          cout<<"diciannove";}
    //  Dopo decina n4
    if(n4==2)
    cout<<"vent";
    if(n4==3)
    cout<<"trent";
    if(n4==4)
    cout<<"quarant";
    if(n4==5)
    cout<<"cinquant";
    if(n4==6)
    cout<<"sessant";
    if(n4==7)
    cout<<"settant";
     if((n4==8)&&(n3!=0))
    cout<<"ttant";
    else if(n4==8)
    cout<<"ottant";
    if(n4==9)
    cout<<"novant";
//  Dopo decina n5
   if((n4==2)&&(n5==0)&&(n5!=1))
   cout<<"i";
   else if(((n4==3)||(n4==4)||(n4==5)||(n4==6)||(n4==7)||(n4==8)||(n4==9))&&(n5!=1)&&(n5!=8))
   cout<<"a";
   if((n5==1)&&(n4!=1))
   cout<<"uno";
   if((n4==2)&&(n5==2)&&(n4!=1))
   cout<<"idue";
   else if((n5==2)&&(n4!=1))
   cout<<"due";
   if((n4==2)&&(n5==3)&&(n4!=1))
   cout<<"itre";
   else if((n5==3)&&(n4!=1))
   cout<<"tre";
   if((n4==2)&&(n5==4)&&(n4!=1))
   cout<<"iquattro";
   else if((n5==4)&&(n4!=1))
   cout<<"quattro";
   if((n4==2)&&(n5==5)&&(n4!=1))
   cout<<"icinque";
   else if((n5==5)&&(n4!=1))
   cout<<"cinque";
   if((n4==2)&&(n5==6)&&(n4!=1))
   cout<<"isei";
   else if((n5==6)&&(n4!=1))
   cout<<"sei";
   if((n4==2)&&(n5==7)&&(n4!=1))
   cout<<"isette";
   else if((n5==7)&&(n4!=1))
   cout<<"sette";
   if((n5==8)&&(n4!=1)&&(n4!=0))
   cout<<"otto";
   else if((n5==8)&&(n4==0))
   cout<<"tto";
   if((n4==2)&&(n5==9)&&(n4!=1))
   cout<<"inove";
   else if((n5==9)&&(n4!=1))
   cout<<"nove";
   
    {if ((n1==0)&&(n2==0)&&(n3==0)&&(n4==0)&&(n5==0))
   cout<<"zero";}
   
   cout<<"/"<<n6<<n7<<endl;
}   
    else if((lang=="eng")||(lang=="ENG")){
               float n;
    int n1,n2,n3,n4,n5,n6,n7;
    cout<<"Enter a 5 digit number\n";
    cin>>n;
    n*=100;
    int nn;
    nn=n;
    n1=nn/1000000;
    nn=nn%1000000;
    n2=nn/100000;
    nn=nn%100000;
    n3=nn/10000;
    nn=nn%10000;
    n4=nn/1000;
    nn=nn%1000;
    n5=nn/100;
    nn=nn%100;
    n6=nn/10;
    n7=nn%10;
    
    
//  n1
if(n1==1){
        if (n2==0)
        cout<<"tenthousands";
        else if (n2==1)
        cout<<"eleventhousands";
        else if (n2==2)
        cout<<"twelvethousands";
        else if (n2==3)
        cout<<"thirteenthousands";
        else if (n2==4)
        cout<<"fourteenthousands";
        else if (n2==5)
        cout<<"fiveteenthousands";
        else if (n2==6)
          cout<<"sixteenthousands";
        else if (n2==7)
         cout<<"seventeenthousands";
         else if (n2==8)
         cout<<"eighteenthousands";
         else if (n2==9)
         cout<<"nineteenthousands";}

    if(n1==2)
    cout<<"twenty";
    if(n1==3)
    cout<<"thirty";
    if(n1==4)
    cout<<"fourty";
    if(n1==5)
    cout<<"fifty";
    if(n1==6)
    cout<<"sixty";
    if(n1==7)
    cout<<"seventy";
    if(n1==8)
    cout<<"eighty";
    if(n1==9)
    cout<<"ninety";
// n2

  if ((n2==1)&&(n1!=1)&&(n1!=0))
   cout<<"onethousands";
   if ((n1==0)&&(n2==1))
   cout<<"onethousand";
   if ((n2==2)&&(n1!=1))
   cout<<"twothousands";
   if ((n2==3)&&(n1!=1))
   cout<<"threethousands";
   if ((n2==4)&&(n1!=1))
   cout<<"fourthousands";
   if ((n2==5)&&(n1!=1))
   cout<<"fivethousands";
   if ((n2==6)&&(n1!=1))
   cout<<"sixthousands";
   if ((n2==7)&&(n1!=1))
   cout<<"seventhousands";
   if ((n2==8)&&(n1!=1))
   cout<<"eightthousands";
   if ((n2==9)&&(n1!=1))
   cout<<"ninethousands";
   if ((n2==0)&&(n1!=0))
   cout<<"thousands";
// n3
   if(n3!=0)
   {{if (n3==1)
   cout<<"one";
   if (n3==2)
   cout<<"two";
   if (n3==3)
   cout<<"three";
   if (n3==4)
   cout<<"four";
   if (n3==5)
   cout<<"five";
   if (n3==6)
   cout<<"six";
   if (n3==7)
   cout<<"seven";
   if (n3==8)
   cout<<"eight";
   if (n3==9)
   cout<<"nine";
} cout<<"houndred";}
//  n4
    if(n4==1){
        if (n5==0)
        cout<<"ten";
        else if (n5==1)
        cout<<"eleven";
        else if (n5==2)
        cout<<"twelve";
        else if (n5==3)
        cout<<"thirteen";
        else if (n5==4)
        cout<<"fourteen";
        else if (n5==5)
        cout<<"fiveteen";
        else if (n5==6)
          cout<<"sixteen";
        else if (n5==7)
         cout<<"seventeen";
         else if (n5==8)
         cout<<"eighteen";
         else if (n5==9)
         cout<<"nineteen";}
    
    if(n4==4)
    cout<<"twenty";
    if(n4==3)
    cout<<"thirty";
    if(n4==4)
    cout<<"fourty";
    if(n4==5)
    cout<<"fifty";
    if(n4==6)
    cout<<"sixty";
    if(n4==7)
    cout<<"seventy";
    if(n4==8)
    cout<<"eighty";
    if(n4==9)
    cout<<"ninety";
//  n5
   if (n5==1)
   cout<<"one";
   if (n5==2)
   cout<<"two";
   if (n5==3)
   cout<<"three";
   if (n5==4)
   cout<<"four";
   if (n5==5)
   cout<<"five";
   if (n5==6)
   cout<<"six";
   if (n5==7)
   cout<<"seven";
   if (n5==8)
   cout<<"eight";
   if (n5==9)
   cout<<"nine";
   
   {if ((n1==0)&&(n2==0)&&(n3==0)&&(n4==0)&&(n5==0))
   cout<<"zero";}
   
   cout<<"/"<<n6<<n7<<endl;
}   
    else{
    cout<<"La lingua selezionata non e' disponibile."<<endl;
    cout<<"The select language isn't available."<<endl;}
 
    system("pause");}
