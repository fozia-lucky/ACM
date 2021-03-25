#include<stdio.h>
#include <math.h>
int main(){

    long long int A, B, floor_result, ceil_result, round_result;
    long double result = 0.0;
    scanf("%lld%lld", &A, &B);
    result = (long double)A/B;

    floor_result=(long long int)floor(result);
    ceil_result=(long long int)ceil(result);
    round_result=(long long int)round(result);

    printf("floor %lld / %lld = %lld\n", A, B, floor_result);
    printf("ceil %lld / %lld = %lld\n", A, B, ceil_result);
    printf("round %lld / %lld = %lld\n", A, B, round_result);

    return 0;
}
