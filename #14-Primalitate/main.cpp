#include <iostream>
int prim(int n)
{
    int d=2,ok=1;
    for(d=2;d*d<=n && ok==1;d++){
        if(n%d==0) ok=0;
    }
    return ok;
}
int  main()
{
    std::cout<<prim(10);
}