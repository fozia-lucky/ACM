#include<stdio.h>
main()
{
    long long int a,b,c,i,n;
    scanf("%lld",&n);
    a=0,b=1;

    for(i=1;i<=n-1;i++)
    {
        printf("%lld ",a);
        c=a+b;
        a=b;
        b=c;

    }
    printf("%lld\n",a);
    return 0;
}
