
#include <stdio.h>
    void main()
    {

        int i, j, a, n, num[30];
        scanf("%d", &n);

        for (i = 0; i < n; ++i)
            scanf("%d", &num[i]);

        for (i = 0; i < n-1; i++)
        {

            for (j = 0; j < n-i-1; j++)
            {

                if (num[j] > num[j+1])
                {

                    a =  num[j];
                    num[j] = num[j+1];
                    num[j+1] = a;

                }

            }

        }


        for (i = 0; i < n; i++)
            printf("%d ", num[i]);

    }
