
#include<stdio.h>
#include<math.h>

int main()
{
    long int n ,res;
    scanf("%d",&n);
    res=int((-1+sqrt(1+8*n))/2);


    printf("%ld",res);

    return 0;
}
