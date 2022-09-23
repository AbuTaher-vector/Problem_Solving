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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
    vector<pair<int,int>>a;
    for(int i=n-1;i>=0;i--)
    {
        if(a.size()==n/2) break;
        a.push_back({v[i],v[0]});
    }

    for(int i=0;i<a.size();i++) cout<<a[i].first<<" "<<a[i].second<<'\n';
}
int main() {
     setup();
        
        int tt;
        cin>>tt;
        while(tt--) code();
}