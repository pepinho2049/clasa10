#include <iostream>

int minDivPrim(int n)
{
    int nr=1,d=2;
    while(n>1){
        if(n%d==0){
            nr*=d;
            while(n%d==0) n/=d;
        }
        d++;
        if(d*d>n) d=n;
    }
    return nr;
}
int main()
{
    std::cout<<minDivPrim(75);
}