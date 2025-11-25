#include <iostream>

using namespace std;

int main()
{
    int k=1,n,i,j,a[21][21];
        cin>>n;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                a[i][j]=2*k;
                k++;
                if(k%3==0) k++;
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
