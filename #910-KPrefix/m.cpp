#include <iostream>

void prefix(int n, int&k ,int& x)
{
    int cn=n,cate=0,ind=0;
    while(cn){
        cate++;
        cn/=10;
    }
    do{
        n/=10;
        ind++;
    }while(cate-ind!=k);
    x=n;

}
int main()
{
    int n=27564,k=3,x;
    prefix(n, k ,x);
    std::cout<<x;
}