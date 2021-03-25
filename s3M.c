 #include<stdio.h>
 #include <conio.h>


int main()
{
    long int a[1000],i,n,min,max,max1,min1,temp;

    scanf("%ld",&n);


    for(i=0; i<n; i++)
    {
        scanf("%ld",&a[i]);
    }

    max = a[0];
    min = a[0];
    max1=0;
    min1=0;


    for(i=1; i<n; i++)
    {

        if(a[i] > max)
        {
            max = a[i];
            max1=i;
        }


        if(a[i] < min)
        {
            min = a[i];
            min1=i;
        }


     }
		    temp=a[max1];
                a[max1]=a[min1];
                a[min1]=temp;
		     for (i = 0; i < n; i++)
             printf("%ld ",a[i]);






    return 0;
}
