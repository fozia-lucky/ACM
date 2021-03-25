#include<iostream>
using namespace std;
int main()
{
    int l1,r1,l2,r2,res1,res2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    if(l2>r1 || l1>r2)
    {
        printf("-1");
        return 0;
    }
    else
    {
        res1=max(l1,l2);
        res2=min(r1,r2);
    }
    printf("%d %d",res1,res2);
}
