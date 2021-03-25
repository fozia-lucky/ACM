
#include<stdio.h>
int main()
{
    int T,i,j,a,subarr;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&a);
        int arr[a+2];
        for(i=1;i<a;i++)
        scanf("%d",&arr[i]);
        for(i=1;i<a;i++)
        printf("%d ",arr[i]);
        subarr=arr[i];
        for(j=i+1;j<a;j++)
        {
            subarr=max(subarr,arr[j]);
            printf("%d ",subarr);
        }
        printf("\n");
    }
    return 0;
}
