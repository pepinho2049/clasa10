#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char sir[101];
    int n;


    cin.getline(sir, 101);
    cin >> n;


    char sir_copie[101];
    strcpy(sir_copie, sir);


    char *cuvant = strtok(sir, " ");

    bool prima_linie = false, a_doua_linie = false;
    bool exista_mai_mici = false, exista_mai_mari = false;


    while (cuvant) {
        if (strlen(cuvant) < n) {
            if (prima_linie) cout << " ";
            cout << cuvant;
            prima_linie = true;
            exista_mai_mici = true;
        }
        cuvant = strtok(NULL, " ");
    }
    if (!exista_mai_mici) {
        cout << "nu exista";
    }
    cout << endl;

    cuvant = strtok(sir_copie, " ");
    while (cuvant) {
        if (strlen(cuvant) > n) {
            if (a_doua_linie) cout << " ";
            cout << cuvant;
            a_doua_linie = true;
            exista_mai_mari = true;
        }
        cuvant = strtok(NULL, " ");
    }
    if (!exista_mai_mari) {
        cout << "nu exista";
    }
    cout << endl;

    return 0;
}
