#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,m,ans=INT_MAX;
    cin>>n>>m;
    vector<ss>v(n);
    for(nn i=0;i<n;i++) cin>>v[i];
    for(nn i=0;i<n-1;i++)
    {
        ss x=v[i];
        for(nn j=i+1;j<n;j++)
        {
            ss y=v[j];
            nn a=0;
            for(nn k=0;k<m;k++)
            {
                a+=abs(x[k]-y[k]);

            }
            ans=min(a,ans);

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