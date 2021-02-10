using namespace std;
#include <iostream> 
int main() { // somma,prodotto,differenza,divisione di due cifre;
     int x;
     int y;
     int S=0;
     int P=0;
     int D=0;
     int Q=0;
     int r=0;
     cout<<"inserire la prima cifra\n";
     cin>>x;
     cout<<"inserire la seconda cifra\n";
     cin>>y;
     S=x+y;
     P=x*y;
     D=x-y;
     Q=x/y;
     r=x%y;
     cout<<"SOMMA........."<<S<<endl;
     cout<<"PRODOTTO......"<<P<<endl;
     cout<<"DIFFERENZA...."<<D<<endl;
     cout<<"DIVISIONE....."<<Q<<endl;
     cout<<"RESTO........."<<r<<endl;
     return 0;
}