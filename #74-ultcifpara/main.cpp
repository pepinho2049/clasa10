#include<iostream>
int UCP(int n)
{
    int ok=0;
    while(n){
        if((n%10)%2==0) return n%10;
        n/=10;
    }
    if(ok==0) return -1;
}
int main()
{
    std::cout<<UCP(12345);
}