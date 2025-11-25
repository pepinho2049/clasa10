#include <iostream>
#include <cmath>
void afisare(int &a , int &b)
{
    for(int i=std::min(a,b); i<=std::max(a,b);i++){
        if(i%2==0){
            std::cout<<i<<' ';
        }
    }
}
int main()
{
    int a=2, b=7;
    afisare(a,b);

}