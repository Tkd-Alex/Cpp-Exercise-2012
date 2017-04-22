#include <iostream>
#include <conio2.h>

using namespace std;

void rit();

void rit(){
for(int r=0;r<99999999;r++);
}

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
          cout<<(char)186;
      }
  }

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
          cout<<char(196);
      }
  }

  //Strada Verticale
  for(i=0;i<25;i+=2){
      if((i>15)||(i<10)){
          gotoxy(25,i);                   
          cout<<char(124);
          gotoxy(55,i);
          cout<<char(124);
      }
  }

  //Stop lato sinistro
  for(int i=13;i<16;i++){
      gotoxy(19,i);
      cout<<char(179);
  }
  
  for(int i=21;i<25;i++){
      gotoxy(i,9);
      cout<<char(196);
  }
  
  for(int i=10;i<12;i++){
      gotoxy(31,i);
      cout<<char(179);
  }
  
  for(int i=26;i<30;i++){
      gotoxy(i,16);
      cout<<char(196);
  }

  //Stop lato destro
  for(int i=13;i<16;i++){
      gotoxy(50,i);
      cout<<char(179);
  }
  
  for(int i=51;i<55;i++){
      gotoxy(i,9);
      cout<<char(196);
  }
  
  for(int i=10;i<12;i++){
      gotoxy(61,i);
      cout<<char(179);
  }
  
  for(int i=56;i<60;i++){
      gotoxy(i,16);
      cout<<char(196);
  }

  int cont=0;

  //Ciclo sempre vero
  bool vero=true;
  
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
      
      //1Quarta e quinta auto su giro 2
      if(cont==2){
                  for(int y=23;y>16;y--){
                      rit();
                      gotoxy(27,y);
                      textcolor(11);
                      cout<<"*";
                      gotoxy(27,y+1);
                      textcolor(0);
                      cout<<"*"; 
                      gotoxy(57,y);
                      textcolor(11);
                      cout<<"*";
                      gotoxy(57,y+1);
                      textcolor(0);
                      cout<<"*"; 
                  }
      }
      
      //4Prima auto su giro 1
      if(cont==1){
          for(int x=50;x<65;x++){
              rit();
              gotoxy(x,14);
              textcolor(11);
              cout<<"*";
              gotoxy(x-1,14);
              textcolor(0);
              cout<<"*";
              if(x==51){
                  for(int i=13;i<16;i++){
                  textcolor(7);
                  gotoxy(50,i);
                  cout<<char(179);
                  }
              }
          }              
      }   
      
      //4Sesta auto su giro 4
      if(cont==4){
          for(int x=31;x>13;x--){
              rit();
              gotoxy(x,10);
              textcolor(11);
              cout<<"*";
              gotoxy(x+1,10);
              textcolor(0);
              cout<<"*";
              if(x==30){
                  for(int i=10;i<12;i++){
                      textcolor(7);
                      gotoxy(31,i);
                      cout<<char(179);
                  }  
              }
          }              
      } 
      
      //1Prima auto su giro 0
      if(cont==0){
          for(int x=0;x<26;x++){
              rit();
              gotoxy(x,14);
              textcolor(11);
              cout<<"*";
              gotoxy(x-1,14);
              textcolor(0);
              cout<<"*"; 
              if(x==20){
                  for(int i=13;i<16;i++){
                      textcolor(7);
                      gotoxy(19,i);
                      cout<<char(179);
                  }
              }
          }              
      }  
      
      //1Sesta auto su giro 3
      if(cont==3){
          for(int x=78;x>50;x--){
              rit();
              gotoxy(x,10);
              textcolor(11);
              cout<<"*";
              gotoxy(x+1,10);
              textcolor(0);
              cout<<"*"; 
              if(x==60){
                  for(int i=10;i<12;i++){
                      textcolor(7);
                      gotoxy(61,i);
                      cout<<char(179);
                  }
              }
          }              
      }  
      
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
      
      //5Prima auto su giro 1
       if(cont==1){
          for(int x=65;x<81;x++){
              rit();
              gotoxy(x,14);
              textcolor(11);
              cout<<"*";
               gotoxy(x-1,14);
              textcolor(0);
              cout<<"*";
          }              
      }
         
      //5Sesta auto su giro 4
       if(cont==4){
          for(int x=13;x>0;x--){
              rit();
              gotoxy(x,10);
              textcolor(11);
              cout<<"*";
              gotoxy(x+1,10);
              textcolor(0);
              cout<<"*";
              if(x==1){
                  gotoxy(x,10);
                  textcolor(0);
                  cout<<"*";
              }
          }              
      }   
         
       //2Prima auto su giro 0
      if(cont==0){
          for(int x=26;x<44;x++){
              rit();
              gotoxy(x,14);
              textcolor(11);
              cout<<"*";
              gotoxy(x-1,14);
              textcolor(0);
              cout<<"*";
          }
      }
      
      //2Sesta auto su giro 3
      if(cont==3){
          for(int x=50;x>36;x--){
              rit();
              gotoxy(x,10);
              textcolor(11);
              cout<<"*";
              gotoxy(x+1,10);
              textcolor(0);
              cout<<"*"; 
          }
      }
    
      if(cont==2){
      for(int i=0;i<999999999;i++);           
      }
    
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
      
      //2Quarta e quinta auto su giro 2
      if(cont==2){
                  for(int y=16;y>9;y--){
                      rit();
                      gotoxy(27,y);
                      textcolor(11);
                      cout<<"*";
                      gotoxy(27,y+1);
                      textcolor(0);
                      cout<<"*"; 
                      gotoxy(57,y);
                      textcolor(11);
                      cout<<"*";
                      gotoxy(57,y+1);
                      textcolor(0);
                      cout<<"*"; 
                      if(y==15){
                          textcolor(7);         
                          for(int i=26;i<30;i++){                               
                              gotoxy(i,16);
                              cout<<char(196);
                          }
                          for(int i=56;i<60;i++){
                              gotoxy(i,16);
                              cout<<char(196);
                          }
                      }
                  }
      }
      
      //1Seconda e terza auto su giro 1
      if(cont==1){
          for(int y=0;y<16;y++){
              rit();
              gotoxy(22,y);
              textcolor(11);
              cout<<"*";
              gotoxy(22,y-1);
              textcolor(0);
              cout<<"*"; 
              gotoxy(53,y);
              textcolor(11);
              cout<<"*";
              gotoxy(53,y-1);
              textcolor(0);
              cout<<"*"; 
              if(y==10){
                  textcolor(7);
                  for(int i=21;i<25;i++){
                      gotoxy(i,9);
                      cout<<char(196);
                  } 
                  for(int i=51;i<55;i++){
                      gotoxy(i,9);
                      cout<<char(196);
                  }  
              } 
          }              
      }
      
      //3Prima auto su giro 0
      if(cont==0){
          for(int x=44;x<50;x++){
              rit();
              gotoxy(x,14);
              textcolor(11);
              cout<<"*";
               gotoxy(x-1,14);
              textcolor(0);
              cout<<"*";
          }              
      }
      
      //3Sesta auto su giro 3
      if(cont==3){
          for(int x=36;x>31;x--){
              rit();
              gotoxy(x,10);
              textcolor(11);
              cout<<"*";
               gotoxy(x+1,10);
              textcolor(0);
              cout<<"*";
          }              
      }
      
      
      //Verdi diventano gialli
      if(cont!=4){
          textcolor(14);
          gotoxy(19,7);
          cout<<char(219);
          gotoxy(31,18);
          cout<<char(219);
          gotoxy(49,7);
          cout<<char(219);
          gotoxy(61,18);
          cout<<char(219);
      }
      
      //3Quarta e quinta auto su giro 2
            if(cont==2){
                  for(int y=9;y>0;y--){
                      rit();
                      gotoxy(27,y);
                      textcolor(11);
                      cout<<"*";
                      gotoxy(27,y+1);
                      textcolor(0);
                      cout<<"*"; 
                      gotoxy(57,y);
                      textcolor(11);
                      cout<<"*";
                      gotoxy(57,y+1);
                      textcolor(0);
                      cout<<"*"; 
                      if(y==1){
                          gotoxy(27,y);
                          textcolor(0);
                          cout<<"*";  
                          gotoxy(57,y);
                          cout<<"*";       
                      }                      
                  }
            }
      
      //2Seconda e terza auto su giro 1
      if(cont==1){
          for(int y=16;y<25;y++){
              rit();
              gotoxy(22,y);
              textcolor(11);
              cout<<"*";
              gotoxy(22,y-1);
              textcolor(0);
              cout<<"*"; 
              gotoxy(53,y);
              textcolor(11);
              cout<<"*";
              gotoxy(53,y-1);
              textcolor(0);
              cout<<"*"; 
              if(y==24){
                  gotoxy(22,y);
                  textcolor(0);
                  cout<<"*"; 
                  gotoxy(53,y);
                  textcolor(0);
                  cout<<"*"; 
              }
          }              
      }    
      
      if(cont==4)
      cont=0;
      else
      cont++;
      
      for(int i=0;i<999999999;i++);
  }


  gotoxy(0,0);


getchar();}
