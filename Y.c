#include<stdio.h>
int main()
{
    long long int a,b,c,d, mul,m,n;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    mul=a*b*c*d;
    m=mul%10;
    mul=mul/10;
    n=mul%10;

    printf("%lld%lld\n",n,m);
    return 0;
}
