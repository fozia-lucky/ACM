#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a , b , c , d , ans , x , y;
    cin>>a>>b>>c>>d;
    if(b * log(a) > d * log(c))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
