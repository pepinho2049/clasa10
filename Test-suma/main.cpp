#include <iostream>

int suma(int x)
{
    int s=0;
    while(x){
        if(x%10%2==0) s+=x%10;
        x/=10;
    }
    if(s==0) return -1;
    else return s;
}

int main()
{
    std::cout<<suma(1111);
    return 0;
}
