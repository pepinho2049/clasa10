#include <iostream>

void sumcif(int n, int&s, int&t){
    s=t=0;
    while(n){
        if(n%10%2==0) s+=n%10;
        else t+=n%10;
        n/=10;
    }
}