#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
int code()
{
    nn n;
    cin>>n;
    vector<pair<nn,nn>>v;
    nn x,y;
    while(n--)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(nn i=0;i<v.size()-1;i++)
    {
         
            if(v[i].first>v[i+1].first)
            {
                cout<<"NO"<<nl;
                return 0;
            }
            if(v[i].first==v[i+1].first && v[i+1].second>v[i].second)
            {
                cout<<"NO"<<nl;
                return 0;
            }
            if(v[i].first<v[i].second)
            {
                cout<<"NO"<<nl;
                return 0;
            }
            if(v[i].second>v[i+1].second)
            {
                cout<<"NO"<<nl;
                return 0;
            }
            if((v[i+1].first-v[i].first)<(v[i+1].second-v[i].second))
            {
                cout<<"NO"<<nl;
                return 0;
            }
         
    }
    if(v.back().first<v.back().second)
    {
        cout<<"NO"<<nl;
        return 0;
    }
    cout<<"YES"<<nl;
    return 0;

}
int main()
{
        setup();
        nn tt;
        cin>>tt;
        while(tt--) code();
}