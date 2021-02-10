/*
SUP un programma che usa due funzioni di conversione della temperatura, da Celsius a Fahrenheit e
viceversa. Il programma stampa una tabella ben formattata con entrambe le scale da -40 a +250 gradi
Celsius, a intervalli di 0.25 gradi
*/
#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;

float cel_fa(float);
float cel_ke(float);

int main(){
    cout<<"Celsius"<<"      "<<"Kelvin"<<"      "<<"Fahrenheit"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    for(float i=-40; i<=250; i+=0.25){
        cout<<i<<"      "<<cel_ke(i)<<"     "<<cel_fa(i)<<endl;
    }
     return 0;
}

float cel_ke(float c){
    float k=c+273.15;
    return k;
}

float cel_fa(float c){
    float f= (c*(9/5))+32;
    return f;
}