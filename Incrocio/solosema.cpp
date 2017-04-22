#include <iostream>
#include <conio2.h>
using namespace std;
int main () {
int i;
  //Strada Orizzontale
  for(i=0;i<80;i++){
  if((i<20)||(i>30)&&(i<50)||(i>60)){
  gotoxy(i,9);                
  cout<<(char)205;
  gotoxy(i,16);                
  cout<<(char)205;     
  }
  }

  //Strada verticale
  for(i=0;i<25;i++){
  if((i>15)||(i<10)){
  gotoxy(20,i);                   
  cout<<(char)186;
  gotoxy(30,i);
  cout<<(char)186;
  gotoxy(50,i);
  cout<<(char)186;
  gotoxy(60,i);
  cout<<(char)186;}}

  //Vari Angoli
  gotoxy(20,9);
  cout<<char(188);

  gotoxy(50,9);
  cout<<char(188);

  gotoxy(30,9);
  cout<<char(200);

  gotoxy(60,9);
  cout<<char(200);

  gotoxy(20,16);
  cout<<char(187);

  gotoxy(50,16);
  cout<<char(187);

  gotoxy(30,16);
  cout<<char(201);

  gotoxy(60,16);
  cout<<char(201);

  //Strada Orizzontale
  for(i=0;i<80;i+=2){
  if((i<20)||(i>30)&&(i<50)||(i>60)){
  gotoxy(i,12);                
  cout<<char(196);}}


  //Strada Verticale
  for(i=0;i<25;i+=2){
  if((i>15)||(i<10)){
  gotoxy(25,i);                   
  cout<<char(124);
  gotoxy(55,i);
  cout<<char(124);}}


  //Stop lato sinistro
  for(int i=13;i<16;i++){
  gotoxy(19,i);
  cout<<char(179);}
  
  for(int i=21;i<25;i++){
  gotoxy(i,9);
  cout<<char(196);}
  
  for(int i=10;i<12;i++){
  gotoxy(31,i);
  cout<<char(179);}
  
  for(int i=26;i<30;i++){
  gotoxy(i,16);
  cout<<char(196);}

  //Stop lato destro
  for(int i=13;i<16;i++){
  gotoxy(50,i);
  cout<<char(179);}
  
  for(int i=51;i<55;i++){
  gotoxy(i,9);
  cout<<char(196);}
  
  for(int i=10;i<12;i++){
  gotoxy(61,i);
  cout<<char(179);}
  
  for(int i=56;i<60;i++){
  gotoxy(i,16);
  cout<<char(196);}
  
  /*/
  //Strisce pedonali 1
  for(int i=10;i<16;i++){
  gotoxy(19,i);
  cout<<char(220);
  gotoxy(20,i);
  cout<<char(220);}
  //Strisce pedonali 2
  for(int i=10;i<16;i++){
  gotoxy(30,i);
  cout<<char(220);
  gotoxy(31,i);
  cout<<char(220);}
  //Strisce pedonali 3
  for(int i=10;i<16;i++){
  gotoxy(60,i);
  cout<<char(220);
  gotoxy(61,i);
  cout<<char(220);}
  //Strisce pedonali 4
  for(int i=10;i<16;i++){
  gotoxy(48,i);
  cout<<char(220);
  gotoxy(49,i);
  cout<<char(220);}
  /*/

  //Ciclo sempre vero
  bool vero;
  vero=true;
  while(vero){
  //Stampa Semafori
  //Rosso
  textcolor(12);
  gotoxy(19,8);
  cout<<char(219);
  //Verde
  textcolor(10);
  gotoxy(17,17);
  cout<<char(219);
  //Rosso
  textcolor(12);
  gotoxy(31,17);
  cout<<char(219);
  //Verde
  textcolor(10);
  gotoxy(33,8);
  cout<<char(219);
  //Rosso
  textcolor(12);
  gotoxy(49,8);
  cout<<char(219);
  //Verde
  textcolor(10);
  gotoxy(47,17);
  cout<<char(219);
  //Rosso
  textcolor(12);
  gotoxy(61,17);
  cout<<char(219);
  //Verde
  textcolor(10);
  gotoxy(63,8);
  cout<<char(219);
  //Grigio
  textcolor(7);
  gotoxy(19,6);
  cout<<char(219);
  gotoxy(19,7);
  cout<<char(219);
  gotoxy(18,17);
  cout<<char(219);
  gotoxy(19,17);
  cout<<char(219);  
  gotoxy(31,19);
  cout<<char(219);
  gotoxy(31,18);
  cout<<char(219);  
  gotoxy(32,8);
  cout<<char(219);
  gotoxy(31,8);
  cout<<char(219);
  gotoxy(49,6);
  cout<<char(219);
  gotoxy(49,7);
  cout<<char(219);
  gotoxy(48,17);
  cout<<char(219);
  gotoxy(49,17);
  cout<<char(219);
  gotoxy(61,19);
  cout<<char(219);
  gotoxy(61,18);
  cout<<char(219);
  gotoxy(62,8);
  cout<<char(219);
  gotoxy(61,8);
  cout<<char(219);
  
  for(int r=0;r<999999999;r++);
 
  /*//Auto
  for(int i=0;i<19;i++){
  for(int r=0;r<99999999;r++);
  textcolor(11);
  gotoxy(i,14);
  cout<<char(1); 
  textcolor(0);
  gotoxy(i-1,14);
  cout<<char(1); 
  }
  /*/
  
  //Giallo
  textcolor(14);
  gotoxy(18,17);
  cout<<char(219);
  gotoxy(32,8);
  cout<<char(219);
  gotoxy(48,17);
  cout<<char(219);
  gotoxy(62,8);
  cout<<char(219);  
  
  for(int r=0;r<999999999;r++);

  //Giallo e verde diventa grigio
  textcolor(7);
  gotoxy(18,17);
  cout<<char(219);
  gotoxy(32,8);
  cout<<char(219);
  gotoxy(48,17);
  cout<<char(219);
  gotoxy(62,8);
  cout<<char(219);
  gotoxy(17,17);
  cout<<char(219);
  gotoxy(33,8);
  cout<<char(219);
  gotoxy(47,17);
  cout<<char(219);
  gotoxy(63,8);
  cout<<char(219);
  
 //Verde e giallo diventano Rosso
  textcolor(12);
  gotoxy(19,17);
  cout<<char(219);
  gotoxy(31,8);
  cout<<char(219);
  gotoxy(49,17);
  cout<<char(219);
  gotoxy(61,8);
  cout<<char(219);
 
  //Rosso diventa verde
  textcolor(10);
  gotoxy(19,6);
  cout<<char(219); 
  gotoxy(31,19);
  cout<<char(219);
  gotoxy(49,6);
  cout<<char(219);
  gotoxy(61,19);
  cout<<char(219);
  
  //Grigio rosso
  textcolor(7);
  gotoxy(19,8);
  cout<<char(219);
  gotoxy(31,17);
  cout<<char(219);
  gotoxy(49,8);
  cout<<char(219);
  gotoxy(61,17);
  cout<<char(219);
  
  for(int r=0;r<999999999;r++);
  
  //Verdi diventano gialli
  
  textcolor(14);
  gotoxy(19,7);
  cout<<char(219);
  gotoxy(31,18);
  cout<<char(219);
  gotoxy(49,7);
  cout<<char(219);
  gotoxy(61,18);
  cout<<char(219);
  
  for(int r=0;r<999999999;r++);
  }


  gotoxy(0,0);


getchar();}
