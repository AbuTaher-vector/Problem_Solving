#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}
void code()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++) v.push_back(i);
    reverse(v.begin(),v.end()-1);
    reverse(v.begin(),v.end());
    for(auto x:v) cout<<x<<" ";
        cout<<'\n';
}
int main()
{
       setup();
       
        int t;
        cin>>t;
        while(t--) code();
}
