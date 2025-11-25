#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    bool cuvant = true;
    cin.getline(s, 101);
    for(int i = 0; s[i]; ++i){
            cuvant = true;
        if(strchr("aeiou", s[i]) || s[i] != 'i'){
            cuvant = false;
            break;
        }

    }
    if(cuvant == false) cout<<"NU";
    else cout<<"DA";
    return 0;
}
