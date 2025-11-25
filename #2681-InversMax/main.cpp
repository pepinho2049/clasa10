#include <iostream>
#include <cstring>
using namespace std;
void oglindire(char *s){
    for(int i = 0; i < strlen(s)/2; ++i){
        swap(s[i], s[strlen(s)-i-1]);
    }
}
void eliminare(char * s , int poz)
{
    char t[256];
    strcpy(t , s + poz + 1);
    strcpy(s + poz , t);
}
int lungimi[101];
int main(){
    char s[256];
    int lungmax = -1, Iterator = 0, nr = 0;
    cin.getline(s, 256);
     while(s[0] == ' ' )
        eliminare(s , 0);
    int n = strlen(s);
    while(s[n - 1] == ' ' )
    {
        eliminare(s , n - 1);
        n --;
    }
    for(int i = 0 ; s[i]; )
        if(s[i] == ' ' && s[i + 1] == ' ' )
            eliminare(s , i + 1);
        else
            i ++;
    char *cuvant = strtok(s, " ");
    while(cuvant != nullptr){
        nr++;
        lungimi[++Iterator] = strlen(cuvant);
        cuvant = strtok(nullptr, " ");
    }
    for(Iterator = 0;  Iterator < nr; Iterator++){
        cout<<lungimi[Iterator]<<' ';
    }
    
}