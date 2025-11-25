#include <iostream>
#include <cmath>

long long nroot(int n, long long x)
{
    return round(pow(std::max(x, -x), 1.0/n));
}
int main(){
    std::cout<<nroot(10, 1024);
}