#include<stdio.h>
#include<math.h>
int main()
{
    int l1,r1,l2,r2,res1,res2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    if(l2>r1 || l1>r2)
    {
        printf("-1");
        return;
    }
    else
    {
        res1=max(l1,l2);
        res2=min(r1,r2);
    }
    printf("%d %d",res1,res2);
}
