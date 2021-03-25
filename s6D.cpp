#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,q;
    cin>>a>>b>>q;

    if(q%3ll==0ll)
    {
        cout<<(a^b)<<endl;
    }
    else if(q%3ll==1ll)
    {


        cout<<a<<endl;
    }
    else

    {
        cout<<b<<endl;
    }

    return 0;
}
