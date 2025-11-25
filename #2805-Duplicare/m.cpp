#include <iostream>
 
void duplicare(int &n){
    int ind=0 ,a[11];
    while(n){
       
        a[++ind]=n%10;
        
        n/=10;
        
    }
    
    for(int p = ind ; p >= 1 ; p --){
            if(a[p] % 2 == 0){
        for(int i = ind ; i >= p ; -- i)
            a[i+1] = a[i];
        ind ++;
        a[p+1] = 2*a[p];
        }
    }
    for(int i=1;i<=ind;i++){
        int p=1;
        n=a[i]*p+n;
        p*=10;
    }
    std::cout<<n<<'\n';
}
int main(){
    int n=2380;
    duplicare(n);
    std::cout<<n;
}