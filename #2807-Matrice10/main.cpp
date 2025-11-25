#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int i1,i2,j1,j2,m1=INT_MAX,m2=INT_MAX,i,j,n,m,a[51][51];
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
            if(a[i][0]<m1) m1=a[i][0];i1=i;j1=0;
            if(a[i][m-1]<m2) m2=a[i][m-1];i2=i;j2=m-1;



    }
    swap(a[i1][j1], a[i2][j2]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
