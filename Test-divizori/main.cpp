#include <iostream>

int divizori(int x)
{
    int s=0;
    for(int d=2;d*d<=x;d++){
        if(x%d==0) s+=d;
        if(d*d!=x) s+=x/d;
    }
    return s;
}
int main()
{
    std::cout<<divizori(12);
    return 0;
}
