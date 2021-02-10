/*
    SUP che prende in input (oppure scritti direttamente nel codice, nell'inizializzazione dell'array) 20 numeri
    e ristampa l'array ordinato per ordine ascendente. Usare due cicli innestati, dove quello più interno
    confronta due numeri adiacenti, scambiandoli se fuori ordine. Il ciclo esterno continua ntanto che
    durante un ciclo completo non avvengono più scambi, quando quindi tutti i numeri sono in ordine.
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;

const int len=20;
int *reorder(int a[]);
int fat(int numbers[]);

int disordinato[len];
int inorder[len];

int main(){

    cout<<"Inserire 20 numeri da riordinare :\n";
    for(int i=0; i<len; ++i){
        cin>>disordinato[i];
        
    }
    cout<<"Ecco i numeri in ordine ascendente : \n";
    int*y= reorder(disordinato);
    for(int j=0; j<len; ++j){
        cout<<y[j]<<" ; ";
    }
    return 0;

}



int *reorder(int a[]){
    int offset=len-1;
    for(int i=0; i<len; ++i){
        
        for(int j=0; j<len; ++j){

             
            if(a[j]==fat(a)){
                inorder[offset]=a[j];
                a[j]=0;
                --offset;
                j=len;
                  
             }
        }


    }
    return inorder;
}

int fat(int numbers[]){
    int ris=numbers[0];
    for(int i=1; i<len; ++i){
        if(ris>numbers[i])
            ris=ris;
        else ris=numbers[i];   
    }
    return ris;
}