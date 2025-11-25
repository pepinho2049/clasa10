#include <iostream>
using namespace std;

int main()
{
    int a[7][7]={0}, i, j, n, cif;
    cin>>n;
    int cn = n;
    for(i=1; i<=6; i++)
    {
        cif = cn%10, cn /= 10;
        for(j=1; j<=6; j++)
            if(i==j)
                a[i][j] = 0;
            else if(i<j)
                a[i][j] = cif;
    }
    for(j=1; j<=6; j++)
    {
        cif = n%10, n /= 10;
        for(i=1; i<=6; i++)
            if(i>j)
                a[i][j] = cif;
    }
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=6; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
