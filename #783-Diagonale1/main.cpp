#include <iostream>

using namespace std;

int main()
{
    int s=0,n,i,j,a[100][100];
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i==j+1) || (i+1==j)) s+=a[i][j];
        }
    }
    cout<<s;
    return 0;
}
