#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
void code()
{
    nn n,m,x,y;
    cin>>n>>m>>x>>y;
    ss s[n];
    nn ans=0;
    for(nn i=0;i<n;i++) cin>>s[i];
    for(nn i=0;i<n;i++)
    {
        for(nn j=0;j<m;j++)
        {
            if(s[i][j]=='.')
            {
                if(j+1<m && s[i][j+1]=='.')
                {
                    if(x*2<=y) ans+=(x*2);
                    else ans+=y;

                    j++;
                }
                else ans+=x;

            }
        }
    }
    cout<<ans<<nl;
    

}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();
}