#include <iostream>

int nr_cif(int n, int k)
{
    if(n==0) return 0;
    int ind=0;
    while(n){
        if(n%10!=0)
        if(k%(n%10)==0) ind++;
        n/=10;
    }
    return ind;
}
int main()
{
    std::cout<<nr_cif(7203534, 20);
}