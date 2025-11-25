#include <iostream>

using namespace std;

int main()
{
    /// n-par <=> n%2 == 0
    /// n-impar <=> n%2 == 1 || n%2 != 0
    int n, p=1, ok = 0;
    cin>>n;
    while(n){
        if((n%10)%2 != 0){
            p *= n%10;
            ok = 1;
        }
        n /= 10;

    }
    if(ok == 0)
        cout<<-1;
    else
        cout<<p;
    return 0;
}
