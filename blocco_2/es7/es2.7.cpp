/*SUP che calcola la media dei voti di un esame. 
  Il programma si fa dare prima il numero totale di studenti,
  poi i voti. Supporre un limite massimo di studenti.
*/
#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;

int len;
void media(float voti[]);

int main(){
    cout<<"Quanti studenti?\n";
    cin>>len;
    float *input= new float[len+1];
    cout<<"Inserire voti:"<<endl;
    for(int i=0; i<len; ++i){
        cin>>input[i];
    }
    cout<<"Media:  ";
    media(input);
    delete[] input;
    return 0;

}

void media(float voti[]){
    float ris=0;
    for(int i=0; i<len; ++i){
        ris=ris+voti[i]; 
    }   
    cout<<(int)round(ris/len);
}