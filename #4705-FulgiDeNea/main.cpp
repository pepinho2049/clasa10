#include <iostream>

bool Fulg(int n)
{
    int cate=0,ind1=0,ind2=0,ind3=0,ind4=0;
    while(n){
        cate++;
        switch(n%10)
        {
        case 1:
            ind1++;
            break;
        case 2:
            ind2++;
            break;
        case 3:
            ind3++;
            break;
        case 4:
            ind4++;
            break;
        default:
            return 0;
        }
        n/=10;
    }
    if(cate!=9 || ind1==0|| ind2==0||ind3==0|| ind4==0) return 0;
    else return 1;
}

int main()
{
    std::cout<<Fulg(1112);
    return 0;
}
