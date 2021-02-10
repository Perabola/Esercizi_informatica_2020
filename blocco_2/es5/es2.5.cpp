//SUP che calcola l'ipotenusa dati i due cateti.

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
using namespace std;
float pitagora(float, float);
float a;
float b;
int main(){

    cout<<"cateto 1:\n";
    cin>>a;
    cout<<endl;
    cout<<"cateto 2:\n";
    cin>>b;
    cout<<endl;
    cout<<"Ipotenusa:  "<<sqrt(a*a+b*b);
    return 0;

}
