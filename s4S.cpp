#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t="";
    cin>>s;
    vector< string > v;
    int i=0, x=0;
    while(i<s.size()){
        t += s[i];
        if(s[i]=='L') x++;
        else x--;
        if(x==0){
            v.push_back(t);
            t="";
        }
        i++;
    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
