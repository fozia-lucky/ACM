
#include<stdio.h>
#include<string.h>
int main(){
    long long int A, B, C, test_sum;
    char Q, S;

    scanf("%lld", &A);
    getchar();
    scanf("%c", &S);
    getchar();
    scanf("%lld", &B);
    getchar();
    scanf("%c", &Q);
    scanf("%lld", &C);

    if(S == '+')
        test_sum = A + B;
    else if (S == '-')
        test_sum = A - B;
    else if (S == '*')
        test_sum = A * B;

    if(test_sum == C)
        printf("Yes\n");
    else
        printf("%lld\n", test_sum);
    return 0;
}
