#include <iostream>

void detcifre(int n, int& p, int& u)
{
    u=n%10;
    while(n){
        if(n<10) p=n;

        n/=10;
    }
}
int main(){
    int s=170,u,p;
    detcifre(s, p ,u);
    std::cout<<p<<" "<<u;
}