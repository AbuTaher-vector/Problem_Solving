#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll tt,sum=0;
    cin>>tt;
     string s,s1;
     cin>>s>>s1;
     for(ll i=0;i<tt;i++)
     {
         ll mn=min(s[i],s1[i]);
         ll mx=max(s[i],s1[i]);
         ll k=min((mx-mn),(mn+10-mx));
         sum+=k;
     }
     cout<<sum<<endl;
}