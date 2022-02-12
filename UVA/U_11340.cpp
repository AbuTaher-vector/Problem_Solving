#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn t,tt;
     char x;
     nn a;
     cin>>t;
     map<char,nn>mp;
     while(t--)
     {
          cin>>x>>a;
          mp[x]=a;
     }
     ll sum=0;
    cin>>tt;
    tt++;
    while(tt--)
    {
        ss s;
        getline(cin,s);
        for(nn i=0;i<s.size();i++)
        {
          if(mp.count(s[i])) sum+=mp[s[i]];
          
        }
    }
    cout<<sum/100<<"."<<(sum/10)%10<<sum%10<<"$"<<nl;
     
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
}