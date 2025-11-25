#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char s[21];
    cin.getline(s, 21);
    for(int poz = 0; s[poz] ; ++poz){
        if(strchr("aeiou", s[poz]) == NULL)
            cout<<s[poz];
    }
    
}