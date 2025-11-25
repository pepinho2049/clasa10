#include <iostream>

#define ll long long int

ll nz(int a)
{
    ll cate=0;
    ll val,putere=5;
    do{
        val=a/putere;
        cate+=val;
        putere*=5;
    }while(val);
    return cate;
}
int main()
{
    std::cout<<nz(101);
}
