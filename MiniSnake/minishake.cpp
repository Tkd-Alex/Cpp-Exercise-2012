
#include <ctime>
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h> 
#include <conio2.h>


using namespace std;
int main (){
char riprova;
do{
clrscr(); 
/*

//Disegna il recinto.
textcolor(7);
gotoxy(0,0);
cout<<char(201);
for(int i=1;i<79;i++){
gotoxy(i,0);
cout<<char(205);}
gotoxy(80,0);
cout<<char(187);
for(int i=1;i<24;i++){
gotoxy(0,i);
cout<<char(186);}
for(int i=1;i<24;i++){
gotoxy(79,i);
cout<<char(186);}
gotoxy(0,24);
cout<<char(200);
gotoxy(79,24);
cout<<char(188);
for(int i=1;i<79;i++){
gotoxy(i,24);
cout<<char(205);}
gotoxy(0,0);  

*/

//Dichiarazioni.
int x,y,r,xdv,ydv,pu,tv,xdm[15],ydm[15];
char di,m;
//Ritardo.
r=50000000;
//Coordinate Iniziali.
x=2;
y=2;
//Direzione? Destra.
di='d';
//Punti.
pu=0;
//Tempo della vita.
tv=0;
//Stampa primo cuore.
srand(time(NULL)); 
xdv=(rand() % (77-2+2))+2;
ydv=(rand() % (22-1+2))+1;

while(x<100){
         
        //Cuori random.
        srand(time(NULL));  
        if(tv==50){      
        xdv=(rand() % (77-2+2))+2;
        ydv=(rand() % (22-1+2))+1;
        tv=0;
        }
        textcolor(3);
        gotoxy(xdv,ydv);
        cout<<char(3);     
        
        //Mine random.
        srand(time(NULL)); 
        for(int i=0;i<15;i++){
        xdm[i]=(rand() % (77-2+2))+2;
        ydm[i]=(rand() % (22-1+2))+1;
        textcolor(4);
        gotoxy(xdm[i],ydm[i]);
        cout<<char(15);}
        //Movimento faccina.
           
        if((x!=79)&&(x!=0)&&(y!=0)&&(y!=24)){ //Verfica di non aver toccato la grigria.
        for(int i=0;i<20;i++){
        if((xdm[i]==x)&&(ydm[i]==y)){
        m='s';}
        }
            //Controllo pressione tasti.
            if(GetAsyncKeyState(VK_DOWN)&1){
            di='g';
            }
            if(GetAsyncKeyState(VK_UP)&1){
            di='u';
            }
            if(GetAsyncKeyState(VK_RIGHT)&1){
            di='d';
            }
            if(GetAsyncKeyState(VK_LEFT)&1){
            di='s';
            }
            textcolor(10);//Scelta colore          
            gotoxy(x,y);//Coordinate
            cout<<char(1);//Stampa
            if((xdv==x)&&(ydv==y)){
            pu++;
            tv=49;}
            //Cambio di cordinate a seconda della direzione.
            if(di=='d')
            x++;
            else if(di=='s')
            x--;
            else if(di=='g')
            y++;
            else if(di=='u')
            y--;
            for(int i=1;i<r;i++);//Ritardo.
            clrscr(); //Pulisce schermo per effettuare il movimento.
            //Aggiunta di uno per il tempo della vita.
            tv++;
            //Ridisegna il recinto.
            textcolor(7);
            gotoxy(0,0);
            cout<<char(201);
            for(int i=1;i<79;i++){
            gotoxy(i,0);
            cout<<char(205);}
            gotoxy(80,0);
            cout<<char(187);
            for(int i=1;i<24;i++){
            gotoxy(0,i);
            cout<<char(186);}
            for(int i=1;i<24;i++){
            gotoxy(79,i);
            cout<<char(186);}
            gotoxy(0,24);
            cout<<char(200);
            gotoxy(79,24);
            cout<<char(188);
            for(int i=1;i<79;i++){
            gotoxy(i,24);
            cout<<char(205);}
            gotoxy(0,0);
        }
        else{
        m='s';
        }
        if(m=='s'){
         x=100;
         m='n';
         clrscr();
         textcolor(7);
         cout<<"Hai perso!\n";
         cout<<"Punti totalizzati: "<<pu<<endl;
         cout<<"Riprovare?\n[S]Si\n[N]No\n";
         cin>>riprova;
         }}
}while((riprova=='S')||(riprova=='s'));
getchar(); 
}
