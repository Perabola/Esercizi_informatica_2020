/*
SUP che legge 10 numeri dall'utente e ne calcola la somma.
 Fermarsi a leggere numeri quando l'utente
inserisce tutti i 10 numeri oppure quando inserisce 0, 
stabilendo un numero massimo a priori.
Info: Il limite massimo dipende da quanto grandi decidiamo che siano le strutture in fase di compilazione. 
Impareremo che è possibile scrivere programmi che non hanno questo tipo di limite.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int a[10];
int main()
{
    cout << "Enter 10 real numbers:\n";
    for (int i=0; i<10; i++) {
        cout<<i+1<<": ";  
        cin>>a[i];
        if(a[i]==0){
          i=10;
        }
    }
    int x=a[0];
    for(int j=0; j<10; ++j){
      
      x+=a[j+1];
      
    }

    for(int l=0; l<10; l++){
      if(l!=9) cout<<a[l]<<" + ";
      else cout<<a[l]<<" = "<<x;
    }
    return 0;
}
