#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("out.txt", "w", stdout);
     #endif
}
void code()
{
    int n,x;
    cin>>n;
    vector<pair<long long int,long long int>>p;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        p.push_back({x,i});
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    int cnt=1;
    long long int sum=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        if(i&1)
        {
            v[p[i].second]=-1*cnt;
            sum+=2*cnt*p[i].first;
            cnt++;
        }
        else
        {
            v[p[i].second]=1*cnt;
            sum+=2*cnt*p[i].first;

        }
    }
    cout<<sum<<'\n'<<0<<" ";
    for(auto x:v) cout<<x<<" ";
        cout<<'\n';

    
}
int main() {
     setup();

       int tt;
       cin>>tt;
       while(tt--) code();
}