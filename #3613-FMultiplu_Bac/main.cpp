#include <iostream>

#include<cmath>
bool pp(int n)
{
    if(sqrt(n)==int(sqrt(n))) return true;
    else return false;
}
int multiplu(int n)
{
    int k=1;
    while(pp(n*k)==false) k++;
    return n*k;
}

int main()
{
    std::cout<<multiplu(72);
}
