#include <iostream>
int concat(int a, int b)
{
    int p=1,cb=b;
    if(b==0) return a*10;
    while(cb){
        p*=10;
        cb/=10;
    }
    return a*p+b;
}
int main()
{
    std::cout<<concat(27, 127);
}