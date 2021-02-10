/*
    SUB che sceglie un numero a random tra 1 e 1000. Usare la funzione rand per fare questo. L'utente poi
    inserisce numeri ntanto che non azzecca la risposta corretta. Il programma guida l'utente rispondendo
    se il tentativo era maggiore o minore del numero estratto. È una ricerca di tipo binario.
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define MAX 1000;
using namespace std;

int main(){

    srand(time(NULL));
    int NUM= rand()%MAX;
    int igues;

    cout<<"Indovina Il numero da 0 a 1000 :\n";

    int i=0;
    while(i!=1){
        cin>>igues;
        if(igues==NUM){
            cout<<"CONGRATULAZIONI !!!!! il numero da indovinare era  "<<NUM<<" HAI VINTO !!! .\n";
            i=1;
        }else{
            if(igues>NUM){
                cout<<"Ritenta sarai piu fortunato!! Il numero che stai cercando e' piu' piccolo!!\n";
            }else{
                cout<<"Ritenta sarai piu fortunato!! Il numero che stai cercando e' piu' grande!!\n";
            }
        }
    }

    return 0;

}