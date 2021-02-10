#include <iostream>
using namespace std;
int ris;
int x,y;
int SUP(int,int);

int main (){
    cout<<"INSERIRE NUMERO\n",cin>>x;
    cout<<"INSERIRE INDICE\n",cin>>y;
    cout<<"CIFRA : "<<SUP(x,y)<<endl;
    return 0;
}

int SUP(int a,int b) {  
    int esp1=1;                  // esp1 == y;
    for(int i=1; i<=b; ++i){
        esp1*=10;
    }   
    int resto;
    resto=a%=esp1;           
    int c=b-1,esp2=1;            // esp2 == y-1;
    for(int g=1; g<=c; ++g) {
        esp2*=10;
    }
    ris=resto/esp2;
    return ris;
}

