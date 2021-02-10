#include <iostream>
using namespace std;

int SUP(int,int);      // definizione di una funzione;
int SUS(int,int);
int ris;

int main () {
    int x, y;
    cout<<"INSERIRE LA BASE\n",cin>>x;
    cout<<"INSERIRE L'ESPONENTE\n",cin>>y;
    cout<<"RISULTATO....\n"
        <<"FOR:"<<SUP(x,y)<<"\n"
        <<"WHILE:"<<SUS(x,y)<<endl;  // chiamata di una funzione ;
    return 0;
}

int SUP(int a,int b) {   // Dichiarazione di una funzione ;
    int lol=1;
    for(int i=1; i<=b; ++i){
        lol*=a;
    }
    ris=lol;
    return ris;
}

int SUS(int a,int b) {
    int lol=1;
    int i=1;
    while(i<=b) {
        lol*=a;
        ++i;
    }
    ++lol;
    ris=lol;
    return ris;
}