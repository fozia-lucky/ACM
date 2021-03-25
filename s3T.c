#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int m[100][100],n,a=0,b=0,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&m[i][j]);
    for(i=0;i<n;i++)
         a=a+m[i][i];
    for(i=0;i<n;i++)
         b=b+m[i][n-1-i];
    sum=abs(a-b);
    printf("%d",sum);

    return 0;
}
