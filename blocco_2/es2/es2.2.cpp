// riscrivere l'es 1.2 con gli array
/*
SUP che dato un numero intero e un numero indice, individua la cifra alla posizione indice del primo
numero inserito. Esempio: 39842, indice 2 (decine) = 4 decine. Farsi stampare solo la cifra, non serve il
nome posizionale (decine, centinaia, ecc).
*/
#include <iostream>
using namespace std;
const int dim=100;
int a[dim];
int ris;
int x,y;
int cifra(int,int);
int n_cifre(int);
int * array(int,int);
void print_array(int *,int);
int *z;
void print_Y(int*,int);

int main (){
    cout<<"INSERIRE NUMERO\n",cin>>x;
    cout<<"INSERIRE INDICE\n",cin>>y;
    z=array(x,n_cifre(x));
    print_array(z,n_cifre(x));
    print_Y(z,y);
    return 0;
}

int cifra(int a,int b) {  
    int esp1=1;                  // esp1 == y;
    for(int i=1; i<=b; ++i){
        esp1*=10;
    }   
    int resto;
    resto=a%=esp1;           
    int c=b-1,esp2=1;            // esp2 == y-1;
    for(int g=1; g<=c; ++g) {
        esp2*=10;
    }
    ris=resto/esp2;
    return ris;
}

int n_cifre(int a){
    int i=0;
    while(a!=0){
        a/=10;
        ++i;
    }
    return i;
}

int * array(int x, int dim){
    for(int i=1; i<=dim; ++i){
        a[i-1]=cifra(x,i);
    }
    return a;
}

void print_array(int  a[], int dim){
    for(int i=0; i<dim; ++i){
        cout<<a[i]<<",";

    }
    cout<<endl;

}

void print_Y(int a[], int y){
    cout<<"a["<<y<<"] = "<<a[y-1]<<endl;
}