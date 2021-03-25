 #include<stdio.h>
int main()
{
    int arr1[1000],arr2[1000],i,ans1=0,ans2=0,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0; i<n; i++)
    {
        ans1=ans1+arr1[i];
    }
    for(i=0; i<n; i++)
    {
        ans2=ans2+arr2[i];
    }
    if(ans1==ans2)
    {
        printf("yes");
    }
    else
        printf("no");
}
