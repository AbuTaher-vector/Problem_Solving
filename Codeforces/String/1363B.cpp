#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int check(ss a,ss s)
{
     nn cnt=0;
       for(nn i=0;i<s.size();i++)
       {
            if(a[i]!=s[i]) cnt++;
       }
       return cnt;
}
void code()
{
     ss s;
     cin>>s;
     nn n=s.size();
     ss a(n,'0'),b(n,'1');
     nn ans=min(check(a,s),check(b,s));
     for(nn i=0;i<n;i++)
     {
           a[i]='1';
           b[i]='0';
           ans=min(ans,min(check(a,s),check(b,s)));
     }
     cout<<ans<<nl;

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();

}