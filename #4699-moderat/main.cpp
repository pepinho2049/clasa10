#include <iostream>

bool prim(int n)
{
    if(n==0|| n==1 ||(n>2 && n%2==0))return 0;
    for(int d=3;d*d<=n;d+=2)
        if(n%d==0) return 0;
    return 1;
}
bool moderat(int n)
{
    int ok;
    for(int d=2;d*d<n;d++){
        if(n%d==0){
            if(prim(d)&&prim(n/d)){
                ok=1;
                for(int i=d+1;i<=n/d-1;i++){
                    if(prim(i)) ok=0;
                }
                if(ok)return 1;
            }
        }
    }
    return 0;

}

int main()
{
    std::cout<<moderat(35);
    return 0;
}
