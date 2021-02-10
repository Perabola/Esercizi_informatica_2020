#include <iostream>
using namespace std;
long long num; 
long long lol;
long long top;
bool ris;
bool PALI5(long long);
long long ultima(long long);
long long cifra(long long,long long);
bool PALI(long long);

int main (){

    cout<<"Digitare il numero di cui si vuole verificare la Palindromia\n";
    cin>>num;
    cout<<"Questo numero ha "<<ultima(num)<<" cifre\n";
    if(ultima(num)==5)
        if(PALI5(num)==true) cout<<"Questo numero e' Palindromo\n";
        else cout<<"Questo numero non e' Palindromo\n";

    else if(PALI(num)==true) cout<<"Questo numero e' Palindromo\n";
         
         else cout<<"Questo numero non e' palindromo\n";
    

    return 0;
}

bool PALI5(long long x){           //Verifica palindromia di un numero a 5 cifre;

    if(cifra(x,1)==cifra(x,5) && cifra(x,2)==cifra(x,4)) ris=true;
    else ris=false;

    return ris;
    
}

bool PALI(long long x){            //verifica palindromia di un qualsiasi numero int;
    long long i=ultima(x);
    long long f=1;
    while(i>=ultima(x)/2){
        if(cifra(x,i)==cifra(x,f)) ris=true;
        else{
            ris=false;
            break;
        } 
        --i;
        ++f;
    }
    return ris;
}

long long cifra(long long a,long long b) {     // identificatore di una determinata cifra;

    long long esp1=1;                  
    for(long long i=1; i<=b; ++i){
        esp1*=10;
    }   
    long long resto;
    resto=a%=esp1;           
    long long c=b-1,esp2=1;            
    for(long long g=1; g<=c; ++g) {
        esp2*=10;
    }
    lol=resto/esp2;
    return lol;
}

long long ultima(long long x){           // Restituisce il numero di cifre del numero;
    for(long long i=1; x!=0; ++i){
        x/=10;
        top=i;
    }
    return top;
}
