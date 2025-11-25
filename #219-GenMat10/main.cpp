#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,a[25][25];
    cin>>n>>m;
    int p=n*m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            a[i][j]=p;
            p--;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
