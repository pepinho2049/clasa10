#include<iostream>
int suma_div(int n)
{
    int d,s=0;
    for (d=1;d*d<=n;d++){
        if (n%d==0){
            s+=d;
            if (d*d!=n) s+=n/d;
        }
    }
    return s;
}
int main(){
    std::cout<<suma_div(4);
}