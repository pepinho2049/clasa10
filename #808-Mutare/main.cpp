#include <iostream>

void sub(int n, int v[], int x){
    int a[51], ind = 0;//initializam un vector unde vom sorta elem vect
    for(int i = 0; i<n; ++i){
        if(v[i] == x){
            a[++ind] = x;// introducem in noul vector elem egale cu x pe primele poz
        }
    }
    for(int i = 0; i<n; ++i){
        if(v[i] != x){
            a[++ind] = x;// introducem celelate elemente
        }
    }
    for(int i = 1; i <= ind ; ++i){
        v[i-1] = a[i]; //reintroducem elementele in vect v
    }


    
}


int main(){
    int n, v[1001], x;
    std::cin>>n>>x;
    for(int i = 0; i < n; ++i){
        std::cin>>v[i];
    }
    sub(n , v, x);
    for(int i = 0; i< n; ++i){
        std::cout<<v[i]<<' ';
    }
}