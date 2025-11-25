#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char carac[101];
    int nr = 1;
    cin.getline(carac, 101);
    char *p = strtok(carac, " ");
    while(p){
        if(nr == 1) {
            cout<<"fam."<<' ';
            nr++;
            p = strtok(nullptr, " ");
        }
        if(nr == 3){
          cout<<"gen."<<' ';
          nr++;
          p = strtok(nullptr, " ");
        }
        if(nr == 5){
          cout<<"spec."<<' ';
          nr++;
          p = strtok(nullptr, " ");
        }
        nr++;
        cout<<p<<' ';
        p = strtok(nullptr, " ");

    }
    return 0;
}
