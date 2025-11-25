#include <iostream>
#include <climits>
using namespace std;

int main(){
    int mx=INT_MIN,n,m,i,j,I,a[101][101];
    cin>>n>>m;
    int s=0;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    for(i=1; i<=n; i++){
            s=0;
        for(j=1; j<=m; j++){
            if(a[i][j]%2==0) s[i]+=a[i][j];

        }
        if(s>=mx){
            mx=s;
            I=i;
        }
    }

    cout<<I;

    return 0;
}
