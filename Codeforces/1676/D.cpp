#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,m;
    ll ans=INT_MIN;
    cin>>n>>m;
    nn arr[n+1][m+1];
    for(nn i=0;i<n;i++)
    {
        for(nn j=0;j<m;j++) cin>>arr[i][j];
    }
    for(nn i=0;i<n;i++)
    {
        for(nn j=0;j<m;j++) 
        {
            ll c=0;
            nn x=i,y=j;
            while(x!=n && y!=m)
            {
                c+=arr[x][y];
                x++,y++;
            }
            x=i,y=j;
            x--,y--;
            while(x!=-1 && y!=-1)
            {
                c+=arr[x][y];
                x--,y--;
            }
            x=i,y=j;
            x++,y--;
            while(x!=n && y!=-1)
            {
                c+=arr[x][y];
                x++,y--;
            }
            x=i,y=j;
            x--,y++;
            while(x!=-1 && y!=m)
            {
                c+=arr[x][y];
                x--,y++;
            }
            ans=max(c,ans);
        }
    }
    cout<<ans<<nl;

  
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}