/*
SUP che data una stringa in input calcola le occorrenze di ogni carattere. Risolvere il problema usando un
unico array per contare le occorrenze. Stampare il risultato in tabella, con possibili interessanti statistiche
a vostra discrezione. Considerare solo lettere dell'alfabeto, maiuscole e minuscole fanno parte dello stesso
conteggio. Scartare tutto ciò che non è una lettera, per semplicità si scartano anche i caratteri della
tabella ASCII estesa come le lettere accentate.
*//*
Info: Tenere a mente come sono rappresentate le lettere nella tabella ASCII. È possibile indicizzare
l'array dove incrementiamo mano a mano il conteggio usando direttamente la lettera sotto esame e
applicando un oset. Ad esempio la lettera D, quarta nell'alfabeto quindi avente indice 3, ha valore
ASCII 44, oppure anche 64 nel nostro caso. Sottraendo un oset di 41 o di 61 rispettivamente,
troviamo il nostro indice di valore 3.
i
*//*
Estensione avanzata: Invece che prendere in input una stringa dell'utente, prendere in input
il nome di un le di testo plain-text, in altre parole un le .txt. È possibile trovare online interi
testi in formato .txt, come ad esempio I Promessi Sposi, oppure anche La Divina Commedia. La
manipolazione di le in C++ usa lo stesso paradigma di uso della console. Trovate qui quello che vi
serve specicatamente per risolvere questo esercizio, in particolare basatevi sull'esempio.
*/


#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <sstream>
#define len 1000
using namespace std;
char input[len];
char alpha[26];
int alphacounter(char in[], char token);
int main(){

    for(int i=97; i<=122; ++i){
        alpha[i-97]=(char) i;
    }

    
    cout<<"inserire testo:\n";
    cin.getline(input,sizeof(input));
    int offset=0;
    for(int i=0; i<sizeof(input); ++i){
        if(!ispunct(input[i])){
            input[i-offset]=tolower(input[i]);  
        }else ++offset;
    }
    offset=0;
    for(int j=0; j<sizeof(input); ++j){
        if(!isspace(input[j])){
            input[j-offset]=input[j];
        }else ++offset;
    }
    cout<<"I seguenti caratteri sono stati ripetuti : \n";
    for(int e=0; e<sizeof(alpha); ++e){
        cout<<alpha[e]<<" :    "<<alphacounter(input,alpha[e])<<" volte"<<endl;
    }
    

    return 0;
}

int alphacounter(char in[],char token){
    char*pc=strchr(in,token);
    int count=0;
    while(pc!=NULL){
        ++count;
        pc=strchr(pc+1,token);
    }
    return count;    
}