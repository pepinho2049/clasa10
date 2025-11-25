#include <iostream>

void nr_div_imp(int n, int &cate){
    cate=0;
    for(int d=1;d*d<=n;d++){
        if(n%d==0){
            if(d%2==1)
                cate++;
            if((n/d)%2==1)
                cate++;
        }
        if(d*d==n && d%2==1) cate--;
    }
}
int main(){
    int n=12,s;
    nr_div_imp(n,s);
    std::cout<<s;
}