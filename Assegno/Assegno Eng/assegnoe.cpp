#include <iostream>
using namespace std;
int main(){
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
    system("pause");
}    
