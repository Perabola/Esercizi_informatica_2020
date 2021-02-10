/*
    Trovare i due numeri più grande in un array è un problema ricorrente in programmazione. SUP che dati 10
    numeri, inseriti dall'utente, restituisce i due numeri piu grandi.
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;


int len;
float fat(float numbers[]);

int main(){
    cout<<"Quanti numeri inserire?\n";
    cin>>len;
    float *input= new float[len-1];
    float *input2=new float[len-2];
    cout<<"Inserire i numeri:  \n";
    for(int i=0; i<len; ++i){
        cin>>input[i];
    }
    cout<<"Il Piu grande e':  ";
    cout<<fat(input)<<endl;
    int offset=0;
    for(int j=0; j<len-1; ++j){
        if(input[j]!=fat(input))
            input2[j-offset]=input[j];
        else offset++;
    }
    cout<<"Il secondo Piu grande e' :  ";
    cout<<fat(input2);
    delete[] input;
    delete[] input2;
    return 0;
}

float fat(float numbers[]){
    float ris=numbers[0];
    for(int i=1; i<len; ++i){
        if(ris>numbers[i])
            ris=ris;
        else ris=numbers[i];   
    }
    return ris;
}