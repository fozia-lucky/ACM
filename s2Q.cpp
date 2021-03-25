#include <iostream>
using namespace std;

int main()
{
    long int T,i ,res=0,m=0;
    long  int n,rem;
    cin>>T;
    for(i=1;i<=T;i++)
    {

        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            m=m*10+rem;
            n/=10;


        }
        while(m>0)
        {
            res+=(m%10);
            res*=10;
            m/=10;


        }
        res=res/10;
        while(res!=0)
         {


     cout<<res%10<<" ";
     res=res/10;
        }
        cout<<endl;

    }
    return 0;


}





