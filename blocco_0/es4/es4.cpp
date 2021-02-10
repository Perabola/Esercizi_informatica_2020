using namespace std;
#include <iostream> 
int main() {
    int x;
    int y;
    cout<<"inserisci prima cifra\n";
    cin>>x;
    cout<<"inserisci seconda cifra\n";
    cin>>y;
    if(x==y) {
        cout<<"These numbers are equal\n";
    }
    else{
        if(x>y){
            cout<<x<<"    is larger\n";
        }
        else{
            cout<<y<<"    is larger\n";
        }
    }
    return 0;
}