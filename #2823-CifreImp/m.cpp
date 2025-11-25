#include <iostream>

int cifreImpare(int n)
{
    int p=1,nr=0,cn=n;
    while(n){
        
        if((n%10)%2==0){
            nr=(n%10)*p+nr;
            p*=10;
            
        }
        
        n/=10;
    }
    if(nr==cn|| nr==0) return -1;
    else return nr;
}
int main()
{
    std::cout<<cifreImpare(123);
}
