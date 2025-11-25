#include <iostream>

void Insert( int a[], int &n){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i]%2==1)
        cnt++;
    }// vedem cate nr impare avem
    for(int i = n +cnt -1, j = n-1; i>=0, j>=0; --i, --j){// cu i pornim de lungimea finala a vect, cu j mergem normal
        if(a[i]%2!=0){
            a[i] = a[j]*2;
            a[i-1] = a[j];
            i--;//micsoram dimensiunea fictiva a vect
        }
        else a[i] = a[j];// daca e par nu efectuam nicio inserare
    }
    n += cnt;// marim dimensiunea reala a vect
}

int main()
{
    int a[1001], n;
    std::cin>>n;
    for(int i = 0; i < n; ++i){
        std::cin>>a[i];
    }
    Insert(a,n);
    for(int i = 0; i < n; ++i){
        std::cout<<a[i]<< ' ';
    }
}