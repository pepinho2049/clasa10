#include <iostream>

using namespace std;

int main()
{
    int i,j,a,b,n,t[25][25];
    cin>>n>>a>>b;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==a || j==b) t[i][j]=0;
            else if(i<a && j<b) t[i][j]=1;
            else if(i<a && j>b) t[i][j]=2;
            else if(i>a && j<b) t[i][j]=3;
            else t[i][j]=4;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<t[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
