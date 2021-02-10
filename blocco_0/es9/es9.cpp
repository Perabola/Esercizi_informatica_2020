using namespace std;
#include <iostream>
int main() {
    cout<<"------------------\n"
        <<"LETTERE MAIUSCOLE:\n"
        <<"------------------\n";
    for(int i=65;i<=90;++i){
        cout<<"CHAR:  "<<(char) i<<"  ASCII:  "<<i<<endl;
        
    }
    cout<<"------------------\n"
        <<"LETTERE MINUSCOLE:\n"
        <<"------------------\n";
    for(int e=97; e<=122 ; ++e ) {
        cout<<"CHAR:  "<<(char) e<<"  ASCII:  "<<e<<endl;
    }
    cout<<"------------------\n"
        <<"NUMERI DAL 0 AL 9:\n"
        <<"------------------\n";
    for(int f=48; f<=57 ; ++f ) {
        cout<<"CHAR:  "<<(char) f<<"  ASCII:  "<<f<<endl;
    }
    return 0;
}