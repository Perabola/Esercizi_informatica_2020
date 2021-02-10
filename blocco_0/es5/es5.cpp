using namespace std;
#include <iostream> 
int main() {
    int x,y,z;
    cout<<"Inserire prima cifra\n";
    cin>>x;
    cout<<"Inserire seconda cifra\n";
    cin>>y;
    cout<<"inserire terza cifra\n";
    cin>>z;
    int S; // Somma;
    S=x+y+z;
    int Med; // Media;
    Med=S/3;
    int P; // Prodotto;
    P=x*y*z;
    cout<<"SOMMA....."<<S<<endl;
    cout<<"MEDIA....."<<Med<<endl;
    cout<<"PRODOTTO.."<<P<<endl;
    if(x>y&&x>z){   // x è il piu grande;
                cout<<x<<"  E' IL PIU GRANDE DI TUTTI\n";
    }
    if(x<y&&x<z) {  // x è il piu piccolo;
                cout<<x<<"  E' IL PIU PICCOLO DI TUTTI\n"; 
    }
    if(y>x&&y>z) {  // y è il piu grande;
                cout<<y<<"  E' IL PIU GRANDE DI TUTTI\n";
    }
    if(y<x&&y<z) {  // y è il piu piccolo;
                cout<<y<<"  E' IL PIU PICCOLO DI TUTTI\n";
    }
    if(z>y&&z>x) {  // z è il piu grande;
                cout<<z<<"  E' IL PIU GRANDE DI TUTTI\n";
    }
    if(z<y&&z<x) {  // z è il piu piccolo;
                cout<<z<<"  E' IL PIU PICCOLO DI TUTTI\n";
    }
    return 0;

}