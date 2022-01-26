#include<bits/stdc++.h>
using namespace std;
int main()
{
         long long a,b,x,y,t,i,cnt,c,d,lol;
         cin>>t;
         while(t--)
        {
            cin>>a>>b;
            x=max(a,b);
            y=min(a,b);
            lol=x-y;
            cnt=0;
            c=lol/10;
            d=lol%10;
            if(d==0) cout<<c<<endl;
            else cout<<c+1<<endl;

        }





}