#include <iostream>

void P(int x[101], int n, int& mini, int& maxi, int &sum)
{
    mini = maxi = x[0];
    sum = 0;
    for (int i=0; i<n; i++){
        if(x[i]< mini) mini = x[i];
        if(x[i]>maxi) maxi = x[i];
        sum += x[i];
    }
    
}
int main()
{
    int n=6, x[101] = {12, 7, 6, 3, 8, 5}, mini,maxi,sum;
    P(x,n,mini,maxi,sum);
    std::cout<<mini<<" "<<maxi<<" "<<sum;   
}

