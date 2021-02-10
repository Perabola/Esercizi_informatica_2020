/*
SUP che prende una stringa dall'utente che può essere anche una frase, comprensiva quindi di spazi e
punteggiatura. Il programma ristampa la stessa stringa al contrario.
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;

const int LEN=100;
char input[LEN];
char output[LEN];


int main(){
    cout<<"Inseire frase:\n";
    cin.getline(input,sizeof(input));
    cout<<"Frase al contrario:\n";
    int offset=0;
    int len=strlen(input);
    for(int i=len-1; i>=0; --i){
        output[offset]=input[i];
        cout<<output[offset];
        ++offset;    
        
    }
    return 0;


}