#include <iostream>
using namespace std;


int xallay ();
void msundic();
void mandist();
int smn2 ();

int xallay(){
int x,y,r;
cout<<"Inserisci x.\n";
cin>>x;
cout<<"Inserisci y.\n";
cin>>y;
r=x;
for(int i=1;i<y;i++){
r*=x;
}
return r;}

void msundic(){
int m,n,c,r;

cout<<"Inserisci m.\n";
cin>>m;
cout<<"Inserisci n.\n";
cin>>n;
cout<<"Inserisci il numero.\n";
cin>>c;

r=c;

while(m<=n){
for(int i=1;i<m;i++)
r*=c;
cout<<c<<" elevato "<<m<<" = "<<r<<endl;
m++;
r=c;}    
}

void mandist(){
int m,n,c,r,s,t,m2;

cout<<"Inserisci m.\n";
cin>>m2;
cout<<"Inserisci n.\n";
cin>>n;
cout<<"Inserisci s.\n";
cin>>s;
cout<<"Inserisci t.\n";
cin>>t;

while(s<=t){  
    r=s;
    m=m2;
    while(m<=n){          
        for(int i=1;i<m;i++)
            r*=s;
        cout<<s<<" elevato "<<m<<" = "<<r<<endl;
        r=s;
        m++;
    }
s++;
}
}

int smn2(){
    
int m,n,r,r2=0;

cout<<"Inserisci m.\n";
cin>>m;
cout<<"Inserisci n.\n";
cin>>n;

r=2;

while(m<=n){
for(int i=1;i<m;i++)
r*=2;
r2+=r;
m++;
r=2;}

return r2;}

int main () {
     cout<<xallay()<<endl;
     msundic();
     mandist();
     cout<<smn2();
    system("pause");}
