#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , j , a,siz;
    cin>>a;
    string str="abcdefghijklmnopqrstuvwxyz";
    char b;
    int arr[26]={0};

    for(i=0;i<a;i++){
        cin>>b;
        for(j=0;j<26;j++)
        {
            if(b==str[j])
            {
                arr[j]++;
            }
        }
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
            siz=arr[i];
            for(j=0;j<siz;j++)
                cout<<str[i];
        }
    }


}
