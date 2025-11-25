#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[11], cs[11];
    cin.getline(s, 11);
    strcpy(cs, s);
    for(int i = strlen(s)-1; i >= 0; --i){
        cout<<s<<"\n";
        strcpy(s+i, s+i+1);
    }
    for(int j = 0; j < strlen(cs); ++j){
        cout<<cs + j<<"\n";
        
    }
}