#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    ss s;
    cin>>s;
    nn k=stoll(s)%3,sum=0;
    vector<nn>v(3);
    if(k==0) cout<<0<<nl;
    else
    {
         for(nn i=0;i<s.size();i++)
         {
            sum+=s[i]-'0';
            v[(s[i]-'0')%3]++;

         }
         if(k==1)
         {
            if(v[1]>0 && s.size()>1) cout<<1<<nl;
            else if(v[2]>1 && s.size()>2) cout<<2<<nl;
            else cout<<-1<<nl;
         }
         else
         {
             if(v[2]>0 && s.size()>1) cout<<1<<nl;
            else if(v[1]>1 && s.size()>2) cout<<2<<nl;
            else cout<<-1<<nl;

         }
    }
}