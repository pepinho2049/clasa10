#include <iostream>

int count(double a[], int n ){
    
    double sum = 0, med;
    int cate=0;
    for(int i = 0;i<n;i++){
        sum += a[i];
    }
    med = sum/n;
    for(int i = 0; i<n; i++){
        if(a[i]>= med) cate++;
    }
    return cate;
}
int main(){
    double a[101],n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::cout<<count(a, n);
}