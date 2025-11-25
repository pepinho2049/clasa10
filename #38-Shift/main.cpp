#include <iostream>

void shift(int x[], int n)
{
    for(int i{0}; i<n-1 ; i++){
        std::swap(x[i], x[i+1]);
    }
    
}
int main()
{
    int x[101],n;
    std::cin>>n;
    for(int i = 0; i<n; i++){
        std::cin>>x[i];
    }
    shift(x, n);
    for(int i{0}; i<n; i++){
        std::cout<<x[i]<<' ';
    }
    
}