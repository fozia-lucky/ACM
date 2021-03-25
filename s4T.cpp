#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , j , n;
    string str , res[5];
    res[0] = "username" , res[1] = "pwd" , res[2] = "profile",
    res[3] = "role" , res[4] = "key";
    cin>>str;
    str.push_back('&');
    for(i=0;i<5;i++){
        size_t index = str.find(res[i]);
        if(index != string :: npos){
            cout<<res[i]<<": ";
            j = index + res[i].size() + 1;
            while(str[j] != '&')
                cout<<str[j++];
            cout<<endl;
        }
    }
    return 0;
}
