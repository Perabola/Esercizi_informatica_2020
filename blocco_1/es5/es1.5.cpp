#include <iostream>
using namespace std;

int x;
long long ris;

long long SUP(int);

long long SUP(int n){

    if(n==0)
        ris=1;
    else{
        ris=SUP(n-1)*n;
    }

    return ris;
}

int main(){
    cout<<"Digitare una cifra per il calcolo del suo fattoriale:\n";
    cin>>x;
    cout<<x<<"!= "<<SUP(x)<<endl;
    return 0;
}