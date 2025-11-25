#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s1[21], s2[21];
    cin.getline(s1, 21);
    cin.getline(s2, 21);
    for(int i = 0; s2[i]; ++i){
        if(strchr("aeiou", s2[i]))
            strcpy(s2 +i, s2+i+1);
        
    }
    strcat(s2, " ");
    strcat(s2, s1);
    cout<<s2;


}