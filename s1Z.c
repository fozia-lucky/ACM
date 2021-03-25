#include<stdio.h>

int main(){
    double a,b,c,d,res,m,n;
    scanf("%1f %1f %1f %1f", &a, &b, &c, &d);


    if(b * log(a) > d * log(c))
            printf("YES\n");
        else
            printf("NO\n");

    return 0;
}
