#include<stdio.h>

int main()
{
    long long int num,T,i,ans;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {

    scanf("%lld",&num);
    if(num==0)
        printf("0");

    while(num!=0)
    {
        ans=num%10;
        num=num/10;
        printf("%lld ",ans);

    }
     printf("\n");
    }

    return 0;
}
