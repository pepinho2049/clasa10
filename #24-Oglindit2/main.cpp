#include <iostream>
int oglindit(int n)
{
    int o=0;
    if(n==0) return 0;
    while (n){
        o=o*10+n%10;
        n/=10;
    }
    return o;
}
int main()
{
    std::cout<<oglindit(123);
}