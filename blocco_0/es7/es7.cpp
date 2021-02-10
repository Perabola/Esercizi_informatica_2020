using namespace std;
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    int n;
    cout<<"INSERIRE UN NUMERO\n";
    cin>>n;
    if(n%2==0) {
        cout<<n<<"  E' UN NUMERO PARI\n";
    }
    else{
        cout<<n<<"  E' UN NUMERO DISPARI\n";
    }
    return 0;
}