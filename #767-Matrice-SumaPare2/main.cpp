#include <iostream>

using namespace std;

int main()
{
    int n,m,s=0,i,j,a[100][100];
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]%2==0)
                s+=a[i][j];
        }
    }
    cout<<s;
    return 0;
}
