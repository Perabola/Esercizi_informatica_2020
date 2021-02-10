#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

const int L=100;


bool paliStr(char toCheck[]);

char input[100];

int main(){

    cout<<"Digitare la frase"<<endl;
    cin.getline(input,L);
    cout<<endl;
    if(paliStr(input))
        cout<<"Questa frase e' palindroma."<<endl;
    else cout<<"Questa frase NON e' palindroma."<<endl;

    return 0;
}

bool paliStr(char toCheck[]){
    char clean[100];
    int offset=0;

    for(int i=0; i<L; ++i){

        if(!ispunct(toCheck[i])) clean[i-offset]=tolower(toCheck[i]);
        else offset++;
    }
    offset=0;
    char CLEAN[100];
    for(int j=0; j<L; ++j){
        if(!isspace(clean[j]))
            CLEAN[j-offset]=clean[j];
        else offset++;
    }
    bool ris;
    int cleanlen= strlen(CLEAN);
    for(int z=0; z<cleanlen/2; ++z){

        if(CLEAN[z]!=CLEAN[cleanlen-z-1]){
            ris=false;
            z=100;
        }else ris=true;
        
    }
    return ris;
}