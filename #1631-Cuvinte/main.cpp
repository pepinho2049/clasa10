#include <iostream>
#include <cstring>
using namespace std;
char text[256], copie_text[256];
int main(){
    cin.getline(text,101);
    strcpy(copie_text, text);
    int nr3litere = 0, lungmax = 0, Iterator = 0;
    char *cuvant = strtok(text, " ");
    while( cuvant != nullptr){
        if(strlen(cuvant) == 3) nr3litere++;
        cuvant = strtok(nullptr, " ");
    }
    cout << nr3litere << "\n";
    char *word = strtok(copie_text, " ");
    while(word != nullptr){
        if(strlen(word) > lungmax) lungmax = strlen(word);
        if(strchr("aeiouAEIOU", word[Iterator]) && strchr("aeiouAEIOU", word[strlen(word)-1]))
            cout << word << "\n";
        word = strtok(nullptr, " ");
    }
    cout << lungmax;
}