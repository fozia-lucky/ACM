#include<stdio.h>
int main()
{
    char sym;
    int n,i,j,num;
    scanf("%c",&sym);
    scanf("%d", &n);

        for (i = 0; i < n; ++i)
        {
            scanf("%d", &num);

            for (j = 0; j < num; j++)
            {
                printf("%c",sym);
            }
             printf("\n");
        }

    return 0;
}
