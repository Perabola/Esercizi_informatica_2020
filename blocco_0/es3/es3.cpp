using namespace std;
#include <iostream> 
int main() {
    int n;
    cout<<"1"<<"2"<<"3"<<"4"<<endl;
    cout<<"1 "<<"2 "<<"3 "<<"4 "<<endl;
    cout<<"1\n";
    cout<<"2\n";
    cout<<"3\n";
    cout<<"4\n";
    cout<<"Inserire il numero massimo dell'elenco\n";
    cin>>n;
    for(int i=1;i<=n;++i) {
        cout<<i<<".\n"; 
    }
    return 0;
}