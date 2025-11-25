#include <iostream>
int trans(int n)
{
    int y=0,p=1;
    while(n){
        if(n%10%2==0){
            y=y*p+n%10;
            p*=10;
        }
        n/=10;
    }
    return y;
}
int paro(int x, int y)
{
    int ogl=0,rez;
    int nr=trans(x);
    while(nr){
        ogl=ogl*10+nr%10;
        nr/=10;
    }
    if(ogl==trans(y)) rez=1;
    else rez=0;
    return rez;
}
int main()
{
    std::cout<<paro(814, 73485);
}
