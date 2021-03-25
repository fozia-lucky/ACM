#include <bits/stdc++.h>
using namespace std;
int main()
{
    char key[]= "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char original[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int a;
    string str;
    cin>>a>>str;
    if(a==1)
    {
        for(int i=0;str[i]!='\0';i++)
        {
            for(int j=0;j<62;j++)
            {
                if(str[i]==original[j])
                {
                    str[i]=key[j];
                    break;
                }
            }
        }
        cout<<str;
    }
    else
    {
        for(int i=0;str[i]!='\0';i++)
        {
            for(int j=0;j<62;j++)
            {
                if(str[i]==key[j])
                {
                    str[i]=original[j];
                    break;
                }
            }
        }
        cout<<str;

    }
}
