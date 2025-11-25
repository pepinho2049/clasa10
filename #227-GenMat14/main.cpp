#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a[16][16]={0};
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(i<j) a[i][j]=0;
            else if(i==n) a[i][j]=j;
            else a[i][j]=a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
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
