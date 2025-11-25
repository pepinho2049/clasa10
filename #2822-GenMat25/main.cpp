#include <iostream>

using namespace std;

int main()
{
    int a[21][21],i,j,n;
    cin>>n;
    for(j=1;j<=n;j++){
        for(i=1;i<=n;i++){
            if(j==1) a[i][j]=i;
            else if(i==n) a[i][j]=n;
            else a[i][j]=a[i][j-1]+a[i+1][j-1];
        }
    }
    for(i=1;i<n+1;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
