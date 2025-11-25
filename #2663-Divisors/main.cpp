#include <iostream>

int NrDiv(int n)
{
    int cate=0;
    for(int d=1;d*d<=n;d++){
        if(n%d==0) cate+=2;
        if(d*d==n) cate--;

    }
    return cate;
}
int NextNrDiv(int n)
{
    int i,nrd;
    nrd=NrDiv(n);
    while(true){
        n++;
        i=NrDiv(n);
        if(i==nrd) return n;
    }return -1;
}
int PreNrDiv(int n)
{
    int i,nrd;
    nrd=NrDiv(n);
    while(n>1){
        n--;
        i=NrDiv(n);
        if(i==nrd) return n;
    }return -1;
}

int main()
{
    std::cout<<Nrdiv(100);
    std::cout<<NextNrDiv(100);
    std::cout<<PreNrDiv(100);
    return 0;
}
