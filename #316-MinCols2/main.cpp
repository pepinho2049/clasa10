#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int mnj,a[21][21],m,n,i,j,mn=INT_MAX;
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[j][i]<=mn){
                mn=a[i][j];
                mnj=j;
            }
        }
        if(j==mnj)a[j][i]=mn;

    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
