
#include<stdio.h>

int main(){
    int  a , b , i , j = 0;
    scanf("%d %d",&a,&b);
    int arr1[a+2] , arr2[a - 2];
    for( i = 0 ; i < a ; i++)
        scanf("%d",&arr1[i]);
        for( i = 0 ; i < b ; i++)
          scanf("%d",&arr2[i]);
         for(i = 0 ; i < a && j < b; i++){
            if(arr1[i] != arr2[j])
            continue;
            j++;
         }

    if(j == b)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
