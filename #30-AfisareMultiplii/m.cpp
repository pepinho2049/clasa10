#include <iostream>

void sub(int &n ,int &k){
    for(int i=n*k; i>=k; i-=k){
        std::cout<<i<<' ';
    }
}
int main(){
    int n=3, k=5;
    sub(n,k);
}