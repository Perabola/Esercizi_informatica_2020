#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

#define L 1000
#define FILENL 30
#define ALPHALEN 26
#define OFFSET 97

int countChars(const char toCount[], int alphabet[]);

int main()
{
    int alphabet[ALPHALEN] = {};
    char input[L];

    int totChars = 0;
    cout << "Enter filename to process: ";
    cin.getline(input, sizeof(input));
    string line;
    ifstream fileHandle(input);

    if (fileHandle.is_open()) {  
        while (getline(fileHandle, line)) {
    
            const char* cStr = line.c_str();

            totChars += countChars(cStr, alphabet);
        }

        fileHandle.close();

        cout << "Examined " << totChars << " chars." << endl;
    } else {
        cout << "Error opening file" << endl;
        return -1;
    }

     for (int i = 0; i < ALPHALEN; i++) {
        cout << (char)(i + OFFSET) << "\t" << alphabet[i] << endl;
    } 
    
    return 0;
}

int countChars(const char toCount[], int alphabet[])
{
    int i = 0;
    char c = toCount[0];

    // for(int i = 0; toCount[i] != '\0': i++)
    while (c != '\0') {
        if (isalpha(c)) {
            c = tolower(c);

            alphabet[c - OFFSET]++;
        }

        i++;
        c = toCount[i];
    }

    return i;
}




