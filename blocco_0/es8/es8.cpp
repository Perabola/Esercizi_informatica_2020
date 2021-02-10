using namespace std;
#include <iostream>
int main() {
    int x;
    int y;
    cout<<"INSERIRE IL PRIMO NUMERO\n";
    cin>>x;
    cout<<"INSERIRE IL SECONDO NUMERO\n";
    cin>>y;
    int i=1;
    if(x%y==0) {
        cout<<y<<" non e' un multiplo di "<<x<<" ma,\n";
        cout<<x<<" e' un multiplo di "<<y<<endl;
    }
    else{
        if(y%x==0) {
            cout<<x<<" non e' un multiplo di "<<y<<" ma,\n";
            cout<<y<<" e' un multiplo di "<<x<<endl;
        }
        else{
            cout<<x<<" non e' un multiplo di "<<y<<" e "<<y<<" non e' multiplo di "<<x<<endl;
        }

    }
    return 0;
}