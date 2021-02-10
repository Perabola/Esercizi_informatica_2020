#include <iostream>
using namespace std;
int ris;

int SUP(int, int);

int main (){
    cout<<"multipli di due :\n"<<SUP(2,1)<<endl;
    return 0;
}

int SUP(int a,int b){
    if(b!=0)
        ris=0;
    else{
        a*=b;
        ++b;
        ris=SUP(a,b);
    }
    return ris;

}
