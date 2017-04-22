#include <iostream>
#include <conio2.h>
using namespace std;
int main (){
int x,y;
x=1;
y=1;
while(x<10){
for(long int i=0;i<99999999;i++);  
gotoxy(x,y);
textcolor(12);
cout<<"*******\n";  
y++;
x++;}

while(x!=40){
for(long int i=0;i<99999999;i++);  
gotoxy(x,y);
textcolor(12);
cout<<"*******\n";  
y--;
x++;}

x=20;
y=1;
while(y!=16){
for(long int i=0;i<99999999;i++);  
gotoxy(x,y);
textcolor(12);
cout<<"*******\n";  
y++;}

y--;

gotoxy(27,y);
cout<<"AGGIO";

gotoxy(13,19);
textcolor(8);
system("pause");
}
