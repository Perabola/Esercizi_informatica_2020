#include <iostream>
#include <string>
#include <cstring>
#define LEN 100000
using namespace std;

// NON FUNZIA.

void longerWord(char line[]);

char line[LEN];
char word[LEN];
int main()
{
    char line[LEN];
    
    cin.getline(line,sizeof(line));


    longerWord(line);
    return 0;
}

void longerWord(char line[]){
    
    
    char*pk=strtok(line,"\0");
    int len=strlen(pk);
    while(pk!=NULL){

        char*word= new char[len];

        if(strlen(pk)>=len){
            strcpy(pk,word);
        }
        len=strlen(pk);
        pk=strtok(NULL,"\0");
    }
    cout<<*word<<" "<<len;
    delete[] word;
    return;
}