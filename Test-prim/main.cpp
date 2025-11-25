#include <iostream>

int prim(int x)
{
    if(x<2)return 0;
    if(x==2) return 1;
    if(x>2 && x%2==0) return 0;
    for(int d=3;d*d<=x;d+=2){
        if(x%d==0)return 0;
    }
    return 1;
}

int main()
{
    std::cout<<prim(25);
    return 0;
}
