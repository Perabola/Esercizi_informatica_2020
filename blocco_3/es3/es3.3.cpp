/*
Localizzare in una stringa tutte le occorrenze di un determinato carattere. Le stringhe in ingresso sono
composte di sole lettere minuscole e spazi. Il programma stampa la stessa stringa in ingresso con le
occorrenze trovate convertite a lettere maiuscole. Stampa inoltre un conteggio delle occorrenze.
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <sstream>
using namespace std;
#define LEN 100


int main(){

    char input[LEN];
    char token;
    int count=0;
    cout<<"Iserire testo:\n";
    cin.getline(input,sizeof(input));
    cout<<"inserire carattere:\n";
    cin>>token;
    char *ph=strchr(input,token);
    while(ph!=NULL){
        cout<<"Trovato in posizione : "<<ph-input<<endl;
        count++;
        *ph=toupper(*ph);
        ph=strchr(ph+1,token);
    }
    cout<<input<<endl;
    cout<<" "<<token<<" e' stato trovato "<<count<<" volte.\n";

    return 0;
}