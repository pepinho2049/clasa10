#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char carac[101];
    cin.getline(carac, 101);
    char *word = strtok(carac, " ");
    bool samelen = true;
    int startlen = -1;
    while(word){
        int currentlen = strlen(word);
        if(startlen == -1)
            startlen = currentlen;
        else if(startlen != currentlen){
            samelen = false;
            break;
        }
        word = strtok(nullptr, " ");
    }





    if (samelen) {
        cout << "DA " << startlen << endl;
    } else {
        cout << "NU" << endl;
    }

    return 0;
}
