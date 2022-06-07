#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
     nn n,k;
     ss s;
     cin>>n>>k>>s;
     nn cnt=0;
     for(nn i=0;i<k;i++)
     {
      if(s[i]!='B') cnt++;
     }
     nn ans=cnt;
     nn x=1,y=k;
     while(y!=n)
     {
        if(s[x-1]=='W') cnt--;
        if(s[y]=='W') cnt++;
        ans=min(cnt,ans);
        x++,y++;

     }
     cout<<ans<<nl;

}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     
     nn tt;
     cin>>tt;
     while(tt--) code();
     
}