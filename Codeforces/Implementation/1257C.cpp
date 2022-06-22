#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n;
    cin>>n;
    vector<nn>a[n+1];
    nn x;
    for(nn i=1;i<=n;i++)
    {
        cin>>x;
        a[x].push_back(i);
    }
    int ans=INT_MAX,check=ans;
    for(nn i=1;i<=n;i++)
    {
        if(a[i].size()>1)
        {
           for(nn j=0;j<a[i].size()-1;j++)
           {
              ans=min(ans,a[i][j+1]-a[i][j]+1);
           }
        }

    }
    if(check==ans) cout<<-1<<nl;
    else cout<<ans<<nl;
    
}
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputtt.txt", "w", stdout);
     #endif
      nn tt;
      cin>>tt;
      while(tt--) code();
}