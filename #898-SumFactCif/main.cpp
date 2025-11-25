#include <iostream>
int sumfactcif(int n)
{
    int s=0;
    if(n==0) return 1;
    while(n){
        int p=1;
        for(int i=0;i<=n%10;i++){
            if(i==0 || i==1)  p*=1;
            else p*=i;
        }
        s+=p;
        n/=10;
    }
    return s;
}
int main(){
    std::cout<<sumfactcif(250);
}