#include <iostream>
using namespace std;

struct Complex
{
    double Re;
    double Imm;
};

void add(Complex N1,Complex N2);
void sub(Complex N1,Complex N2);
void mul(Complex N1,Complex N2);


void add(Complex N1,Complex N2)
{
    Complex ris={(N1.Re)+(N2.Re),(N1.Imm)+(N2.Imm)};
    if(ris.Imm>=0){
        cout<<(ris.Re)<<" +"<<(ris.Imm)<<"i";
    }else{
        cout<<(ris.Re)<<" "<<(ris.Imm)<<"i";
    }
    return;
}
void sub(Complex N1,Complex N2)
{
    Complex ris={(N1.Re)-(N2.Re),(N1.Imm)-(N2.Imm)};
    if(ris.Imm>=0){
        cout<<(ris.Re)<<" +"<<(ris.Imm)<<"i";
    }else{
        cout<<(ris.Re)<<" "<<(ris.Imm)<<"i";
    }
    return;
}
void mul(Complex N1,Complex N2)
{
    Complex ris={((N1.Re)*(N2.Re))-((N1.Imm)*(N2.Imm)),((N1.Re)*(N2.Imm))+((N2.Re)*(N1.Imm))};
    if(ris.Imm>=0){
        cout<<(ris.Re)<<" +"<<(ris.Imm)<<"i";
    }else{
        cout<<(ris.Re)<<" "<<(ris.Imm)<<"i";
    }
    return;

}


int main()
{
    char op;
    double r1, r2, c1, c2;
    cin>>op;
    if(op!='a'&&op!='s'&&op!='m'){
        cout<<"errore";
        return -1;
    }
    cin>>r1>>c1>>r2>>c2;


    Complex N1={r1,c1};
    Complex N2={r2,c2};
     if(op=='a'){
            add(N1,N2);
        }else{
            if(op=='s'){
                sub(N1,N2);
            }else{
                mul(N1,N2);
            }
        }
    
    // leggere i dati da stdin
    
    // chiamare funzioni add, sub, mul
    
    // stampare risultato su stdout

    return 0;
}