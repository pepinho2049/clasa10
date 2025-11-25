#include <iostream>

#include <cmath>

int suma(int a, int b)
{
    int s=1;
    for(int d=2; d<=std::min(a,b); d++)
        if(b%d==0 && a%d==0) s+=d;
    return s;
}

int main()
{
    std::cout<<suma(20, 12);
    return 0;
}
