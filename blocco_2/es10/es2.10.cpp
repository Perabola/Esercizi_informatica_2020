/*
    Modificare il programma dei numeri primi cambiando il limite superiore della ricerca di divisori perfetti
    con la radice del numero sotto esame, anziché la sua metà. Confrontare l'output del nuovo algoritmo con
    quello vecchio.

*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
#include <chrono>
using namespace std::chrono;
using namespace std;


bool is_prime(int n);

bool is_prime_opt(int n);

int MAX;

int main(){

    cout<<"Inserire valore massimo : \n";
    cin>>MAX;

    int counter=0;

    auto start= high_resolution_clock::now();
    for(int i=0; i<MAX; ++i){
        if(is_prime(i)){
            counter++;
        }
    }

    auto stop= high_resolution_clock::now();
    auto duration= duration_cast<milliseconds>(stop-start);

    cout<<"""is_prime"" ha trovato "<<counter<<" numeri primi in  "<<duration.count()<<"ms.\n";

    counter=0;

    start= high_resolution_clock::now();
    for(int i=0; i<MAX; ++i){
        if(is_prime_opt(i)){
            counter++;
        }
    }

    stop= high_resolution_clock::now();
    duration= duration_cast<milliseconds>(stop-start);

    cout<<"""is_prime_opt"" ha trovato "<<counter<<" numeri primi in  "<<duration.count()<<"ms.\n";

    return 0;

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


bool is_prime_opt(int n){

    if(n==0 || n==1){
        return false;
    }else{
        int limit=(int)sqrt((double)n);
        for(int i=2; i<limit; ++i){
            if(n%i==0)
                return false;
        }
    }
    return true;

}