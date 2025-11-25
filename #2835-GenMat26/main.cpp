#include <iostream>

using namespace std;

int main()
{
    int i,j,a[21][21],n;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>a[0][j];
    }
    for(i=1;i<n;i++){
        a[i][0]=a[i-1][n-1];
        for(j=1;j<n;j++){
            a[i][j]=a[i-1][j-1];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
