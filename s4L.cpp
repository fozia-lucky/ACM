#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,s;
    int i,n,q;
    int l,r;
    cin>>n>>q;
    cin>>str;
    for(i=0;i<q;i++)
    {
        cin>>s;
        if(s=="substr")
        {
            cin>>l>>r;
            if(l<r)
                cout<<(str.substr(l-1,(r-l+1)))<<endl;
                else

                     cout<<(str.substr(r-1,(l-r+1)))<<endl;


        }
        else if(s=="sort")
        {
            cin>>l>>r;
            if(l<r)
               sort(str.begin()+(l-1),str.begin()+r);
                else

                       sort(str.begin()+(r-1),str.begin()+l);
        }
         else if(s=="pop_back")
         {
             str=str.substr(0,str.size()-1);
         }
         else if(s=="back")
         {
             cout<<str[str.size()-1]<<endl;
         }
         else if(s=="reverse")
         {
              cin>>l>>r;
            if(l<r)
               reverse(str.begin()+(l-1),str.begin()+r);
                else

                       reverse(str.begin()+(r-1),str.begin()+l);
         }
         else if(s=="front")
         {
          cout<<str[0]<<endl;
         }
         else if(s=="push_back")
         {char c;
         cin>>c;
         str.push_back(c);

         }
         else if(s=="print")
         {
             int p;
             cin>>p;
             cout<<str[p-1]<<endl;

         }

    }

    return 0;
}
