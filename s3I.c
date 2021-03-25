#include <bits/stdc++.h>
using namespace std;

int main(){
    int T , n , i , a , b;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        a = 1e9;
        int arr[n+2];
        for(i = 0 ; i < n ; i++)
            scanf("%d",&arr[i]);
        for(i = 0 ; i < n ; i++){
            for(int j = i+1; j < n; j++){
                b = arr[i] + arr[j] + j - i;
                if(a > b)
                    a = b;
            }
        }
        printf("%d\n",a);
    }
    return 0;
}
