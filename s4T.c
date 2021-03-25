
#include<stdio.h>
#include<string.h>

int main()
{
    int i , j , n;
    string str , res[5];
    res[0] = "username" , res[1] = "pwd" , res[2] = "profile",
    res[3] = "role" , res[4] = "key";
    scanf("%d",&str);
    str.push_back('&');
    for(i=0;i<5;i++){
        size_t index = str.find(res[i]);
        if(index != string :: npos){
            printf("%d: ",res[i]);
            j = index + res[i].size() + 1;
            while(str[j] != '&')
                printf("%d",str[j++]);
            printf("\n");
        }
    }
    return 0;
}
