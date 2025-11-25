#include <iostream>

using namespace std;

int main()
{
    int i,j,k,m,n,a[16][16];
    cin>>n>>m;

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            a[i][j]=j;
        }
    }
    for(i=2;i<=n;i++){
            k=i*m;
            int p=(i-1)*m+1;
        for(j=1;j<=m;j++){
            if(i%2==0){
                a[i][j]=k;
                k--;
            }
            else {
                a[i][j]=p;
                p++;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
