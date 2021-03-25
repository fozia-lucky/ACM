#include <stdio.h>

int main()
{
    long long int a , b ,c,d,lcm,gcd,rem;
    scanf("%lld %lld",&a,&b);
    if(a>b)
    {
        c=a;
        d=b;
    }
    else
    {
         c=b;
         d=a;
    }
    rem = c % d;
    while(rem != 0)
    {
        c=d;
        d=rem;
        rem=c%d;
    }
    gcd=d;
    lcm=a/gcd*b;
    printf("%lld  %lld",gcd,lcm);
    return 0;
}
