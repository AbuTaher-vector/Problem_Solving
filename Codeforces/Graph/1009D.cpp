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
int main()
{
   setup();
    nn n,m;
    cin>>n>>m;
    vector<pair<nn,nn>>v;
    if(n-1>m)
    {
        cout<<"Impossible"<<nl;
        return 0;

    } 
    for(nn i=1;i<=n && m;i++)
    {
        for(nn j=i+1;j<=n && m;j++)
        {
            if(__gcd(i,j)==1)
            {
                v.push_back(make_pair(i,j));
                m--;

            }
        }
    }
    if(m) cout<<"Impossible"<<nl;
    else
    {
        cout<<"Possible"<<nl;
        for(auto x:v) cout<<x.first<<" "<<x.second<<nl;
    }
      
}