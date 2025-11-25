#include <iostream>

bool TreiCifImp(int n)
{
    bool verif=false;
    int trei=0;
    while(n){
        if((n%10)%2!=0) {
            trei++;
            
        }
        else {
            trei=0;
            
        }
        if(trei>=3) return true;
        n/=10;
    }
    return verif;
}
int main()
{
    std::cout<<TreiCifImp(112);
}