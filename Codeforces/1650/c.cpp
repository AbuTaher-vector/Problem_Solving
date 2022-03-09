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
    cin>>n>>m;
    vector<pair<ll,pair<ll,ll>>>v(m);
    for(nn i=0;i<m;i++) 
        {
            cin>>v[i].second.first>>v[i].first;
            v[i].second.second=i+1;
        }
        sort(v.begin(),v.end());
        ll sum=0;
        vector<pair<ll,ll>>a;
        for(nn i=0;i<2*n;i++)
        {
            sum+=v[i].first;
            a.push_back(make_pair(v[i].second.first,v[i].second.second));

        }
        cout<<sum<<nl;
        sort(a.begin(),a.end());
        for(nn i=0;i<n;i++) cout<<a[i].second<<" "<<a[2*n-1-i].second<<nl;
            cout<<nl;


}

int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
      
}