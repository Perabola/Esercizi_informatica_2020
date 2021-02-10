/*
SUP esegue parsing di stringa e svolge una funzionalità programmabile. Nello specico il programma
prende in input una stringa di valori di temperatura del tipo "20C@34F@12F@23C" e converte questi in
gradi Kelvin. Stampare due tabelle distinte per conversioni Celsius e Fahrenheit.
*/

#include <iostream>
#include <cstring>
#include <ctype.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <sstream>
#define len 100
using namespace std;

void strsplit(char a[]);
int counter(char a[],char token);
int convertString(char a[],char str);
float CtoK(int n);
float FtoK(int n);
void CtoKprinter(char a[]);
void FtoKprinter(char a[]);
char input[len];
char C[len];
char F[len];

int main(){
    cout<<"Inserire temperature da convertire (divisi tra loro con @):\n";
    cin.getline(input,sizeof(input));
    cout<<"Seriamente:  \n";
    strsplit(input);
    cout<<C<<endl;
    cout<<F<<endl;

    cout<<"Conversione da Celsius a Kelvin:\n";
    CtoKprinter(C);
    cout<<"Coversione da Fharheneit a Kelvin:\n";
    FtoKprinter(F);
    cout<<"leleleleleleel";

    return 0;
}

void strsplit(char a[]){
    char*pk=strtok(a,"@");
    while(pk!=NULL){
        if(pk[strlen(pk)-1]=='C'){
            strcat(C,pk);
        }else{
            if(pk[strlen(pk)-1]=='F'){
                strcat(F,pk);
            }else{
                cout<<"valori non ammissibili Si ricorda di mettere F o C al fine del valore per poterne identificarne la scala.\n";
                return;
            }
        }
        pk=strtok(NULL,"@");
    }
}


int convertString(char* str)          //conversione a int;
{
    std::string input(str);
    std::stringstream strStream(input); 

    int result;

    strStream >> result;

    if (!str) {
        // The conversion failed
        cout << "Failed parsing input parameters" << endl;
    }

    return result;
}

void CtoKprinter(char a[]){
    cout<<"-----------------------------\n";
    cout<<"Celsius"<<"          "<<"Kelvin\n";
    cout<<"-----------------------------\n";
    char*pk=strtok(a,"C");
    int conv;
    while(pk!=NULL){
        conv=convertString(pk);
        cout<<conv<<"               "<<CtoK(conv)<<endl;
        pk=strtok(NULL,"C");
    }
}
void FtoKprinter(char a[]){
    cout<<"--------------------------------------\n";
    cout<<"Fahrheneit"<<"           "<<"Kelvin\n";
    cout<<"--------------------------------------\n";
    char*pk=strtok(a,"F");
    int conv;
    while(pk!=NULL){
        conv=convertString(pk);
        cout<<conv<<"                   "<<FtoK(conv)<<endl;
        pk=strtok(NULL,"F");
    }
}

float CtoK(int n){
    float k=n+273.15;
    return k;
}

float FtoK(int n){
    float k=((n-32)*(5/9))+273.15;
    return k;
}