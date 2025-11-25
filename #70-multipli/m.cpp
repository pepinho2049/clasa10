#include <iostream>

int multipli(int a, int b, int c)
{
    if(c==0) return 0;
    int k=1, nr=0;
    while (c*k<=b && c*k>=a){
        nr++, k++;
    }
    return nr;
}
int main(){
    std::cout<<multipli (10 , 27 , 5);
}