#include <iostream>
#include <algorithm>
void ordon123(int n, int a[])
{
    for(int i = 0; i<n; i++){
        std::sort(a, a+n);
    }
}
