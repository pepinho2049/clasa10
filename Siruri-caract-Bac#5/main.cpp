#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char carac[101];
    cin.getline(carac, 101);
    char *word = strtok(carac, " ");
    while(word != nullptr){
        if(strstr(word, "DO") || strstr(word, "RE") ||
           strstr(word, "MI")|| strstr(word, "FA") || strstr(word, "SOL") ||
           strstr(word, "LA") || strstr(word, "SI")){
            cout<<word<<'\n';
        }
            word = strtok(nullptr, " ");
    }
    return 0;
}
