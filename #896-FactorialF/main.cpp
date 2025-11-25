#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1) return 1;
    else{
        int p=1;
        for(int i=2;i<=n;i++){
            p*=i;
        }
        return p;
    }
}
int main(){
    cout<<fact(0);
}