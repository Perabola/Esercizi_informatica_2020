/*
    Trovare il numero più grande in un array è un problema ricorrente in programmazione. SUP che dati 10
    numeri, inseriti dall'utente, restituisce il numero più grande.
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;

int len;
void fat(float numbers[]);

int main(){
    cout<<"Quanti numeri inserire?\n";
    cin>>len;
    float *input= new float[len-1];
    cout<<"Inserire i numeri:  \n";
    for(int i=0; i<len; ++i){
        cin>>input[i];
    }
    cout<<"Il Piu grande e':  ";
    fat(input);
    delete[] input;
    return 0;
}

void fat(float numbers[]){
    float ris=numbers[0];
    for(int i=1; i<len; ++i){
        if(ris>numbers[i])
            ris=ris;
        else ris=numbers[i];   
    }
    cout<<ris;
}