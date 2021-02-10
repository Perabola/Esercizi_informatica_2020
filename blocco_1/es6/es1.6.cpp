#include <iostream>
#include <math.h>
using namespace std;
long double eulero(long double);
long double fact(long double);
long double x;
long double ris;
long double e;
int main (){
    long double euler;
    long double errore;
    cout<<"Digitare il numero di iterazioni per calcolare la costante di eulero:\n";
    cin>>x;
    euler=1+eulero(x); 
    errore= exp(1)-euler;   
    cout<<"e calcolato = "<<euler<<endl;
    cout<<"errore = "<<exp(1)<<" - "<<euler<<" = "<<errore;
    return 0;
}

long double fact(long double n){
    if(n==0) ris=1;
    else ris=fact(n-1)*n;
    
    return ris;
}

long double eulero(long double n){
    if(n==1) e=1/fact(n);
    else e=(1/fact(n))+eulero(n-1);
    
    return e;
}