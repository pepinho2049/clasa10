#include <iostream>
#include <cmath>
bool prim(int n)
{
    int ok=0;
    if(n<2) return false;
    if(n%2==0 && n>2) return false;

    for(int d=3; d<=sqrt(n) && ok==1;d+=2){
        if(n%d==0) ok=0;
    }
    return true;
}
int nr_prim(int n)
{
    while(prim(n)==false){
        n++;
    }
    return n;
}
int main()
{
    std::cout<<nr_prim(1256);
}