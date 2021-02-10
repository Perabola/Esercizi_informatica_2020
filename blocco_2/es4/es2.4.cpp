/*SUP che legge diversi numeri decimali e successivamente ristampa questi approssimati all'intero più
vicino. Usare la funzione di libreria round. Stampare i numeri come interi, quindi non 42.0 ma 42.
*/
#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;

float n;
int len;

int main(){
    cout<<"quanti numeri si vogliono aprossimare?\n";
    cin>>len;
    cout<<"Inserire il numero decimale da aprossimare:\n";
    cout<<"(0 per terminare il programma)"<<endl;
    

    for(int i=0; i<len; ++i){
        cin>>n;
        cout<<"    Aprossimazione: "<<(int)round(n)<<endl;
        
    }
    return 0;

}