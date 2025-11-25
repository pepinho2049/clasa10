#include <iostream>

int zerof(int n)//metoda ineficienta
{
    if(n==0 || n==1) return 0;
    int p=1,nrz=0;
    for(int i=2;i<=n;i++){
        p*=i;
    }
    while(p%10==0){
        nrz++;
        p/=10;
    }
    return nrz;
}
//!!vom lua din 5 in 5
// int zerof(int n)
//{
//  if(n==0|| n==1) return 0;
//  int p,nrz=0;
//  for(int i=2;i<=n;i++){
//      p=i;
//      while(p%5==0)
//          nrz++, p/=5;
//  } 
//  return nrz;
//}
int main()
{
    std::cout<<zerof(10);
}