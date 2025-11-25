#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n,a[25][25];
    cin>>n>>k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=k && j<=k) a[i][j]=1;
            else if(i<=k && j>k) a[i][j]=2;
            else if(i>k && j<=k) a[i][j]=3;
            else a[i][j]=4;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
