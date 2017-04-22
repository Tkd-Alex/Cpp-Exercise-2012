#include <windows.h>
#include <stdio.h>
#include <iostream.h>
#include <stdlib.h> 
#include<conio.h>
void gotoxy(int x,int y){     
     HANDLE HConsole;
     CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;     
     HConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     ConsoleInfo.dwCursorPosition.X = x;
     ConsoleInfo.dwCursorPosition.Y = y;     
     SetConsoleCursorPosition(HConsole,ConsoleInfo.dwCursorPosition);     
}
void SetColor(short Color) 
{ 
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE); // oppure system("COLOR E9"); 
SetConsoleTextAttribute(hCon,Color); 
}

int main(){
   int x, y, i;
   i=0;
    x=0;
    y=0;
   
while(i>=0){
    {while(i<10){
        SetColor(9);
        gotoxy(x+=1,y+=1);
       cout<<"*****";
       gotoxy(x+=1,y+=1);
       cout<<"*****";

        system("color 3A");
        system("CLS");
        x++;
        y++;
        i++;}
        
while(i<20){
    SetColor(9);
       gotoxy(x+=1,y-=1);
       cout<<"*****";
       gotoxy(x+=1,y-=1);
       cout<<"*****";
       system("color 3A");
       system("CLS");
       x+=1;
      y-=1;
  i++;}
  i=0;
  
  while(i<10){
    SetColor(9);
        gotoxy(x,y);
       cout<<"*****";
       gotoxy(x-=1,y+=1);
       cout<<"*****";
       
       system("color 3A");
       system("CLS");
       x-=1;
      y+=1;
  i++;}
  i=0;
   while(i<20){
    SetColor(9);
        gotoxy(x,y);
       cout<<"*****";
       gotoxy(x-=1,y+=1);
       cout<<"*****";
       
       system("color 3A");
       system("CLS");
       x-=1;
      y+=1;
  i++;}
  i=0;}}
    cout<<endl;    
    system("pause");
    return 1;
}
