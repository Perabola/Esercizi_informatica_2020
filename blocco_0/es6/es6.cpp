using namespace std;
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    int r;
    cout<<"inserire raggio della circonferenza\n";
    cin>>r;
    cout<<"DIAMETRO\n"<<r*2<<" mm"<<endl;
    cout<<"CIRCONFERENZA\n"<<r*2*M_PI<<" mm"<<endl;
    cout<<"AREA DELLA CIRCONFERENZA\n"<<r*r*M_PI<<" mm^2"<<endl;
    return 0;



}