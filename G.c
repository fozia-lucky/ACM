#include<stdio.h>
int main(){
    long long int N,i;
     long long int sum=0;
    scanf("%lld",&N);
    for(i=1; i<=N; i++){
        sum=N*(N+1)/2;
    }
    printf("%lld\n",sum);
return 0;
}
