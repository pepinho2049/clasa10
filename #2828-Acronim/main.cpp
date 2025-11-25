#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[101];
    int poz = 0;
    cin.getline(s, 101);
    if(isupper(s[poz]))
        cout<<s[poz];
    for(int poz = 1; s[poz]; ++poz){
        
        if(s[poz-1] == ' ' && isupper(s[poz]))
            cout<<s[poz];
    }
}