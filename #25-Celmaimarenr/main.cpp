#include <iostream>
#include<cmath>
int cmmnr(int n)
{
    int t[11],nr=0,cn=n;
    if(n==0) return 0;
    while(cn){
        nr++;
        cn/=10;
    }
    for(int i=1;i<=nr;i++){
        t[i]=n%10;
        n/=10;
    }
    for(int i=1;i<nr;i++){
        for(int j=i+1;j<=nr;j++){
        if(t[i]<t[j]){
            int aux=t[i];
            t[i]=t[j];
            t[j]=aux;
        }
        }
    }
    for(int i=1;i<=nr;i++){
        
        n=n*10+t[i];
    

    }
    return n;
}
int main(){
    std::cout<<cmmnr(1235);
}