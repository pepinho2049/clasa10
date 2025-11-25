#include <iostream>

int suma(int v[], int n, int i, int j)
{
    int sum = 0;
    for(int ind = 1; ind<i; ind++){
        sum += v[ind];
    }
    for(int ind = j+1; ind <= n; ind++){
        sum += v[ind];
    }
    return sum;
}
int main()
{
    int v[101],n,i,j;
    std::cin>>n>>i>>j;
    for(int poz = 1; poz <=n; poz++){
        std::cin>>v[poz];
    }
    std::cout<<suma(v, n, i, j);
}