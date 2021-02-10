/*
    Un intero è detto perfetto quando la somma dei suoi fattori restituisce il numero stesso. Ad esempio 6 è
    numero perfetto essendo che 1 + 2 + 3 = 6. Scrivere una funzione che determina se un numero è perfetto.
    Usarla per ricavare tutti i numeri perfetti da 1 a 1000
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;

bool perfetto(int n);
bool is_prime(int n);

int num;

int main(){
    cout<<"inserire cifra :   ";
    cin>>num;
    if(perfetto(num)) cout<<"Questo numero e' PERFETTO.\n";
    else cout<<"Questo numero NON e' perfetto.\n";
    cout<<"Interi Perfetti da 1 a 10000 : \n";
    for(int i=1; i<=10000; ++i){
        if(perfetto(i))
            cout<<i<<" ; ";
    }
    return 0;
}


bool perfetto(int n){

    int sum=0;

    if(is_prime(n) || n==0 || n==1)
        return false;
    else{
        for(int i=1; i<=n/2; ++i){
            if(n%i==0){
                sum=sum+i;
            }

        }
        if(sum!=n){
            return false;
        }
        
    }

    return true;
}

bool is_prime(int n){
    if(n==0 || n==1){
        return false;
    }else{
        for(int i=2; i<=n/2; ++i){
            if(n%i==0)
                return false;         
        }
    }
    return true;
}