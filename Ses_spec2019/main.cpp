#include <iostream>
#include <cstring>
using namespace std;
char text[101];
int main(){
    int n;
    bool exista = false;
    
    cin.getline(text, 101);
    cin >> n;
    char *cuvant = strtok(text, " ");
    while(cuvant != nullptr){
        if(strlen(cuvant) == n){
            cout << cuvant << "\n";
            exista = true; 
        }
        cuvant = strtok(nullptr, " ");
    }
    if(exista == false)
        cout<<"nu exista";
}