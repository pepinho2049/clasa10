#include <iostream>
bool prim(int n ){
    if(n<2) return 0;
    if(n==2) return 1;
    if(n>2 && n%2==0) return 0;
    for(int d=3; d*d<=n; d+=2){
        if(n%d==0) return 0;
    }
    return 1;
}
void sum_div_prim(int n, int &s)
{
    s=0;
    if(prim(n)) s+=n;
    for(int d=2;d*d<=n;d++){
    
       if(n%d==0){
        if(prim(d)) s+=d;
        if(prim(n/d)) s+=n/d;
        if(d*d==n)
            if(prim(d)) s+=d;
       }
    }
}
int main(){
    int x=13,s=0;
    sum_div_prim(x,s);
    std::cout<<s;
}