#include <iostream>
void F(int n, int a[], int &k)
{
    int p{1};
    k = 0;
    int estepar=0;
    for(int i{n-1}; i>=0; i--){
        if(a[i]%2==0){
            estepar++;
            k = a[i]*p +k;
            p *=10; 
        }
    }
    if(estepar == 0) k = -1;
    
    
}
int main()
{
    int a[11], n, k;
    std::cin>>n;
    for(int i{0}; i<n; i++){
        std::cin>> a[i];
    }
    F(n, a, k);
    std::cout<<k;
}