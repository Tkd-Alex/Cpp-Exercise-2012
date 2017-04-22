#include <iostream>
using namespace std;
int main () {
    int i;
    cout<<"While\n";
    cout<<"Prima serie di numeri: ";
    cout<<"1,3,5,7,9,....99\n\n";
    i=0;
    while(i<100){
    i++;
    if(i%2!=0)
    cout<<i<<" , ";
}
cout<<endl<<endl;
cout<<"Seconda serie di numeri: ";
    cout<<"1,4,9,16,25,....2500\n\n";
    
    i=0;
    while(i<50){
    i++;
    cout<<i*i<<" , ";}

    cout<<endl<<endl;
    cout<<"Terza serie di numeri: ";
    cout<<"1,-2,3,-4,5,-6,.....-100\n\n";
    i=0;
    while(i<100){
    i++;             
    if(i%2==0)
    cout<<"-"<<i<<" , ";
    else
    cout<<i<<" , ";}
      cout<<endl<<endl;
      
cout<<"Quarta serie di numeri: ";
cout<<"1/2,2/3,3/4,4/5.....99/100\n\n";
     i=1;
     while(i<100){
     cout<<i<<"/";
     i++;
     cout<<i<<" , ";}
     cout<<endl<<endl;
     
     //Do-While
      cout<<"Do-While\n";
    cout<<"Prima serie di numeri: ";
    cout<<"1,3,5,7,9,....99\n\n";
    i=0;
    do{
    i++;
    if(i%2!=0)
    cout<<i<<" , ";
}while(i<100);
cout<<endl<<endl;
cout<<"Seconda serie di numeri: ";
    cout<<"1,4,9,16,25,....2500\n\n";
    
    i=0;
    do{
    i++;
    cout<<i*i<<" , ";}while(i<50);

    cout<<endl<<endl;
    cout<<"Terza serie di numeri: ";
    cout<<"1,-2,3,-4,5,-6,.....-100\n\n";
    i=0;
    do{
    i++;             
    if(i%2==0)
    cout<<"-"<<i<<" , ";
    else
    cout<<i<<" , ";}while(i<100);
      cout<<endl<<endl;
      
cout<<"Quarta serie di numeri: ";
cout<<"1/2,2/3,3/4,4/5.....99/100\n\n";
     i=1;
     do{
     cout<<i<<"/";
     i++;
     cout<<i<<" , ";}while(i<100);
     cout<<endl<<endl;  
    system("pause");}
