#include <iostream>

void num(int n, int v[]){
    for(int i = 0; i < n; ++i){
        if(v[i] <= v[0]) v[i] = 0;
    }
}
int main(){
    int n, v[1001];
    std::cin>>n;
    for(int i = 0; i < n; ++i){
        std::cin>>v[i];
    }
    num(n , v);
    for(int i = 0; i< n; ++i){
        std::cout<<v[i]<<' ';
    }
}