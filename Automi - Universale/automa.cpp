#include <iostream>
#include <conio.c>
using namespace std;
int main () {
int r,cp,cd,x,y,a;
//Start
do{
    textcolor(7);       
    clrscr();
    gotoxy(0,0);
    cout<<"Stato: BUOIO (0,0,0,0,0,0,0,0,0,0).\n";
    gotoxy(0,1);   
    cout<<"Inserisci 1 per avviare l'insegna luminosa.\n";
    cin>>a;
    for(int i=0; i<3; i++){
        if(a==1){
            //Ritardo
            r=200000099;
            //Colore numeri dispari
            cd=10;
            //Colore numeri pari
            cp=12;
            //Valore della coordinata x
            x=4;
            //Valore della coordinata y
            y=9;
            //Stampa Insegna al buio
            textcolor(8);
            // _   _ 
            //| | | |
            //| | | |
            //| | | |
            //| |_| |
            //\_____/
            gotoxy(x,y);
            cout<<" _   _ "<<endl;
            gotoxy(x,y+1);
            cout<<"| | | |"<<endl;
            gotoxy(x,y+2);
            cout<<"| | | |"<<endl;
            gotoxy(x,y+3);
            cout<<"| | | |"<<endl;
            gotoxy(x,y+4);
            cout<<"| |_| |"<<endl;
            gotoxy(x,y+5);
            cout<<(char)92<<"_____/"<<endl;
            // __   _ 
            //|  \ | | 
            //|   \| |
            //| |\   |
            //| | \  |
            //|_|  \_|
            gotoxy(x+7,y);
            cout<<" __   _ "<<endl;
            gotoxy(x+7,y+1);
            cout<<"|  "<<(char)92<<" | | "<<endl;
            gotoxy(x+7,y+2);
            cout<<"|   "<<(char)92<<"| |"<<endl;
            gotoxy(x+7,y+3);
            cout<<"| |"<<(char)92<<"   |"<<endl;
            gotoxy(x+7,y+4);
            cout<<"| | "<<(char)92<<"  |"<<endl;
            gotoxy(x+7,y+5);
            cout<<"|_|  "<<(char)92<<"_|"<<endl;
            // _ 
            //| | 
            //| |
            //| |
            //| |
            //|_|
            gotoxy(x+15,y);
            cout<<" _ "<<endl;
            gotoxy(x+15,y+1);
            cout<<"| |"<<endl;
            gotoxy(x+15,y+2);
            cout<<"| |"<<endl;
            gotoxy(x+15,y+3);
            cout<<"| |"<<endl;
            gotoxy(x+15,y+4);
            cout<<"| |"<<endl;
            gotoxy(x+15,y+5);
            cout<<"|_|"<<endl;
            // _     _  
            //| |   / /
            //| |  / /
            //| | / /  
            //| |/ /
            //|___/ 
            gotoxy(x+18,y);
            cout<<" _     _ "<<endl;
            gotoxy(x+18,y+1);
            cout<<"| |   / /"<<endl;
            gotoxy(x+18,y+2);
            cout<<"| |  / /"<<endl;
            gotoxy(x+18,y+3);
            cout<<"| | / /"<<endl;
            gotoxy(x+18,y+4);
            cout<<"| |/ /"<<endl;
            gotoxy(x+18,y+5);
            cout<<"|___/"<<endl;
            // _____ 
            //| ____|
            //| |__ 
            //|  __|
            //| |___
            //|_____|
            gotoxy(x+27,y);
            cout<<" _____ "<<endl;
            gotoxy(x+27,y+1);
            cout<<"| ____|"<<endl;
            gotoxy(x+27,y+2);
            cout<<"| |__ "<<endl;
            gotoxy(x+27,y+3);
            cout<<"|  __|"<<endl;
            gotoxy(x+27,y+4);
            cout<<"| |___"<<endl;
            gotoxy(x+27,y+5);
            cout<<"|_____|"<<endl;
            // _____ 
            //|  _  \
            //| |_| | 
            //|  _  /
            //| | \ \
            //|_|  \_\
            
            
            gotoxy(x+34,y);
            cout<<" _____ "<<endl;
            gotoxy(x+34,y+1);
            cout<<"|  _  "<<(char)92<<endl;
            gotoxy(x+34,y+2);
            cout<<"| |_| | "<<endl;
            gotoxy(x+34,y+3);
            cout<<"|  _  /"<<endl;
            gotoxy(x+34,y+4);
            cout<<"| | "<<(char)92<<" "<<(char)92<<endl;
            gotoxy(x+34,y+5);
            cout<<"|_|  "<<(char)92<<"_"<<(char)92<<endl;
            // _____  
            ///  ___/
            //| |___   
            //\___  \ 
            // ___| | 
            ///_____/
            gotoxy(x+42,y);
            cout<<" _____  "<<endl;
            gotoxy(x+42,y+1);
            cout<<"/  ___/"<<endl;
            gotoxy(x+42,y+2);
            cout<<"| |___  "<<endl; 
            gotoxy(x+42,y+3);
            cout<<(char)92<<"___  "<<(char)92<<" "<<endl;
            gotoxy(x+42,y+4);
            cout<<" ___| | "<<endl;
            gotoxy(x+42,y+5);
            cout<<"/_____/"<<endl;
            //     ___  
            //    /   | 
            //   / /| | 
            //  / / | |   
            // / /  | | 
            ///_/   |_|  
            gotoxy(x+49,y);
            cout<<"     ___ "<<endl; 
            gotoxy(x+49,y+1);
            cout<<"    /   |"<<endl; 
            gotoxy(x+49,y+2);
            cout<<"   / /| |"<<endl; 
            gotoxy(x+49,y+3);
            cout<<"  / / | |"<<endl;
            gotoxy(x+49,y+4);  
            cout<<" / /  | |"<<endl; 
            gotoxy(x+49,y+5);
            cout<<"/_/   |_|"<<endl;    
            // _     
            //| |      
            //| |    
            //| |    
            //| |___ 
            //|_____|
            gotoxy(x+58,y);
            cout<<" _ "<<endl; 
            gotoxy(x+58,y+1);   
            cout<<"| |"<<endl;
            gotoxy(x+58,y+2);      
            cout<<"| |"<<endl;
            gotoxy(x+58,y+3);  
            cout<<"| |"<<endl;
            gotoxy(x+58,y+4);     
            cout<<"| |___"<<endl; 
            gotoxy(x+58,y+5);
            cout<<"|_____|"<<endl; 
            // _____ 
            //| ____|
            //| |__ 
            //|  __|
            //| |___
            //|_____|
            gotoxy(x+65,y);
            cout<<" _____ "<<endl;
            gotoxy(x+65,y+1);
            cout<<"| ____|"<<endl;
            gotoxy(x+65,y+2);
            cout<<"| |__ "<<endl;
            gotoxy(x+65,y+3);
            cout<<"|  __|"<<endl;
            gotoxy(x+65,y+4);
            cout<<"| |___"<<endl;
            gotoxy(x+65,y+5);
            cout<<"|_____|"<<endl;
            //Inzio illuminazione.
            // _   _ 
            //| | | |
            //| | | |
            //| | | |
            //| |_| |
            //\_____/
            //Stati e uscite
            textcolor(7); 
            gotoxy(0,3);
            cout<<"Stato: A1 (1,0,0,0,0,0,0,0,0,0).\n";
            textcolor(cd);
            gotoxy(11,3);
            cout<<"1";
            //Illuminazione
            gotoxy(x,y);
            cout<<" _   _ "<<endl;
            gotoxy(x,y+1);
            cout<<"| | | |"<<endl;
            gotoxy(x,y+2);
            cout<<"| | | |"<<endl;
            gotoxy(x,y+3);
            cout<<"| | | |"<<endl;
            gotoxy(x,y+4);
            cout<<"| |_| |"<<endl;
            gotoxy(x,y+5);
            cout<<(char)92<<"_____/"<<endl;
            for(int i=1;i<r;i++);  
            // _ 
            //| | 
            //| |
            //| |
            //| |
            //|_|
            //Stati e uscite
            textcolor(7); 
            gotoxy(0,4);
            cout<<"Stato: A3 (1,0,1,0,0,0,0,0,0,0).\n";
            textcolor(cd);
            gotoxy(11,4);
            cout<<"1";
            gotoxy(15,4);
            cout<<"1";
            //Illuminazione
            gotoxy(x+15,y);
            cout<<" _ "<<endl;
            gotoxy(x+15,y+1);
            cout<<"| |"<<endl;
            gotoxy(x+15,y+2);
            cout<<"| |"<<endl;
            gotoxy(x+15,y+3);
            cout<<"| |"<<endl;
            gotoxy(x+15,y+4);
            cout<<"| |"<<endl;
            gotoxy(x+15,y+5);
            cout<<"|_|"<<endl;
            for(int i=1;i<r;i++); 
            // _____ 
            //| ____|
            //| |__ 
            //|  __|
            //| |___
            //|_____|
            //Stati e uscite
            textcolor(7); 
            gotoxy(0,5);
            cout<<"Stato: A5 (1,0,1,0,1,0,0,0,0,0).\n";
            textcolor(cd);
            gotoxy(11,5);
            cout<<"1";
            gotoxy(15,5);
            cout<<"1";
            gotoxy(19,5);
            cout<<"1";
            //Illuminazione
            gotoxy(x+27,y);
            cout<<" _____ "<<endl;
            gotoxy(x+27,y+1);
            cout<<"| ____|"<<endl;
            gotoxy(x+27,y+2);
            cout<<"| |__ "<<endl;
            gotoxy(x+27,y+3);
            cout<<"|  __|"<<endl;
            gotoxy(x+27,y+4);
            cout<<"| |___"<<endl;
            gotoxy(x+27,y+5);
            cout<<"|_____|"<<endl;
            for(int i=1;i<r;i++); 
            // _____  
            ///  ___/
            //| |___   
            //\___  \ 
            // ___| | 
            ///_____/
            //Stati e uscite
            textcolor(7); 
            gotoxy(0,6);
            cout<<"Stato: A7 (1,0,1,0,1,0,1,0,0,0).\n";
            textcolor(cd);
            gotoxy(11,6);
            cout<<"1";
            gotoxy(15,6);
            cout<<"1";
            gotoxy(19,6);
            cout<<"1";
            gotoxy(23,6);
            cout<<"1";
            //Illuminazione
            gotoxy(x+42,y);
            cout<<" _____  "<<endl;
            gotoxy(x+42,y+1);
            cout<<"/  ___/"<<endl;
            gotoxy(x+42,y+2);
            cout<<"| |___  "<<endl; 
            gotoxy(x+42,y+3);
            cout<<(char)92<<"___  "<<(char)92<<" "<<endl;
            gotoxy(x+42,y+4);
            cout<<" ___| | "<<endl;
            gotoxy(x+42,y+5);
            cout<<"/_____/"<<endl;
            for(int i=1;i<r;i++); 
            // _     
            //| |      
            //| |    
            //| |    
            //| |___ 
            //|_____|
             //Stati e uscite
            textcolor(7); 
            gotoxy(0,7);
            cout<<"Stato: A9 (1,0,1,0,1,0,1,0,1,0).\n";
            textcolor(cd);
            gotoxy(11,7);
            cout<<"1";
            gotoxy(15,7);
            cout<<"1";
            gotoxy(19,7);
            cout<<"1";
            gotoxy(23,7);
            cout<<"1";
            gotoxy(27,7);
            cout<<"1";
            //Illuminazione
            gotoxy(x+58,y);
            cout<<" _ "<<endl; 
            gotoxy(x+58,y+1);   
            cout<<"| |"<<endl;
            gotoxy(x+58,y+2);      
            cout<<"| |"<<endl;
            gotoxy(x+58,y+3);  
            cout<<"| |"<<endl;
            gotoxy(x+58,y+4);     
            cout<<"| |___"<<endl; 
            gotoxy(x+58,y+5);
            cout<<"|_____|"<<endl; 
            for(int i=1;i<r;i++); 
            // _____ 
            //| ____|
            //| |__ 
            //|  __|
            //| |___
            //|_____|
            //Tabella di divisione grafica
            textcolor(7);
            gotoxy(33,3);
            cout<<"|";
            gotoxy(33,4);
            cout<<"|";
            gotoxy(33,5);
            cout<<"|";
            gotoxy(33,6);
            cout<<"|";
            gotoxy(33,7);
            cout<<"|";
            //Stati e uscite
            textcolor(7); 
            gotoxy(35,3);
            cout<<"Stato: A10 (1,0,1,0,1,0,1,0,1,1).\n";
            textcolor(cd);
            gotoxy(47,3);
            cout<<"1";
            gotoxy(51,3);
            cout<<"1";
            gotoxy(55,3);
            cout<<"1";
            gotoxy(59,3);
            cout<<"1";
            gotoxy(63,3);
            cout<<"1";
            textcolor(cp);
            gotoxy(65,3);
            cout<<"1";
            //Illuminazione
            gotoxy(x+65,y);
            cout<<" _____ "<<endl;
            gotoxy(x+65,y+1);
            cout<<"| ____|"<<endl;
            gotoxy(x+65,y+2);
            cout<<"| |__ "<<endl;
            gotoxy(x+65,y+3);
            cout<<"|  __|"<<endl;
            gotoxy(x+65,y+4);
            cout<<"| |___"<<endl;
            gotoxy(x+65,y+5);
            cout<<"|_____|"<<endl;
            for(int i=1;i<r;i++); 
            //     ___  
            //    /   | 
            //   / /| | 
            //  / / | |   
            // / /  | | 
            ///_/   |_|   
            //Stati e uscite
            textcolor(7); 
            gotoxy(35,4);
            cout<<"Stato: A8 (1,0,1,0,1,0,1,1,1,1).\n";
            textcolor(cd);
            gotoxy(46,4);
            cout<<"1";
            gotoxy(50,4);
            cout<<"1";
            gotoxy(54,4);
            cout<<"1";
            gotoxy(58,4);
            cout<<"1";
            gotoxy(62,4);
            cout<<"1";
            textcolor(cp);
            gotoxy(64,4);
            cout<<"1";
            gotoxy(60,4);
            cout<<"1";
            //Illuminazione
            gotoxy(x+49,y);
            cout<<"     ___ "<<endl; 
            gotoxy(x+49,y+1);
            cout<<"    /   |"<<endl; 
            gotoxy(x+49,y+2);
            cout<<"   / /| |"<<endl; 
            gotoxy(x+49,y+3);
            cout<<"  / / | |"<<endl;
            gotoxy(x+49,y+4);  
            cout<<" / /  | |"<<endl; 
            gotoxy(x+49,y+5);
            cout<<"/_/   |_|"<<endl; 
            for(int i=1;i<r;i++); 
            // _____ 
            //|  _  \
            //| |_| | 
            //|  _  /
            //| | \ \
            //|_|  \_\
            
            //Stati e uscite
            textcolor(7); 
            gotoxy(35,5);
            cout<<"Stato: A6 (1,0,1,0,1,1,1,1,1,1).\n";
            textcolor(cd);
            gotoxy(46,5);
            cout<<"1";
            gotoxy(50,5);
            cout<<"1";
            gotoxy(54,5);
            cout<<"1";
            gotoxy(58,5);
            cout<<"1";
            gotoxy(62,5);
            cout<<"1";
            textcolor(cp);
            gotoxy(64,5);
            cout<<"1";
            gotoxy(60,5);
            cout<<"1";
            gotoxy(56,5);
            cout<<"1";
            //Illuminazione
            gotoxy(x+34,y);
            cout<<" _____ "<<endl;
            gotoxy(x+34,y+1);
            cout<<"|  _  "<<(char)92<<endl;
            gotoxy(x+34,y+2);
            cout<<"| |_| | "<<endl;
            gotoxy(x+34,y+3);
            cout<<"|  _  /"<<endl;
            gotoxy(x+34,y+4);
            cout<<"| | "<<(char)92<<" "<<(char)92<<endl;
            gotoxy(x+34,y+5);
            cout<<"|_|  "<<(char)92<<"_"<<(char)92<<endl;
            for(int i=1;i<r;i++); 
            // _     _  
            //| |   / /
            //| |  / /
            //| | / /  
            //| |/ /
            //|___/ 
            //Stati e uscite
            textcolor(7); 
            gotoxy(35,6);
            cout<<"Stato: A4 (1,0,1,1,1,1,1,1,1,1).\n";
            textcolor(cd);
            gotoxy(46,6);
            cout<<"1";
            gotoxy(50,6);
            cout<<"1";
            gotoxy(54,6);
            cout<<"1";
            gotoxy(58,6);
            cout<<"1";
            gotoxy(62,6);
            cout<<"1";
            textcolor(cp);
            gotoxy(64,6);
            cout<<"1";
            gotoxy(60,6);
            cout<<"1";
            gotoxy(56,6);
            cout<<"1";
            gotoxy(52,6);
            cout<<"1";
            //Illuminazione
            gotoxy(x+18,y);
            cout<<" _     _ "<<endl;
            gotoxy(x+18,y+1);
            cout<<"| |   / /"<<endl;
            gotoxy(x+18,y+2);
            cout<<"| |  / /"<<endl;
            gotoxy(x+18,y+3);
            cout<<"| | / /"<<endl;
            gotoxy(x+18,y+4);
            cout<<"| |/ /"<<endl;
            gotoxy(x+18,y+5);
            cout<<"|___/"<<endl;
            for(int i=1;i<r;i++);
            // __   _ 
            //|  \ | | 
            //|   \| |
            //| |\   |
            //| | \  |
            //|_|  \_|
            //Stati e uscite
            textcolor(7); 
            gotoxy(35,7);
            cout<<"Stato: A4 (1,1,1,1,1,1,1,1,1,1).\n";
            textcolor(cd);
            gotoxy(46,7);
            cout<<"1";
            gotoxy(50,7);
            cout<<"1";
            gotoxy(54,7);
            cout<<"1";
            gotoxy(58,7);
            cout<<"1";
            gotoxy(62,7);
            cout<<"1";
            textcolor(cp);
            gotoxy(64,7);
            cout<<"1";
            gotoxy(60,7);
            cout<<"1";
            gotoxy(56,7);
            cout<<"1";
            gotoxy(52,7);
            cout<<"1";
            gotoxy(48,7);
            cout<<"1";
            //Illuminazione
            gotoxy(x+7,y);
            cout<<" __   _ "<<endl;
            gotoxy(x+7,y+1);
            cout<<"|  "<<(char)92<<" | | "<<endl;
            gotoxy(x+7,y+2);
            cout<<"|   "<<(char)92<<"| |"<<endl;
            gotoxy(x+7,y+3);
            cout<<"| |"<<(char)92<<"   |"<<endl;
            gotoxy(x+7,y+4);
            cout<<"| | "<<(char)92<<"  |"<<endl;
            gotoxy(x+7,y+5);
            cout<<"|_|  "<<(char)92<<"_|"<<endl;
            //Ritardo x8 insegna accesa.
            for(int e=1;e<8;e++){
                    for(int i=1;i<r;i++);
            }
        clrscr();    
        }        
    }
}while(a==1);
textcolor(7);
exit;}
